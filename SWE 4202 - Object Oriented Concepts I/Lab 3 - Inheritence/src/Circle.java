public class Circle extends Shape {
    private double radius;

    public Circle(String color,String shape, double radius) {
        super(color,shape);
        this.radius = radius;
    }

    private double getRadius() {
        return radius;
    }

    @Override
    public void displayInfo() {
        super.displayInfo();
    }

    @Override
    public double calculateArea() {
        return Math.PI * getRadius() * getRadius();

    }
}
