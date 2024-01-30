public class Faculty extends Personnel{
    private String dept;
    private String designation;
    private int roomNumber;
    private static int joiningYear;

    // Constructor with multiple parameters
    public Faculty(String name, int birthday, String address, String dept, String designation, int joiningYear, int roomNumber) {
        super(name, birthday, address, generateFacultyID(dept, birthday));
        this.dept = dept;
        this.designation = designation;
        this.roomNumber = roomNumber; 
    }
    // Method to display information Birthday + Joining year + any number between 5~19
    private static String generateFacultyID(String department, int birthday) {
        int randomNumber = (int) (Math.random() * 10) + 10; // Generating a random number between 10 and 19
        return department + joiningYear + randomNumber;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Department: " + dept);
        System.out.println("Designation: " + designation);
        System.out.println("Room Number: " + roomNumber);
    }
    
}