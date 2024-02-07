public class Main {
    public static void main(String[] args) {
        Clothes cloth1 = new Clothes("Gucci", 12, "This is a dummy description", 400, "XL");

        Books book1 = new Books("Feluda", 42, "This is a description for the book", 700, "Satyajit Ray", "ABC Publishers", "Novel");

        Books book2 = new Books("Deyal", 42, "This is a description for the book", 700, "Humayun Ahmed", "Ananda Publishers", "Classic Literature");

        Purchase purchaseCloth1 = new Purchase(cloth1, "1234");
        Purchase purchaseBook1 = new Purchase(book1, null);
        Purchase purchaseBook2 = new Purchase(book2, "1234");

        double totalClothPrice = purchaseCloth1.calculateTotal();
        double totalBook1Price = purchaseBook1.calculateTotal();
        double totalBook2Price = purchaseBook2.calculateTotal();

        System.out.println("Cloth Price: " + totalClothPrice);
        System.out.println("First Book Price: " + totalBook1Price);
        System.out.println("Second Book Price: " + totalBook2Price);
    }
}