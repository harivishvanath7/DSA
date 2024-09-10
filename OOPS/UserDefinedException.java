// USER-DEFINED EXCEPTION
class UserDefinedException extends Exception {
    String msg;

    // Constructor
    UserDefinedException(String str) {
        this.msg = str;
    }

    // Custom method to get the exception message
    String getMsg() {
        return this.msg;
    }
}

// Main Class
class UserDef {
    static void check(int age) throws UserDefinedException, ArithmeticException {
        if (age < 18) {
            throw new UserDefinedException("Age Invalid");
        } else {
            throw new ArithmeticException("Age Valid");
        }
    }

    public static void main(String[] args) {
        try {
            check(17);  // This will trigger the UserDefinedException
        } catch (UserDefinedException e) {
            System.out.println(e.getMsg());  // Calling custom getMsg() method
        } catch (ArithmeticException e) {
            System.out.println(e.getMessage());  // Using getMessage() for ArithmeticException
        }
    }
}
