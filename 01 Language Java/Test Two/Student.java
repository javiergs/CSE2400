
public class Student {

	private String firstName;
	private String lastName;

	/*
	 * Parameterless constructor with default values
	 */
	public Student() {
		lastName = "foo";
		firstName = "bar";
	}

	/*
	 * Parameterized constructor with full name as a parameter containing / between
	 * first and last name e.g. John/Doe
	 */
	public Student(String info) {
		var splitInfo = info.split("/");
		firstName = splitInfo[0];
		lastName = splitInfo[1];
	}

	/*
	 * Returns the student's last name
	 */
	public String getLastName() {
		return lastName;
	}

	/*
	 * Returns the student's first name
	 */
	public String getFirstName() {
		return firstName;
	}

	/*
	 * Returns the student's initials e.g. for John/Doe will return J.D. For default
	 * values returns full first and last name
	 */
	public String toString() {
		if (firstName == "bar" && lastName == "foo")
			return firstName + "." + lastName + ".";
		return firstName.charAt(0) + "." + lastName.charAt(0) + ".";
	}
}
