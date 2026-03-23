package com.pw.ioi;

import java.util.Scanner;

public class Main12 {

	public static void main(String[] args) {

		Scanner scan = new Scanner(System.in);
		int test_cases = scan.nextInt();
		for (int l = 0; l < test_cases; l++) {

			char[][] arr = new char[10][10];
			for (int j = 0; j < 10; j++) {
				String str = scan.next();
				for (int k = 0; k < 10; k++) {
					arr[j][k] = str.charAt(k);
				}
			}
			int points = 0;
			int n = 10;

			for (int k = 0; k < 5; k++) {

				int i = k;
				int j = k;
				n--;
				int m = k;
//					******* TOP ROW *******
				while (j < n) {
					if (arr[i][j] == 'X') {
						points = points + k + 1;
					}
					j++;
				}

//					******* RIGHT COLUMN *******
				while (i < n) {
					if (arr[i][j] == 'X') {
						points = points + k + 1;
					}
					i++;
				}

//					******* BOTTOM ROW *******
				while (j > m) {
					if (arr[i][j] == 'X') {
						points = points + k + 1;
					}
					j--;
				}

//					******* LEFT COLUMN *******
				while (i > m) {
					if (arr[i][j] == 'X') {
						points = points + k + 1;
					}
					i--;

				}
			}
			System.out.println(points);
		}
		scan.close();
	}
}
