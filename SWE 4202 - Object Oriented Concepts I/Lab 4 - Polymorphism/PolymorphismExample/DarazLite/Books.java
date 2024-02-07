public class Books extends Product {
    private String author;
    private String publisher;
    private String genre;

    public Books(String name, int quantity, String desc, double basePrice, String author, String publisher, String genre){
        super(name, quantity, desc, basePrice);
        this.author = author;
        this.publisher = publisher;
        this.genre = genre;
    }

    public String getGenre(){
        return genre; 
    }
}
