/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.inheritance;

/**
 *
 * @author moham
 */
public class Tester extends Employee {
    String Department;
    String teamName;
    float salary;

    public String getDepartment() {
        return Department;
    }

    public void setDepartment(String Department) {
        this.Department = Department;
    }

    public String getTeamName() {
        return teamName;
    }

    public void setTeamName(String teamName) {
        this.teamName = teamName;
    }

    public float getSalary() {
        return salary;
    }

    public void setSalary(float salary) {
        this.salary = salary;
    }
    
    public Tester(String Fname, String Lname, String Email, String Department, String teamName, float salary){
        super(Fname, Lname, Email);
        this.Department = Department;
        this.teamName = teamName;
        this.salary = salary;
    }
}
