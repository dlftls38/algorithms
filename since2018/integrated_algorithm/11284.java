import java.util.*;

public class Main {
	public static void main(String... args) {
		int letter = new Scanner(System.in).next().charAt(0) - 0xAC00;
		String[] first = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		String[] second = { "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		String[] thrid = { "", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��", "��" };
		System.out.println(first[letter / 21 / 28]);
		System.out.println(second[(letter % (21 * 28)) / 28]);
		System.out.println(thrid[letter % 28]);
	}
} 
