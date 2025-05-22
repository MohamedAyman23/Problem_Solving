/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.polymorphism;

/**
 *
 * @author moham
 */
public class DailyEmployee extends Employee{
    float dailyRate;
    float daysNumber;

    public DailyEmployee() {
    }
    
    @Override
    public float getSalary(){
        return (salary + (dailyRate * daysNumber));
    }

    public DailyEmployee(float dailyRate, float daysNumber) {
        this.dailyRate = dailyRate;
        this.daysNumber = daysNumber;
    }

    public DailyEmployee(float dailyRate, float daysNumber, String name, String email, float salary) {
        super(name, email, salary);
        this.dailyRate = dailyRate;
        this.daysNumber = daysNumber;
    }
    @Override
    public void Print(){
        System.out.println("DailyEmployee --> Subclass");
    }
}
