public class Personnel {
    // name, date of birth, address, and unique ID.
    public String name;
    public int birthday;
    public String address;
    public String uniqueID;

    public Personnel(String name, int birthday, String address, String uniqueID) {
        this.name = name;
        this.birthday = birthday;
        this.address = address;
        this.uniqueID = uniqueID;
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Date of Birth: " + birthday);
        System.out.println("Address: " + address);
        System.out.println("ID: " + uniqueID);
    }
}
