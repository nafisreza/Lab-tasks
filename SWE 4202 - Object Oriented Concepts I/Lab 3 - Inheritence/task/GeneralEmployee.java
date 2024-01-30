public class GeneralEmployee extends Personnel{
    private String designation;
    private int roomNumber;
    private static int joiningYear;

    public GeneralEmployee(String name, int birthday, String address, String designation, int joiningYear, int roomNumber) {
        super(name, birthday, address, generateEmployeeID(birthday));
        this.roomNumber = roomNumber;
        this.designation = designation;
        this.joiningYear = joiningYear;
    }

    private static String generateEmployeeID(int birthday) {
        int randomNumber = (int) (Math.random() * 15) + 5; // Generating a random number between 5 and 19
        return String.valueOf(birthday) + joiningYear + randomNumber;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
        System.out.println("Room Number: " + roomNumber);
        System.out.println("Designation: " + designation);
    }
}