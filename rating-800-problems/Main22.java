package com.pw.ioi;

import java.util.Scanner;

public class Main22 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			for(int j=0;j<n;j++) {
				System.out.print(n+1-arr[j]+" ");
			}
			System.out.println();
		}
		scan.close();

	}

}
