package com.pw.ioi;

import java.util.Scanner;

public class Main17 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			int count=0;
			for(int j=0;j<n;j++) {
				if(arr[j]%2==1) {
					count++;
				}
			}
			
			if(count%2==0) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
		}

	}

}
