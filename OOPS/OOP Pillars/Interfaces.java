interface Father{
    // All methods used here must be abstract
    abstract void call();
    abstract void talk();
}

// Use "implements" keyword here

class Interfaces implements Father {
    public void call(){
        System.out.println("Calling...");
    }
    public void talk(){
        System.out.println("Talking...");
    }

    public static void main(String[] args) {
        Interfaces obj = new Interfaces();
        obj.call();
        obj.talk();
    }
}
