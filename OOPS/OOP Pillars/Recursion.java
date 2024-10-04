public class Recursion {
    public static void main(String[] args) {
        printNnat(10);
    }

    public static void printNnat(int n) {
        // Base Case 
        if (n == 1) {
            System.out.println(n);
            return;
        }
        System.out.println(n);
        // Recursion call
        printNnat(n-1);
    }
}
