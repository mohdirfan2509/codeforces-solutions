package com.pw.ioi;


import java.util.Scanner;

public class Main7 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int k=scan.nextInt();
			int[] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]= scan.nextInt();
			}
			
			String ans= "NO";
			for(int l=0;l<n;l++) {
				if(arr[l]==k) {
					ans="YES";
					break;
				}
				
			}
			System.out.println(ans);
		}

	}

}
