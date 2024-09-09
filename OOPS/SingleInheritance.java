public class SingleInheritance {
    public static void main(String[] args) {
        Son obj = new Son();

        System.out.println(obj.gender);
        System.out.println(obj.dob);

        obj.print();
    }
}

// Parent class
class Appa{
    String gender = "M";
    int dob = 1969;

    public void print(){
        System.out.println("Father class => (Parent...)");
    }
}

// Single child inheriting Parent
class Son extends Appa{

}