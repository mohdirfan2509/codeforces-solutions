package com.pw.ioi;

import java.util.Scanner;

public class Main8 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int [n];
			boolean found=false;
			
			
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
				
				if(arr[j]==67) {
					found=true;
				}
			}
			
			if(found ==true) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
			
			
		}

	}

}
