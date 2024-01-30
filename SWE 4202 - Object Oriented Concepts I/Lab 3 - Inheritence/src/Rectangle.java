public class Rectangle extends Shape{
    private double length;
    private double width;

    // Constructors
    public Rectangle() {
        super(); // Call the constructor of the base class
        this.length = 0.0;
        this.width = 0.0;
    }

    public Rectangle(String color, double length, double width) {
        super(color); // Call the parameterized constructor of the base class
        this.length = length;
        this.width = width;
    }

    public double calculateArea() {
        return length * width;
    }

    // Overriding displayInfo method from the base class
    @Override
    public void displayInfo() {
        System.out.println("This is a " + getColor() + " rectangle with length " + length + " and width " + width + ".");
    }
}
