package com.pw.ioi;

import java.util.Scanner;

public class Main {

	public static void main(String[] args) {
		
		Scanner scan =new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		
		for(int i=0;i<test_cases;i++) {
			
			int n=scan.nextInt();
			int x= scan.nextInt();
			
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			int ans=arr[0];
			for(int k=0;k<n;k++) {
				
				if(k==n-1) {
					int a= (x-arr[n-1])*2;
					ans=Math.max(ans, a);
				}else {
					int b=arr[k+1]-arr[k];
					ans=Math.max(ans,b);
				}
				
				
			}
			
			System.out.println(ans);
			
		}
	}

}
