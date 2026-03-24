package com.pw.ioi;

import java.util.Scanner;

public class Main4 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		
		 for(int i=0;i<test_cases;i++) {
			 
			    int n=scan.nextInt();
				int [] arr= new int[n];
				for(int j=0;j<n;j++) {
					
					arr[i]=scan.nextInt();
				}
				
				if(arr[0] !=1) {
					System.out.println("NO");
				}else {
					System.out.println("YES");
				}
			
			
			
	



	  }

    }
}
