#include <iostream> 
#include <vector> 
#include <algorithm> 
#include <iomanip> 
using namespace std; 
//x1<x2, y1<y2 
struct Rectangle{ double x1, y1, x2, y2; };
 //���簢������ ������ ����Ѵ�. 
double unionArea(const vector<Rectangle>& rects){
	if(rects.empty()) return 0;
	//�̺�Ʈ ���� : (x��ǥ, �����ΰ� �������ΰ�, �簢���� ��ȣ) 
	typedef pair<double, pair<int, int> > Event; 
	vector<Event> events; 
	vector<double> ys; 
	//�� �簢���� ��ȸ�ϸ鼭 y��ǥ�� ������ �̺�Ʈ�� ������ ã�´�. 
	for(int i=0; i<rects.size(); ++i){ 
		ys.push_back(rects[i].y1); 
		ys.push_back(rects[i].y2); 
		events.push_back(Event(rects[i].x1, make_pair(1,i))); 
		events.push_back(Event(rects[i].x2, make_pair(-1,i))); 
	} 
	//y��ǥ�� ������ �����ϰ� �ߺ��� ���� 
	sort(ys.begin(), ys.end()); 
	ys.erase(unique(ys.begin(), ys.end()), ys.end()); 
	//�̺�Ʈ ����� ���� 
	sort(events.begin(), events.end()); 
	double ret=0; 
	//count[i]=ys[i]~ys[i+1]������ ������ �簢���� �� 
	vector<int> count(ys.size()-1, 0); 
	for(int i=0; i<events.size(); ++i){ 
		double x=events[i].first, delta = events[i].second.first; 
		int rectangle=events[i].second.second; 
		//count[]�� ���� 
		double y1=rects[rectangle].y1, y2=rects[rectangle].y2; 
		for(int j=0; j<ys.size(); ++j) 
			if(y1<=ys[j] && ys[j]<y2) 
				count[j]+=delta; 
	//cutlengt()���� ����Ѵ�. 
	double cutLength=0; 
	for(int j=0; j<ys.size()-1; ++j) 
		if(count[j]>0) 
			cutLength+=ys[j+1]-ys[j]; 
			//���� �̺�Ʈ������ �Ÿ��� cutLength�� ���� ���� ret�� ���Ѵ�. 
	if(i+1 < events.size()) 
		ret+=cutLength*(events[i+1].first-x); 
	} 
	return ret; 
} 
int main(){ 
	int n; 
	scanf("%d",&n); 
	vector <Rectangle> v(n); 
	double a,b,c,d; 
	for(int i=0; i<n; ++i){ 
		scanf("%lf%lf%lf%lf",&a,&b,&c,&d); 
		v[i].x1=a; 
		v[i].y1=b; 
		v[i].x2=a+c; 
		v[i].y2=b+d; 
	} 
	double rst=unionArea(v); 
	int rstInt=(int)rst; 
	if(rstInt == rst) 
		cout<<rstInt<<endl; 
	else 
		cout<<fixed<<setprecision(2)<<unionArea(v)<<endl; 
	return 0; 
}
