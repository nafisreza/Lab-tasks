public class Main {
    public static void main(String[] args) {
        // Create objects of Circle and Rectangle
        Circle myCircle = new Circle("Red", "Circle",5.0);
        Rectangle myRectangle = new Rectangle("Blue", 4.0, 6.0);

        myCircle.displayInfo();
        System.out.println("Circle Area: " + myCircle.calculateArea());

        myRectangle.displayInfo();
        System.out.println("Rectangle Area: " + myRectangle.calculateArea());
    }
}