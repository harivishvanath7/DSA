class Sample{
    int rollno;
    int marks;

    // Default Constructor - executes by default & sets default values
    Sample(){
        System.out.println("Hey From Default Constructor!!");
        rollno = 007;
        marks = 69;
    }
}

class ConstructorExample {
    public static void main(String[] args) {
        Sample obj = new Sample(); // Constructor - can also pass parameters here
        System.out.println(obj.marks);
    }
}

/*
 CONSTRUCTOR - a special type of method used to initialize objects. 
               It is called when an object of a class is created and 
               is typically used to set initial values for object attributes.

               Same Name as Class, No Return Type, Automatic Calling - once

 TYPES - Default, Parameterized
 */


 /*
 
  Encapsulation:
        Encapsulation is the practice of bundling data (variables) and methods (functions) that operate on the data into a single unit or class. It also restricts direct access to some of an object’s components by using access modifiers (like private, protected, etc.), and it allows controlled access through getter and setter methods.

        Purpose: To protect an object’s data from unauthorized access and modification by ensuring it can only be accessed in controlled ways.
        Implementation: Private variables and public getter/setter methods. 

  Abstraction:
        Abstraction is the concept of hiding the complex implementation details and showing only the essential features of an object. It allows users to interact with objects at a higher level without worrying about the underlying details. In Java, abstraction is achieved through abstract classes and interfaces.

        Purpose: Focuses on what an object does rather than how it does it.
        Implementation: Abstract classes and interfaces in Java allow defining methods without providing their implementation.  

*/