package com.pw.ioi;

import java.util.Scanner;

public class Main24 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int a=scan.nextInt();
			int b=scan.nextInt();
			int c=scan.nextInt();
			int d=scan.nextInt();
			if(b <= d &&  (d-b)+a >= c ) {
				System.out.println(2*(d-b)+a-c);
			}else {
				System.out.println(-1);
			}
		}
		scan.close();

	}

}
