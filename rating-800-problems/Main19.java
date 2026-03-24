package com.pw.ioi;

import java.util.Scanner;

public class Main19 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n=scan.nextInt();
			int k=scan.nextInt();
			int x=scan.nextInt();
			if(x!=1) {
				System.out.println("YES");
				System.out.println(n);
				for(int j=1;j<=n;j++) {
					System.out.print("1 ");
				}
				System.out.println();
			}else {
				if(k==1) {
					System.out.println("NO");
				}else {
					if(n%2==0) {
						System.out.println("YES");
						System.out.println(n/2);
						for(int j=1;j<=n/2;j++) {
							System.out.print("2 ");
						}
						System.out.println();
					}else {
						if(k>=3) {
							System.out.println("YES");
							System.out.println(((n-3)/2)+1);
							for(int j=1;j<=(n-3)/2;j++) {
								System.out.print(2+" ");
							}
							System.out.println(3);
							System.out.println();
						}else {
							System.out.println("NO");
						}
					}
				}
			}
		}

	}

}
