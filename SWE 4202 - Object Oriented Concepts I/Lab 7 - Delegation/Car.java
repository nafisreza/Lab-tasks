public class Car implements Vehicle{
    String name;
    double initialSpeed;
    double initialFuel;

    public Car(String name, double initialSpeed, double initialFuel) {
        this.name = name;
        this.initialSpeed = initialSpeed;
        this.initialFuel = initialFuel;
    }

    public void move(double initialFuel) {
        if (initialFuel < 0) {
            System.out.println("Not Enough Fuel!!!!");
        } else {
            initialFuel = (initialFuel * 1.20) - (initialFuel);
            System.out.println("Moving!");
        }

    }

    public void turn(String direction) {
        System.out.println(name + " is turning " + direction);
    }

    public void speedUp(double Acceleration) {
        initialSpeed = initialSpeed + (initialSpeed * Acceleration);
        initialFuel = (initialFuel * 1.20) - (initialFuel);
    }

    public void speedDown(double Deceleration) {
        initialSpeed = initialSpeed - (initialSpeed * Deceleration);
        initialFuel = (initialFuel * 1.20) - (initialFuel);
    }

    public void refuel(double ExtraFuelValue) {
        initialFuel = initialFuel + ExtraFuelValue;
    }

    public void displayStatus() {
        System.out.println("Name: " + name);
        System.out.println("Speed: " + initialSpeed);
        System.out.println("Remaining Fuel: " + initialFuel);

    }
}
