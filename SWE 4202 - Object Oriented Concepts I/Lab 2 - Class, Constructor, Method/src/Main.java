public class Main {
    public static void main(String[] args) {
        // Create an instance of the Student class
        Student student1 = new Student("John Doe", 20);

        // Create an instance of the Course class
       Course course1 = new Course("SWE", 4202);

        // Create an instance of the Grade class
        Grade grade1 = new Grade(20,80,90,80);
        
        // Display information using methods
        student1.displayStudentInfo();
        course1.displayCourseInfo();
        grade1.displayGradeInfo();
     }
}
