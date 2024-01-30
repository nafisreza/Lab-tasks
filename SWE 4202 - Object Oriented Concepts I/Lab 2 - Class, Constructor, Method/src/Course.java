public class Course {
    private String courseName;
    private int courseCode;

    public Course(String courseName, int courseCode) {
        this.courseName = courseName;
        this.courseCode = courseCode;
    }

    public void displayCourseInfo() {
        System.out.println("Course: " + courseName + " - " + courseCode);
    }
}
