package com.pw.ioi;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

public class Main15 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n=scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			Arrays.sort(arr);
			int minElemCount=1;
			for(int j=1;j<n;j++) {
				if(arr[j]==arr[0]) {
					minElemCount++;
				}
			}
			ArrayList<Integer> b=new ArrayList<Integer>();
			ArrayList<Integer> c=new ArrayList<Integer>();
			if(minElemCount==n) {
				System.out.println(-1);
			}else {
				for(int j=0;j<n;j++) {
					if(arr[j]==arr[0]) {
						b.add(arr[j]);
					}else {
						c.add(arr[j]);
					}
				}
				System.out.println(b.size()+ " "+c.size());
				for(Integer x:b) {
					System.out.println(x+" ");
				}
				for(Integer x:c) {
					System.out.println(x+" ");
				}
				System.out.println();
			}
			
			
		}
		

	}

}
