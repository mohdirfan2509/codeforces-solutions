package com.pw.ioi;

import java.util.Scanner;

public class Main20 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int x= scan.nextInt();
			int k=scan.nextInt();
			if(x % k != 0) {
				System.out.println(1);
				System.out.println(x);
			}else {
				System.out.println(2);
				for(int j=1;j<=x;j++) {
					if(j % k !=0 && (x-j) % k !=0) {
						System.out.println(j);
						System.out.println(x-j);
						break;
					}
				}
			}
		}
		scan.close();

	}

}
