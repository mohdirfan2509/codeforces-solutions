package com.pw.ioi;

import java.util.Scanner;

public class Main11 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int sum=0;
			for(int j=0;j<n-1;j++) {
				
				sum=sum+scan.nextInt();
			}
			System.out.println(-1*sum);
		}

	}

}
