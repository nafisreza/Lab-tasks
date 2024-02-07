public class Purchase {
    Product product;
    String discountCode;

    public Purchase(Product product, String discountCode){
        this.product = product;
        this.discountCode = discountCode;
    }

    public double calculateTotal(){
        double total = product.basePrice * product.quantity;

        total = total * 0.9;

        if(product instanceof Books){
            if(((Books) product).getGenre() == "Classic literature"){
                total = total - total * 0.03;
            }else if(((Books) product).getGenre() == "Science Fiction"){
                total = total - total * 0.02;
            }
        }

        if(discountCode == "1234") {
            total = total - 50;
        }

        return total;
    }
}
