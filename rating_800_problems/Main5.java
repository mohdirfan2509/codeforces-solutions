package com.pw.ioi;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Scanner;

public class Main5 {

	public static void main(String[] args) {
		
		Scanner scan= new Scanner(System.in);
		
		int test_cases=scan.nextInt();
		for(int i=0;i<test_cases;i++) {
			
			int n= scan.nextInt();
			int [] arr= new int[n];
			HashMap<Integer,Integer> hm= new HashMap<Integer,Integer>();
			for(int j=0;j<n;j++) {
				
				arr[j]=scan.nextInt();
				hm.putIfAbsent(arr[j],0);
			    Integer x=hm.get(arr[j]);
			    hm.replace(arr[j], x, ++x);
			}
			
			if(n==2) {
				System.out.println("YES");
			}else if(hm.size()==1) {
				
				System.out.println("YES");
				
			}else if(hm.size()==2) {
				ArrayList<Integer> al=new ArrayList<Integer>();
				Iterable<Integer> itr=hm.values();
				for(Integer y:itr) {
					al.add(y);
				}
				if(Math.abs(al.get(0)-al.get(1))<=1) {
					System.out.println("YES");
				}else {
					
					System.out.println("NO");
					
				}
			}else {
				
				System.out.println("NO");
				
			}
			
			
			
			
		}

	}

}
