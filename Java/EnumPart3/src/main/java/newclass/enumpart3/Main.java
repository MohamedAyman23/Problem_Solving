/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.enumpart3;
import java.util.EnumSet;
import java.util.EnumMap;
/**
 *
 * @author moham
 */
public class Main {
    public enum weekDays{
        SATURDAY,
        SUNDAY,
        MONDAY,
        TUESDAY,
        WENDESDAY,
        THURSDAY,
        FRIDAY;
        public weekDays val;
    }
    public static void main(String[] args) {
        EnumSet <weekDays> days = EnumSet.of(weekDays.FRIDAY, weekDays.MONDAY);
        weekDays day1 = weekDays.MONDAY;
        System.out.println("The day is " + days);
        System.out.println("The day is " +day1);
        
    }
}
