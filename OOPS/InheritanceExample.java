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
}

public class InheritanceExample {
    public static void main(String[] args) {
        Dog obj = new Dog();

        // Dog class also has the properties of Animal class
        System.out.println(obj.legs);
        System.out.println(obj.canBark);
        
        obj.eat();
        obj.walk();
    }
}



/*

INHERITANCE:-

    Inheritance is a key concept in object-oriented programming (OOP) that 
    allows one class (called the subclass or child class) to inherit properties 
    and behaviors (fields and methods) from another class (called the superclass 
    or parent class). 
    
    This promotes code reusability, as the child class can use 
    or override the methods and attributes of the parent class without having to rewrite them.

    Purpose: To establish a relationship between classes and promote code reuse.
    
    Keyword: In Java, inheritance is achieved using the extends keyword.
 
*/