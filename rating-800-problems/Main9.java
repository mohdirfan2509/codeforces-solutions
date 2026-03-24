package com.pw.ioi;

import java.util.Scanner;

public class Main9 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			boolean canBeSorted=true;
			for(int k=0;k<=(n/2)-1;k++) {
				
				if(arr[k] != k+1) {
					if((k+1)*2 > (n/2)-1 && (arr[k] == (k+1)*2 && arr[(k+1)*2 -1] == k+1) ){
						canBeSorted=true;
					}else {
						canBeSorted=false;
					}
				} 
					
	
			}
			if(canBeSorted) {
				System.out.println("YES");
			}else {
				System.out.println("NO");
			}
		}

	}

}
