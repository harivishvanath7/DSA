// Parent Class
class Animal{
    int legs = 4;

    public void eat(){
        System.out.println("Can Eat!!");
    }

    public void walk(){
        System.out.println("Can Walk!!");
    }
}

// Child Class - INHERITANCE
class Dog extends Animal{
    Boolean canBark = true;

    // Variable/ field overriding

    int legs = 45;

    // Method Overriding
    public void eat(){
        System.out.println("Dog Can't Eat!!");
    }
}

public class PolyMorMethOverride {
    public static void main(String[] args) {
        Dog obj = new Dog();

        // Method overriding - considers value of subclass only
        System.out.println(obj.legs);
        System.out.println(obj.canBark);
        
        obj.eat();
        obj.walk();
    }
}

