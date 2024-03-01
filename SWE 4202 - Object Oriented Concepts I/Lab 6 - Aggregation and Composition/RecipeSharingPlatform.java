import java.util.ArrayList;
import java.util.List;

// Chef class
class Chef {
    private String chefName;
    private List<Recipe> recipes;

    public Chef(String chefName) {
        this.chefName = chefName;
        this.recipes = new ArrayList<>();
    }

    public void addRecipe(Recipe recipe) {
        recipes.add(recipe);
    }

    public void removeRecipe(Recipe recipe) {
        recipes.remove(recipe);
    }

    public String getChefName() {
        return chefName;
    }
}

// Recipe class
class Recipe {
    private String recipeName;
    private List<Chef> chefs;

    public Recipe(String recipeName) {
        this.recipeName = recipeName;
        this.chefs = new ArrayList<>();
    }

    public void addChef(Chef chef) {
        chefs.add(chef);
    }

    public void removeChef(Chef chef) {
        chefs.remove(chef);
    }

    public String getRecipeName() {
        return recipeName;
    }
}

// User class
class User {
    private String userName;
    List<Recipe> favoriteRecipes;
    List<Chef> favoriteChefs;

    public User(String userName) {
        this.userName = userName;
        this.favoriteRecipes = new ArrayList<>();
        this.favoriteChefs = new ArrayList<>();
    }

    public void addFavoriteRecipe(Recipe recipe) {
        favoriteRecipes.add(recipe);
    }

    public void removeFavoriteRecipe(Recipe recipe) {
        favoriteRecipes.remove(recipe);
    }

    public void addFavoriteChef(Chef chef) {
        favoriteChefs.add(chef);
    }

    public void removeFavoriteChef(Chef chef) {
        favoriteChefs.remove(chef);
    }

    public String getUserName() {
        return userName;
    }

    public void getChefsList() {
        for (int i = 0; i < favoriteChefs.size(); i++) {
            System.out.println("Chef List: " + favoriteChefs.get(i).getChefName());            
        }
    }

    public void getRecipeList() {
        for (int i = 0; i < favoriteRecipes.size(); i++) {
            System.out.println("Recipe List: " + favoriteRecipes.get(i).getRecipeName());            
        }
    }
}

public class RecipeSharingPlatform {
    public static void main(String[] args) {
        Chef chef1 = new Chef("Keka Ferdousi");
        Chef chef2 = new Chef("Gordon Ramsey");

        Recipe recipe1 = new Recipe("Kacchi Biriyani");
        Recipe recipe2 = new Recipe("Pepperoni Pizza");

        chef1.addRecipe(recipe1);
        chef2.addRecipe(recipe2);

        User user = new User("Alice");
        user.addFavoriteRecipe(recipe1);
        user.addFavoriteChef(chef2);

        chef1.removeRecipe(recipe1); // This should not affect the recipe or user
        chef2.removeRecipe(recipe2); // This should also remove the recipe from the platform

        System.out.println("User: " + user.getUserName());
        user.getChefsList();
        user.getRecipeList();
        
    }
}
