public interface Vehicle {
    public void move(double distance) ;

    public void turn(String direction);

    public void speedUp(double acceleration);

    public void speedDown(double deceleration);
    
    public void refuel(double refuelAmount);

    public void displayStatus();

}
