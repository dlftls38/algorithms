import java.util.*;

public class Main {
	public static void main(String... args) {
		Scanner sc = new Scanner(System.in);
		String[] first = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		String[] second = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		String[] third = { "", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
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
