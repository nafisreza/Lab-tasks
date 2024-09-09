public class Driver implements Vehicle {
    Vehicle Vehicle;
    String name;
    
    public Driver(String name, Vehicle Vehicle) {
        this.name = name;
        this.Vehicle = Vehicle;
    }

    public void move(double initialFuel) {
        Vehicle.move(initialFuel);
    }

    public void turn(String direction) {
        Vehicle.turn(direction);
    }

    public void speedUp(double Acceleration) {
        Vehicle.speedUp(Acceleration);
    }

    public void speedDown(double Deceleration) {
        Vehicle.speedDown(Deceleration);
    }

    public void refuel(double ExtraFuelValue) {
        Vehicle.refuel(ExtraFuelValue);
    }

    public void displayStatus() {
        Vehicle.displayStatus();
    }
}
