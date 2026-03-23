package com.pw.ioi;

import java.util.Scanner;

public class Main10 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			int count=0;
			for(int j=1;j<n-1;j++) {
				if(arr[j]+arr[j-1]==7 && arr[j]+arr[j+1]==7) {
					
				}
			}
		
		}

	}

}
