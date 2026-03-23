package com.pw.ioi;

import java.math.BigInteger;
import java.util.Scanner;

public class Main26 {
	
	static int gcd(int a, int b){
	    while(b != 0){
	        int t = a % b;
	        a = b;
	        b = t;
	    }
	    return a;
	}

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
			}
			
			if(n<=1) {
				System.out.println("No");
			}else {
				boolean flag=false;
				for(int j=0;j<n-1;j++) {
					for(int k=j+1;k<n;k++) {
						
						if(gcd(arr[j],arr[k])<=2) {
							System.out.println("Yes");
							flag=true;
							break;
						}
					}
					if(flag==true) {
						break;
					}
				}
				if(flag==false) {
					System.out.println("No");
				}
			}
		}

	}

}
