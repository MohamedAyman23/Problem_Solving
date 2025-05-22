/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.inheritance;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        Developer dev1 = new Developer("Ahmed", "Mohammed", "ahmedmohamed@gmail.com","Cairo department", "SLD TEAM", 22800);
        Tester test1 = new Tester("Mahmoud", "Mohammed", "ahmedmohamed@gmail.com","Cairo department", "SLD TEAM", 21800);
        System.out.println(test1.getDepartment());
        System.out.println(dev1.getTeamName());
    }
}
