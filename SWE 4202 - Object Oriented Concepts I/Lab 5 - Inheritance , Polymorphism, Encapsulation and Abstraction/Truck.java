public class Truck extends Vehicle {
    double overload;
    double factor;

    public Truck(String name, double initialSpeed, double initialFuel, double cargoCapacity, double overload) {
        super(name, initialSpeed, initialFuel, cargoCapacity);
        this.overload = overload;
        adjustRates();
    }

    public Truck(String name, double initialSpeed, double initialFuel, double cargoCapacity) {
        super(name, initialSpeed, initialFuel, cargoCapacity);
        this.overload = 1;
        adjustRates();
    }

    private void adjustRates() {
        factor = 1 / overload;
        initialSpeed *= factor;
        currentSpeed *= factor;
    }

    @Override
    double getFuelConsumptionRate() {
        return 1.8 * overload;
    }

    @Override
    double getSpeedingRate() {
        return 78 * factor;
    }

    @Override
    double getSlowingRate() {
        return 60 * factor;
    }
}
