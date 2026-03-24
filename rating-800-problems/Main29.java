package com.pw.ioi;

import java.util.Scanner;

public class Main29 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int n = sc.nextInt();
            String s = String.valueOf(n);

            int d = s.length();
            int firstDigit = s.charAt(0) - '0';

            int ans = (d - 1) * 9 + firstDigit;

            System.out.println(ans);
        }

        sc.close();
    }
}