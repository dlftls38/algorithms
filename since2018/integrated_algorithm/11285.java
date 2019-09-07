import java.util.*;

public class Main {
	public static void main(String... args) {
		Scanner sc = new Scanner(System.in);
		String[] first = { "ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ", "ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ" };
		String[] second = { "た", "だ", "ち", "ぢ", "っ", "つ", "づ", "て", "で", "と", "ど", "な", "に", "ぬ", "ね", "の", "は", "ば", "ぱ", "ひ", "び" };
		String[] third = { "", "ぁ", "あ", "ぃ", "い", "ぅ", "う", "ぇ", "ぉ", "お", "か", "が", "き", "ぎ", "く", "ぐ", "け", "げ", "ご", "さ", "ざ", "し", "じ", "ず", "せ", "ぜ", "そ", "ぞ" };
		char letter = 0xAC00;

		String temp = sc.nextLine();
		for (int i = 0; i < first.length; i++)
			if (temp.equals(first[i]))
				letter += i * 21 * 28;

		temp = sc.nextLine();
		for (int i = 0; i < second.length; i++)
			if (temp.equals(second[i]))
				letter += i * 28;

		temp = sc.nextLine();
		for (int i = 0; i < third.length; i++)
			if (temp.equals(third[i]))
				letter += i;

		System.out.print(letter);
	}
} 
