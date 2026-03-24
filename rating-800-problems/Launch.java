package com.pw.ioi;

public class Launch {
	public static void main(String[] args) {
		Thread t= Thread.currentThread();
		System.out.println(t);
		t.setName("first");
		t.setPriority(6);
		System.out.println(t);
	}

}
