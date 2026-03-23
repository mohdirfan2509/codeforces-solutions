package com.pw.ioi;

import java.util.Scanner;
public class Main30 {
	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n=scan.nextInt();
			int a=scan.nextInt();
			int b=scan.nextInt();
				if(n-a-b>=2) {
					System.out.println("YES");
				}else {
					if(a==b && b==n) {
						System.out.println("YES");
					}else {
						System.out.println("NO");
					}
				}
		}
		scan.close();
	}
}
