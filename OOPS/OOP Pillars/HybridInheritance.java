public class HybridInheritance {
    public static void main(String[] args) {
        
        Amma obj1 = new Amma();

        System.out.println(obj1.gender);
        obj1.print();

        Mama obj2 = new Mama();

        System.out.println(obj2.gender);
        obj2.print();
        
        MamaPonnu obj3 = new MamaPonnu();

        System.out.println(obj3.gender);
        obj3.print();
    }
}

// Parent class
class Thatha{
    String gender = "M";
    int dob = 1939;

    public void print(){
        System.out.println("GrandFather class => (Parent...)");
    }
}

// Child-1 inheriting Parent ( Hierarchial )
class Amma extends Thatha{
    String gender = "F";   // Overriding
}

// Child-2 inheriting Parent ( Hierarchial )
class Mama extends Thatha{
    // Gender "M" by default
}

class MamaPonnu extends Mama{ // ( Hierarchial -> MultiLevel )
    String gender = "F"; 
    public void print(){
        System.out.println("Chinna Ponnu");
    }
}