package com.pw.ioi;

import java.util.Scanner;

public class Main2 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		
		for(int i=0;i<test_cases;i++) {
			
			int len=scan.nextInt();
			String s=scan.next();
			if(s.contains("...")) {
				System.out.println(2);
			}else {
				
				int dots=0;
				for(int j=0;j<s.length();j++) {
					
					if(s.charAt(j)=='.') dots++;
				}
				System.out.println(dots);
			}
		}
	}

}
