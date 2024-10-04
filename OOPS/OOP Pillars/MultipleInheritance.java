interface Father{
    // All methods used here must be abstract
    abstract void call();
    abstract void talk();
}

interface Mother{
    // All methods used here must be abstract
    abstract void call();
    abstract void talk();
}

// Use "implements" keyword here

class MultipleInheritance implements Father, Mother {  // Class can't extend multiple classes
    public void call(){
        System.out.println("Calling...");
    }
    public void talk(){
        System.out.println("Talking...");
    }

    public static void main(String[] args) {
        MultipleInheritance obj = new MultipleInheritance();
        obj.call();
        obj.talk();
    }
}

/*
 STATIC Keyword - Can access methods or variables within a class without creating an object.
                - Reduces the memory for creating an object
                - Used for making variables "common" to classes i.e, change of value in 1 class affects the other
 
 FINAL Keyword  - Makes the variable/ method values to be can't overriden
 
 SUPER Keyword  - For Using the parent variables/ methods in child's 
 
 THIS Keyword   - Refers to the current object (instance) of the class.
                - Distinguishes between instance variables and method parameters when they have the same name.    
 */