public abstract class Vehicle {
    String name;
    double initialSpeed;
    double currentSpeed;
    double initialFuel;
    double currentFuel;
    double cargoCapacity;
    double altitude;

    public Vehicle(String name, double initialSpeed, double initialFuel, double cargoCapacity) {
        this.name = name;
        this.initialSpeed = initialSpeed;
        this.currentSpeed = initialSpeed;
        this.initialFuel = initialFuel;
        this.currentFuel = initialFuel;
        this.cargoCapacity = cargoCapacity;
        this.altitude = 0;
    }

    public void move(double distance) {
        double fuelRequired = distance * getFuelConsumptionRate();
        if (currentFuel >= fuelRequired) {
            currentFuel -= fuelRequired;
            System.out.println(name + " is moving. Distance: " + distance + " km");
        } else {
            System.out.println(name + " does not have enough fuel. Refuel needed.");
        }
    }

    public void turn(String direction) {
        System.out.println(name + " is turning " + direction);
    }

    public void speedUp(double acceleration) {
        currentSpeed += currentSpeed * (getSpeedingRate() / 100) + acceleration;
        System.out.println(name + " is speeding up. New speed: " + currentSpeed + " km/h");
    }

    public void speedDown(double deceleration) {
        currentSpeed -= currentSpeed * (getSlowingRate() / 100) + deceleration;
        System.out.println(name + " is slowing down. New speed: " + currentSpeed + " km/h");
    }

    public void displayStatus() {
        System.out.println("Status of " + name + ": Speed - " + currentSpeed + " km/h, Fuel - "
                + currentFuel + " liters, Altitude - " + altitude + " meters");
    }

    abstract double getFuelConsumptionRate();

    abstract double getSpeedingRate();

    abstract double getSlowingRate();

    public void refuel(int refuelAmount) {
        System.out.println(refuelAmount + " is refueled in the car.");
    }
}
