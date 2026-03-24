package com.pw.ioi;

import java.util.Scanner;

public class Main16 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int a=scan.nextInt();
			int b=scan.nextInt();
			int c=scan.nextInt();
			if(a>b) {
				System.out.println("First");
			}else if(b>a){
				System.out.println("Second");
			}else if(a==b && c%2==0) {
				System.out.println("Second");
			}else {
				System.out.println("First");
			}
		}

	}

}
