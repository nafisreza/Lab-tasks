public class Car extends Vehicle {

    public Car(String name, double initialSpeed, double initialFuel) {
        super(name, initialSpeed, initialFuel, 0);
    }

    @Override
    double getFuelConsumptionRate() {
        return 1.2;
    }

    @Override
    double getSpeedingRate() {
        return 85;
    }

    @Override
    double getSlowingRate() {
        return 75;
    }
}
