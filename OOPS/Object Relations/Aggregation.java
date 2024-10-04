/*
    Aggregation in Java
        Aggregation is a "has-a" relationship where the part objects can exist independently of the whole.
 
    Example: A Department contains Employees, but employees can exist without the department.
*/

import java.util.ArrayList;
import java.util.List;

class Employee {
    String name;

    Employee(String name) {
        this.name = name;
    }
}

class Department {
    String deptName;
    List<Employee> employees;  // Aggregation: Department contains Employees

    Department(String deptName) {
        this.deptName = deptName;
        this.employees = new ArrayList<>();
    }

    void addEmployee(Employee employee) {
        employees.add(employee);
    }

    void display() {
        System.out.print(deptName + " has employees: ");
        for (Employee e : employees) {
            System.out.print(e.name + " ");
        }
        System.out.println();
    }
}

public class Aggregation {
    public static void main(String[] args) {
        Employee emp1 = new Employee("Alice");
        Employee emp2 = new Employee("Bob");

        Department dept = new Department("Sales");
        dept.addEmployee(emp1);
        dept.addEmployee(emp2);

        dept.display();  // Output: Sales has employees: Alice Bob
    }
}
