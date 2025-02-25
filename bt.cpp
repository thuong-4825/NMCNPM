package srt;

import java.util.Scanner;

improt java.util.Scanner;

public class TinhS {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int x = sc.nextInt();;
		int S = 0;
		for (int i = 1; i <= x; i++) {
			String x2 ="" + i + i;
			S += Integer.parseInt(x2);
		}
		System.out.println("S=" + S);
	}

}