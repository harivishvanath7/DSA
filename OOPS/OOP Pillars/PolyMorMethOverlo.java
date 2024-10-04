// POLYMORPHISM
public class PolyMorMethOverlo {
    public static void main(String[] args) {
        Method obj = new Method();

        // Same meth name, diff no. of params
        obj.min(5, 4);
        obj.min(5, 6, 7);
    }
}

class Method{

    // Method Overloading - Occurs coz of Different method Signature(return type, no of args, etc..)

    void min(int a, int b){
        if (a<b) {
            System.out.println(a);
        }
        else{
            System.out.println(b);
        }
    }

    // Methods with different params but same name
    void min(int a, int b, int c){
        System.out.println(a);
    }
}