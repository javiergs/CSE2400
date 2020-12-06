/** 
 * Template for Homework 01
 * Working with arrays in Java
 *
 * @version 2020.fall
*/
public class Homework {

  public static void initializeArray (char[] array) {
    // create a for loop and put initial values into array
  }
  
  public static void printArray (char[] array) {
		// create a for loop and print all values on array
	}

	public static void selectionSort (char[] array) {
    // implement the selection sort algorithm
	}

	public static int factorial (int value) {
    // implement recursive factorial
	}

	public static void main(String[] args) {
		char[] a = { '2', '5', '7', '9', '2', '3', '1', '7', '9', '0' };
		char[] b = { 'p', 'q', '8', '6', '9', '5', '3', '1', '6' };
		int[] c = { 4, 2, 5, 3, 1 };

		// testing initializeArray
		printArray(a); // print: 2 5 7 9 2 3 1 7 9 0
		initializeArray(a);
		printArray(a); // print: b a b a b a b a b a

		// testing selectionSort
		printArray(b); // print: p q 8 6 9 5 3 1 6
		selectionSort(b);
		printArray(b); // print: q p 9 8 6 6 5 3 1

		// testing factorial
		System.out.println(factorial(5)); // print: 120
		System.out.println(factorial(c[0])); // print: 24
		System.out.println(factorial(c[3])); // print: 6
	}
}
