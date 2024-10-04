/*
    Association in Java:
        In association, one object uses or interacts with another without owning it.

    Example: A Car and Driver can exist independently, but they interact.
*/

class Driver {
    String name;
    
    Driver(String name) {       // Constructor
        this.name = name;
    }
}

class Car {
    String brand;
    Driver driver;  // Association: Car has a Driver

    Car(String brand, Driver driver) {
        this.brand = brand;
        this.driver = driver;
    }

    void display() {
        System.out.println(brand + " is driven by " + driver.name);
    }
}

public class Association {
    public static void main(String[] args) {
        Driver driver = new Driver("John");
        Car car = new Car("Toyota", driver);
        car.display();  // Output: Toyota is driven by John
    }
}
