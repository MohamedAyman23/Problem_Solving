/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.polymorphism;

/**
 *
 * @author moham
 */
public class SalariedEmployee extends Employee {
    float bonous;

    public SalariedEmployee() {
    }

    @Override
    public float getSalary() {
        return (salary + bonous);
    }

    @Override
    public void setSalary(float salary) {
        this.salary = salary + bonous;
    }

    public SalariedEmployee(float bonous) {
        this.bonous = bonous;
    }

    public SalariedEmployee(float bonous, String name, String email, float salary) {
        super(name, email, salary);
        this.bonous = bonous;
    }
    @Override
    public void Print(){
        System.out.println("SalariedEmployee --> Subclass");
    }
    
}
