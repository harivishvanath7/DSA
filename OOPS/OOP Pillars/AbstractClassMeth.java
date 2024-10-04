// Abstract class - no instantiation (no object creation)
abstract class Computer {
    // Abstract methods - declaration only, definition in the inherited class only
    abstract void turnOff();
    abstract void turnOn();    
}

class HP extends Computer{
    // Defining Abstract methods here
    void turnOn(){
        System.out.println("Turning ON HP");
    }

    void turnOff(){
        System.out.println("Turning OFF HP");
    }
}

class ASUS extends Computer{
    // Defining Abstract methods here
    void turnOn(){
        System.out.println("Turning ON ASUS");
    }

    void turnOff(){
        System.out.println("Turning OFF ASUS");
    }
}


public class AbstractClassMeth {
    public static void main(String[] args) {
        // Cant create objects for abstract methods, so we do this...
        HP obj1 = new HP();
        obj1.turnOn();
        obj1.turnOff();
        
        ASUS obj2 = new ASUS();
        obj2.turnOn();
        obj2.turnOff();
    }
}
