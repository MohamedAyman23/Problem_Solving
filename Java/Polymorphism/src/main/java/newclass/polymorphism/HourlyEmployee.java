/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.polymorphism;

/**
 *
 * @author moham
 */
public class HourlyEmployee extends Employee{
    float hourRate;

    public HourlyEmployee() {
    }
    
    @Override
    public float getSalary(){
        return (salary * hourRate);
    }

    public HourlyEmployee(float hourRate) {
        this.hourRate = hourRate;
    }

    public HourlyEmployee(float hourRate, String name, String email, float salary) {
        super(name, email, salary);
        this.hourRate = hourRate;
    }
    @Override
    public void Print(){
        System.out.println("HourlyEmployee --> Subclass");
    }
}
