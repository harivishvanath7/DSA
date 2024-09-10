public class ExceptionHandling {
    public static void main(String[] args) {
        int a = 10;
        int b = 0;

        // throwing exception
        try {
            System.out.println(a/b);
        } 

        // catches the throwing of error to the complier within it and handles
        catch (ArithmeticException e) {
            System.out.println("B is 0 - can\'t divide");
        }
        
        finally {
            System.out.println("This will always execute.");
        }

        System.out.println("end of code..");
    }
}

/*
 For one try block - many catches possible (min:1)
 */
