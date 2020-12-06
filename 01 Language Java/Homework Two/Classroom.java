/**
 * Template for Homework 02
 * Working with classes and arrays of objects in Java
 *
 * @version 2020.fall
 */
public class Classroom {

	private Student[][] arrangement;

	/*
	 * Parameterized constructor with dimensions of the classroom as input
	 * Initializes the full classroom with students with default values
	 */
	public Classroom(int rowNum, int columnNum) {
		arrangement = new Student[rowNum][columnNum];

		for (int i = 0; i < rowNum; i++) {
			for (int j = 0; j < columnNum; j++) {
				arrangement[i][j] = new Student();
			}
		}
	}

	/*
	 * Returns the Student object at the specific location
	 */
	private Student getStudentAt(int row, int col) {
		return arrangement[row][col];
	}

	/*
	 * Tries to place a student at a specific location in the classroom If that
	 * location is free, i.e. is filled by a student with default values, the
	 * parameter student is placed there and the method returns true; If the
	 * location is already taken by another student that is not a default student,
	 * the method returns false;
	 */
	public boolean setStudentAt(int row, int col, Student data) {
		var existingStudent = getStudentAt(row, col);
		if (existingStudent.getFirstName() == "bar" && existingStudent.getLastName() == "foo") {
			arrangement[row][col] = data;
			return true;
		} else
			return false;
	}

	/*
	 * Checks whether given values for row and column are valid (in bounds) for the
	 * classroom
	 */
	public boolean isValid(int row, int col) {
		if (col < 0 || col >= arrangement.length || row < 0 || row >= arrangement[0].length)
			return false;
		return true;
	}

	/*
	 * Returns a string giving full visualization of the classroom containing the
	 * student's initials or the full name if the student is a default student
	 */
	public String toString() {
		String returnString = "The current seating:";
		returnString += System.lineSeparator();

		for (int i = 0; i < arrangement[0].length; i++) {
			String rowData = "";
			for (int j = 0; j < arrangement.length; j++) {
				rowData += arrangement[i][j].toString() + " ";
			}
			returnString += rowData + System.lineSeparator();
		}
		return returnString;
	}
}
