import java.util.*;

public class Main {
	public static void main(String... args) {
		int letter = new Scanner(System.in).next().charAt(0) - 0xAC00;
		String[] first = { "ぁ", "あ", "い", "ぇ", "え", "ぉ", "け", "げ", "こ", "さ", "ざ", "し", "じ", "す", "ず", "せ", "ぜ", "そ", "ぞ" };
		String[] second = { "た", "だ", "ち", "ぢ", "っ", "つ", "づ", "て", "で", "と", "ど", "な", "に", "ぬ", "ね", "の", "は", "ば", "ぱ", "ひ", "び" };
		String[] thrid = { "", "ぁ", "あ", "ぃ", "い", "ぅ", "う", "ぇ", "ぉ", "お", "か", "が", "き", "ぎ", "く", "ぐ", "け", "げ", "ご", "さ", "ざ", "し", "じ", "ず", "せ", "ぜ", "そ", "ぞ" };
		System.out.println(first[letter / 21 / 28]);
		System.out.println(second[(letter % (21 * 28)) / 28]);
		System.out.println(thrid[letter % 28]);
	}
} 
