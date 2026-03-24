package com.pw.ioi;

import java.util.Scanner;

public class Main13 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		
		int n= scan.nextInt();
		int [] arr= new int [n];
		int minValue=Integer.MAX_VALUE;
		for(int i=0;i<n;i++) {
			arr[i]=scan.nextInt();
			minValue= Math.min(minValue, Math.abs(arr[i]));
		}
		
		System.out.println(minValue);

	}

}
