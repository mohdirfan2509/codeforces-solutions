package com.pw.ioi;

import java.util.Scanner;

public class Main3 {
    
	
	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n=scan.nextInt();
			if((n+1)%3==0 || (n-1)%3==0) System.out.println("First");
			else System.out.println("Second");
		}
		
		

	}
}
