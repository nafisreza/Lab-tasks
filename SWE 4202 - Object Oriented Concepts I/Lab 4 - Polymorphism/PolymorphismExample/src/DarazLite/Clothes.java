public class Clothes extends Product {
    private String size;

    public Clothes(String name, int quantity, String desc, double basePrice, String size){
        super(name, quantity, desc, basePrice);
        this.size = size;
    }
}
