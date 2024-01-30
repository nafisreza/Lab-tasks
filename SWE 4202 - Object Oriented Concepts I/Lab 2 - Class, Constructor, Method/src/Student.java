public class Student {
    private String name;
    private int age;

    // Constructor with multiple parameters
    public Student(String name, int age) {
        this.name = name;
        this.age = age;
    }
    
    // Method to display student information
    public void displayStudentInfo() {
        System.out.println("Student Information:");
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }
}
