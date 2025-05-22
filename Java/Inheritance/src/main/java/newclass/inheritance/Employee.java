/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.inheritance;

/**
 *
 * @author moham
 */
public class Employee {
    private String Fname;
    private String Lname;
    private String Email;

    public String getFname() {
        return Fname;
    }

    public void setFname(String Fname) {
        this.Fname = Fname;
    }

    public String getLname() {
        return Lname;
    }

    public void setLname(String Lname) {
        this.Lname = Lname;
    }

    public String getEmail() {
        return Email;
    }

    public void setEmail(String Email) {
        this.Email = Email;
    }
    public Employee(String Fname, String Lname, String Email){
        this.Fname = Fname;
        this.Lname = Lname;
        this.Email = Email;
    }
}
