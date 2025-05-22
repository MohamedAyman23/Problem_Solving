/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.polymorphism;

/**
 *
 * @author moham
 */
public class Main {
    public static void p(Employee e1){
        e1.Print();
    }
    public static void main(String[] args) {
        /*Employee e1 = new Employee("Mohammed", "mido@gmail.com", 12000);
        SalariedEmployee e2 = new SalariedEmployee((float)2300.456, "Ahmed", "ahmed@gmil.com", 16000);
        System.out.println(e1.getSalary());
        System.out.println(e2.getSalary());
        Employee e3 = new Employee("Mohamed", "medo@gmail.com", 12000);
        System.out.println(e3.getSalary());
        e3 = new SalariedEmployee((float)2300.456, "Ahmed", "ahmed@gmil.com", 16000);
        System.out.println(e3.getSalary());
        p(e1);
        p(e2);
        p(e3);
        p(new SalariedEmployee());
        p(new Employee());
        */
        Employee []refArray = new Employee[4];
        refArray[0] = new Employee();
        refArray[1] = new SalariedEmployee();
        refArray[2] = new DailyEmployee();
        refArray[3] = new HourlyEmployee();
        for (Employee refArray1 : refArray) {
            refArray1.Print();
        }
        System.out.println("------------------------------------------------------------------------");
        Employee []refArray2 = new Employee[]{new Employee(), new SalariedEmployee()};
        for(Employee refArray3 : refArray2){
            p(refArray3);
        }
    }
}
