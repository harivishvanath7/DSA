public class ThrowException {
    
    // "throw" keyword - to explicitly throw execption (i.e, we Define it - Manual)

    static void check(int age){
        if (age<18) {
            // throwing an object
            throw new ArithmeticException("Age Invalid"); // Error Message
        }
    }

    public static void main(String[] args) {
        int a = 5;

        try{
            check(a);
        }
        catch(ArithmeticException E){
            System.out.println(E.getMessage());
        }
        System.out.println("Hello");
    }
}
