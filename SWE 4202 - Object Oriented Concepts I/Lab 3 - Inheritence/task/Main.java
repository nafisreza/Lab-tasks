public class Main {
    public static void main(String[] args) {
        // Create an instance of the Student class
        Student student1 = new Student("Nafis",2004,"Dhaka","CSE","SWE", 2022);
        student1.displayInfo();

        // Create an instance of the Faculty class
        Faculty faculty1 = new Faculty("Reza", 1994, "Dhaka", "CSE", "Professor", 2010, 404);
        faculty1.displayInfo();

        // Create an instance of the General Employee class
        GeneralEmployee employee1 = new GeneralEmployee("Rafi", 1990, "Rajshahi", "Driver", 2015, 203);
        employee1.displayInfo();
       
     }
}
