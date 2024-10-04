// CLASS - Collection of Variables and Methods (Members of the class)

class ClassExample {
    
    // Class Variables - Fields
    private String name;
    int rollno;

    // Class Method
    public void display(){
        System.out.println(name);
        System.out.println(rollno);
    }

    // Set Values Method
    public void setValues(String str, int roll){
        name = str;
        rollno = roll;
    }

    // Get Values Method
    public String getValue(){
        return name;
    }

    public static void main(String[] args) {
        
        // OBJECT - Instance of the class

        // Object creation - 1
        ClassExample obj1 = new ClassExample();

        obj1.setValues("Hari Vishvanath", 7);

        obj1.display();

        // Object creation - 2
        ClassExample obj2 = new ClassExample();

        obj2.setValues("Kumaraswamy", 8);
        obj2.display();

        String name2 = obj2.getValue();
        System.out.println(name2);
    }
}


/*
 ACCESS MODIFIERS:
 
 public: 
 - Accessible from anywhere, including other classes, packages, and files.

 private: 
 - Only accessible within the same class. It cannot be accessed from outside the class directly.

 protected: 
 - Accessible within the same class, the same package, and by subclasses (child classes), even if they are in different packages.

 (default): 
 - Also known as "package-private," it is the default when no access modifier is specified.
 - Accessible only within the same package, but not outside the package, even if they are in a subclass.

 Getter & Setter Methods:
 - These are used to access and modify private variables from outside the class.
 - They provide controlled access and are used to maintain encapsulation.
 */
