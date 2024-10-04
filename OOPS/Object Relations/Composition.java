class Engine {
    Engine() {
        System.out.println("Engine created");
    }

    // Cleanup method to show when Engine is destroyed (Java doesn't have destructors)
    void destroy() {
        System.out.println("Engine destroyed");
    }
}

class Car {
    Engine engine;  // Composition: Car contains an Engine

    Car() {
        engine = new Engine();
        System.out.println("Car created");
    }

    void destroy() {
        System.out.println("Car destroyed");
        engine.destroy();  // Ensure the Engine is destroyed with the Car
    }
}

public class Composition {
    public static void main(String[] args) {
        Car car = new Car();  // Output: Engine created, Car created
        car.destroy();        // Output: Car destroyed, Engine destroyed
    }
}
