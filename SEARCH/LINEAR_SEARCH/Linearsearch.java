import java.io.*;
import java.util.*;
public class Linearsearch {
	public static void main(String args[]) {
		Scanner sc=new Scanner(System.in);
		int n=0;
		System.out.println("Enter the size of array: ");
		n=sc.nextInt();
		System.out.println("Enter elements of array: ");
		int a[] = new int[n];
		for(int i=0;i<n;i++) {
			a[i]=sc.nextInt();
		}
		System.out.println("enter the element to be searched: ");
		int k=sc.nextInt();
		for(int i=0;i<n;i++) {
			if(a[i]==k) {
				System.out.println("element found at "+ i);
				return;
			}
		}
		System.out.println("Element not found");
		
	}
}
