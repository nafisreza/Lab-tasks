public class App {
    public static void main(String[] args) {
        Vehicle car = new Car("Sedan", 120, 10);
        Vehicle truck = new Truck("Truck", 80, 80, 5000);
        Vehicle overloadedTruck = new Truck("OverloadedTruck", 80, 80, 5000, 2);

        System.out.println("Starting the journey...\n");
        System.out.println("\nInitial status of vehicles:");
        car.displayStatus();
        truck.displayStatus();
        overloadedTruck.displayStatus();

        car.move(20);
        truck.move(30);
        overloadedTruck.move(40);
        truck.speedUp(10);
        car.refuel(40);
        car.move(20);
        overloadedTruck.speedDown(10);

        System.out.println("\nCurrent status of vehicles:");
        car.displayStatus();
        truck.displayStatus();
        overloadedTruck.displayStatus();
    }
}
