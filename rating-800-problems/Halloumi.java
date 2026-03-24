package com.pw.ioi;

import java.util.Scanner;
public class Halloumi {

	public static void main(String[] args) {
		
		Scanner scan=new Scanner(System.in);
		int test_cases=scan.nextInt();
		
		for(int i=0;i<test_cases;i++) {
			 
			 int n= scan.nextInt();
			 int k=scan.nextInt();
			 
			 int[] arr= new int[n];
			 for(int j=0;j<n;j++) {
				 arr[j]=scan.nextInt();
			 } 
			 
			 if(k==1) {
				 boolean sorted=true;
				 
				 for(int l=0;l<n-1;l++) {
					 
					 if(arr[l]>arr[l+1]) {
						 sorted=false;
					 }
				 }
				 String ans= sorted ? "YES" : "NO";
				 System.out.println(ans);
			 }else {
				  System.out.println("YES");
			 }
		}
		scan.close();
		

	}

}
