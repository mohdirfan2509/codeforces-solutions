package com.pw.ioi;

import java.util.ArrayList;
import java.util.Scanner;

public class Main14 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			ArrayList<Integer> al= new ArrayList<Integer>();
			al.add(arr[0]);
			
			for(int j=1;j<n;j++) {
				if(arr[j]>=arr[j-1]) {
					al.add(arr[j]);
				}else {
					al.add(1);
					al.add(arr[j]);
				}
			}
			System.out.println(al.size());
			for(Integer k:al) {
				System.out.println(k+" ");
			}
			System.out.println();
			
			
			
			
		}

	}

}
