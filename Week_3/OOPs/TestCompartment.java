package OOPs;
import java.util.*;

abstract class Compartment{
    public abstract String Notice();
}

class FirstClass extends Compartment{
    public String Notice(){
        return "This is First Class Compartment";
    }
}

class Ladies extends Compartment{
    public String Notice(){
        return "This is Ladies Compartment";
    }
}

class General extends Compartment{
    public String Notice(){
        return "This is General Compartment";
    }
}

class Luggage extends Compartment{
    public String Notice(){
        return "This is Luggage Compartment";
    }
}

public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] compart= new Compartment[10];
        for(int i=0; i<10; i++){
            switch (new Random().nextInt(1, 4)) {
                case 1:
                    compart[i] = new FirstClass();
                    break;
                case 2:
                    compart[i] = new Ladies();
                    break;
                case 3:
                    compart[i] = new General();
                    break;
                case 4:
                    compart[i] = new Luggage();
                    break;
            }
        }
        for(int i=0; i<10; i++){
            System.out.println(compart[i].Notice());
        }
    }
}
