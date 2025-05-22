/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Enum.java to edit this template
 */
package newclass.enumuration;

/**
 *
 * @author moham
 */
public enum WeekDays {
    SATURDAY("Day Off"), SUNDAY("Working day"), MONDAY, TUESDAY, WENDTHDAY, THURSDAY, FRIDAY("Day Off");
    private String status;
    
    WeekDays(){
        
    }
    
    WeekDays(String status){
        this.status = status;
    }

    public String getStatus() {
        return status;
    }

    public void setStatus(String status) {
        this.status = status;
    }
    
    
}
