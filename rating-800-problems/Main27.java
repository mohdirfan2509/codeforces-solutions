package com.pw.ioi;

import java.util.Scanner;

public class Main27 {

	public static void main(String[] args) {
		Scanner scan= new Scanner(System.in);
		int test_cases= scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			int n= scan.nextInt();
			int [] arr= new int[n];
			int twos=0;
			for(int j=0;j<n;j++) {
				arr[j]=scan.nextInt();
				if(arr[j]==2) {
					twos++;
				}
			}
			if(twos % 2==1) {
				System.out.println(-1);
			}else if(twos==0) {
				System.out.println(1);
			}else {
				int val=twos/2;
				for(int j=0;j<n;j++) {
					if(arr[j]==2) {
						val--;
						if(val==0) {
							System.out.println(j+1);
							break;
						}
					}
				}
			}
		}
		scan.close();

	}

}
