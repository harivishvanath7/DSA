
public class MultiLevelInheritance {
    public static void main(String[] args) {
        Son obj = new Son();

        System.out.println(obj.gender);
        System.out.println(obj.dob);

        obj.print();
    }
}

// Parent class
class Thatha{
    String gender = "M";
    int dob = 1939;

    public void print(){
        System.out.println("GrandFather class => (Parent...)");
    }
}

// Child inheriting Parent
class Amma extends Thatha{
    String gender = "F";   // Overriding
}
// Grand-child inheriting Parent
class Son extends Amma{

}