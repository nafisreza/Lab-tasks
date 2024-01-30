public class Student extends Personnel{
    private String dept;
    private String program;
    private int enrollingYear;

    // Constructor with multiple parameters
    public Student(String name, int birthday, String address, String dept, String program, int enrollingYear) {
        super(name, birthday, address, generateStudentID(dept, birthday));
        this.dept = dept;
        this.program = program;
        this.enrollingYear = enrollingYear;
    }
    
    private String generateStudentID(String dept, int birthday) {
        int randomNumber = (int) (Math.random() * 10); // Generating a random number between 0 and 9
        return dept + enrollingYear + randomNumber;
    }

    // Method to display student information
    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Department: " + dept);
        System.out.println("Program: " + program);
    }
}
