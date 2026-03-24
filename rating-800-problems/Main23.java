package com.pw.ioi;

import java.util.Scanner;

public class Main23 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n=scan.nextInt();
			int [] arr=  new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			int blank=0;
			int ans=0;
			for(int j=0;j<n;j++) {
				
				if(arr[j]==1) {
					blank=0;
				}
				if(arr[j]==0) {
					blank++;
				}
				ans=Math.max(ans, blank);
			}
			System.out.println(ans);
		}
		
		scan.close();

	}

}
