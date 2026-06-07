interface LibraryUser {
    void register_account();
    void request_book();
}

class KidUser implements LibraryUser{
    int age;
    String bookType;

    public KidUser(int Age, String BookType){
        this.age= Age;
        this.bookType= BookType;
    }
    public void register_account(){
        if(age<12){
            System.out.println("You have successfully registered under a Kids Account");
        }else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }
    public void request_book(){
        if(bookType=="Kids"){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser{
    int age;
    String bookType;

    public AdultUser(int Age, String BookType){
        this.age= Age;
        this.bookType= BookType;
    }
    public void register_account(){
        if(age<12){
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }else{
            System.out.println("You have successfully registered under an Adult Account");
        }
    }
    public void request_book(){
        if(bookType=="Adult"){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }else{
            System.out.println("Oops, you are allowed to take only adult books");
        }
    }
}


public class LibraryInterfaceDemo {
    public static void main(String[] args) {
        //Test Case 1:
        KidUser k1 = new KidUser(10, "Kids");
        KidUser k2 = new KidUser(18, "Fiction");
        k1.register_account();
        k2.register_account();
        k1.request_book();
        k2.request_book();
        //Test Case 2:
        AdultUser a1 = new AdultUser(5, "Adult");
        AdultUser a2 = new AdultUser(25, "Kids");
        a1.register_account();
        a2.register_account();
        a1.request_book();
        a2.request_book();
    }
}
