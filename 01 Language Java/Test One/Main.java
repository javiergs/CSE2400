/** 
 * Working with arrays in Java
 *
 * @version 2020.08
*/
public class Homework {

  public static void initializeArray(char[] integersArray) {
    for (int i = 0; i < integersArray.length; i++) {
      if (i % 2 == 0) {
        integersArray[i] = 'b';
      } else {
	integersArray[i] = 'a';
      }
    }
  }
  
  /**
   * Prints all the elements of array
   */
	public static void printArray(char[] charactersArray) {

		for (int i = 0; i < charactersArray.length; i++) {
			System.out.print(charactersArray[i]);
		}

		System.out.println();
	}

	/*
	 * Sorts a char array in a descending order using SelectionSort
	 */
	public static void selectionSort(char[] charArray) {

		for (int i = 0; i < charArray.length - 1; i++) {
			int indexOfMaxValue = i;

			for (int j = i + 1; j < charArray.length; j++) {
				if (charArray[j] > charArray[i]) {
					indexOfMaxValue = j;
				}
			}

			if (indexOfMaxValue != i) {
				char tmp = charArray[i];
				charArray[i] = charArray[indexOfMaxValue];
				charArray[indexOfMaxValue] = tmp;
			}
		}
	}

	/*
	 * Recursively calculates factorial for a given integer and returns the value
	 */
	public static int factorial(int value) {
		if (value <= 0)
			return 1;
		else
			return value * factorial(value - 1);
	}

	/*
	 * Main method with tests
	 */
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
