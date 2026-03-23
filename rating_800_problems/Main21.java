package com.pw.ioi;

import java.util.Scanner;

public class Main21 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			int negCount=0;
			
			for(int j=0;j<n;j++) {
				if(arr[j]==-1) negCount++;
			}
			int posCount=n-negCount;
			int operations=0;
			while(negCount>posCount) {
				negCount--;
				posCount++;
				operations++;
			}
			if(negCount%2 !=0) {
				operations++;
			}
			System.out.println(operations);
			
			
	   }

    }
}
