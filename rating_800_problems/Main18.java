package com.pw.ioi;

import java.util.Scanner;

public class Main18 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			if(n==2) {
				if(arr[0]<=arr[1]) {
					System.out.println(((arr[1]-arr[0])/2) + 1);
				}else {
					System.out.println(0);
				}
				
			}else {
				boolean isSorted=true;
				int ans=Integer.MAX_VALUE;
				for(int j=0;j<n-1;j++) {
					
					if(arr[j]<=arr[j+1]) {
						int diff= ((arr[j+1]-arr[j])/2)+1;
						ans=Math.min(ans,diff);
					}else {
						isSorted=false;
						System.out.println(0);
						break;
					}
					
				}
				if(isSorted) {
					System.out.println(ans);
				}
			}
			
		}
		scan.close();

	}

}
