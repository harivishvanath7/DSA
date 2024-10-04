public class Methods {
    public static void main(String[] args) {
        int res = add(10, 15);
        res = res * 100;
        // Method Call
        System.out.println(res); // Arguments
    }
    // Method Definition
    public static int add(int a, int b) { // Parameters
        int c = a+b;
        return c;
    }
}

/*
 TYPES:
 void - params & non-params
 non-void (int, string, char, float, etc...) - params & non-params
 */