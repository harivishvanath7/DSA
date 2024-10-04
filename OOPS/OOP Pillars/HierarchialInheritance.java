public class HierarchialInheritance {
    public static void main(String[] args) {
        
        Amma obj1 = new Amma();

        System.out.println(obj1.gender);
        obj1.print();

        Mama obj2 = new Mama();

        System.out.println(obj2.gender);
        obj2.print();
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

// Child-1 inheriting Parent
class Amma extends Thatha{
    String gender = "F";   // Overriding
}

// Child-2 inheriting Parent
class Mama extends Thatha{
    // Gender "M" by default
}