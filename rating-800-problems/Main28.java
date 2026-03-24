package com.pw.ioi;

import java.util.Scanner;

public class Main28 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt()%2;
			}
			
			int ops=0;
			int same=0;
			int num=arr[0];
			for(int j=0;j<n;j++) {
				if(arr[j]==num) {
					same++;
				}else {
					ops=ops+same-1;
					num=arr[j];
					same=1;
				}
				
			}
			ops=ops+same-1;
			System.out.println(ops);
		}
		
			
	}

}
