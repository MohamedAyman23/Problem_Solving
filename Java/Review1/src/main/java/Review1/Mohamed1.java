/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package Review1;

//import java.util.Scanner;



//import static java.lang.Math.random;
/**
 *
 * @author moham
 */
public class Mohamed1 {

    public static void main(String[] args) {
        outerClass obj1 = new outerClass();
        outerClass.innerClass obj2 = new outerClass.innerClass();
        obj2.printVal();
        NewClass person1 = new NewClass();
        person1.setName("Mohammed Ayman");
        person1.setSalary(70000);
        person1.setExperience(5);
        System.out.println(person1.getExperience());
        Customer client1 = new Customer();
        Customer client2 = new Customer();
        Customer client3 = new Customer("yossef Ayman", 45878996, (float)4589799445.2145, "24/4/2025");
        Customer client4 = new Customer(client3);
        client1.setAccountNumber(245879964);
        client1.setCustomerName("Mohammed Ayman");
        client1.setAmmount((float)7856485648.145687);
        
        client2.insert(458795, "MIDO Ayman", (float)458796856458.24588);
        System.out.println("The client1 data is ..." +client1.toString());
        System.out.println("The client2 data is ..." +client2.toString());
        client1.deposit(4586458);
        client2.deposit(124584);
        client1.withdraw(454544);
        client2.withdraw(874564);
        client1.checkBalance();
        client2.checkBalance();
        System.out.println("The client3 data is ..." +client3.toString());
        System.out.println("The client4 data is ..." +client4.toString());
        
        
    }
}
