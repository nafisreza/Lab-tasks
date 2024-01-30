public class Grade {
    private int attendance;
    private int quizMarks;
    private int midMarks;
    private int finalMarks;

    public Grade(int attendance, int quizMarks, int midMarks, int finalMarks) {
        this.attendance = attendance;
        this.quizMarks = quizMarks;
        this.midMarks = midMarks;
        this.finalMarks = finalMarks;
    }

    public String calculateGrade(){
        int totalMarks = attendance + quizMarks + midMarks + finalMarks;
        float percentage = (float) totalMarks / 300 * 100;

        if(percentage >= 80){
            return "A+";
        }else if(percentage >= 75){
            return "A";
        }else if(percentage >= 70){
            return "A-";
        }else if(percentage >= 65){
            return "B+";
        }else if(percentage >= 60){
            return "B";
        }else if(percentage >= 55){
            return "B-";
        }else if(percentage >= 50){
            return "C";
        }else if(percentage >= 45){
            return "A-";
        }else if(percentage >= 40){
            return "D";
        }else{
            return "Failed";
        }
    }
    
    public void displayGradeInfo() {
        System.out.println("Letter grade: " + calculateGrade());
    }

}
