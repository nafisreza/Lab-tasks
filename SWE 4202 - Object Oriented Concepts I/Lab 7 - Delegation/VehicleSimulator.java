public class VehicleSimulator {
    public static void main(String[] args) {
    Car car = new Car("NewCar", 500, 600);
    Bus bus = new Bus("NewBus", 300, 200);
    // Create Drivers and perform vehicle operations
    Driver carDriver = new Driver("Charlie", car);
    carDriver.speedUp(20);
    carDriver.turn("Left");
    carDriver.move(200);
    Driver busDriver = new Driver("Adib", bus);
    busDriver.move(50);
    busDriver.refuel(200);
    busDriver.displayStatus();
    }
    }