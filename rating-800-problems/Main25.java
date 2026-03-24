package com.pw.ioi;

import java.util.Scanner;

public class Main25 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n=scan.nextInt();
			String s= scan.next();
			int p1=0;
			int p2=s.length()-1;
			boolean flag=false;
			while(p1<=p2) {
				if(s.charAt(p1) != s.charAt(p2)) {
					p1++;
					p2--;
				}else {
					System.out.println(p2-p1+1);
					flag=true;
					break;
				}
			}
			if(flag==false) {
				System.out.println(p2-p1+1);
			}
		}

	}

}
