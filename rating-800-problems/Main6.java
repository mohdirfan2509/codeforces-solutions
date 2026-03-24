package com.pw.ioi;

import java.util.Scanner;

public class Main6 {

	public static void main(String[] args) {
		
		Scanner scan = new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n=scan.nextInt();
			int m=scan.nextInt();
			String x=scan.next();
			String s=scan.next();
			
			if(x.contains(s)) {
				System.out.println(0);
				continue;
			}
			
			boolean flag=false;
			int count=0;
			while(x.length()<s.length()) {
				x=x+x;
				count++;
				if(x.contains(s)) {
					flag=true;
					System.out.println(count);
					break;
				}			
			}
			
			if(flag==false) {
				x=x+x;
				count++;
				if(x.contains(s)) {
					System.out.println(count);
				}else {
					System.out.println(-1);
				}
			}
			
		}
	}
}
