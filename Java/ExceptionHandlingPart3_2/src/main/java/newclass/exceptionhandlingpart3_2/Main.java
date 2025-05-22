/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.exceptionhandlingpart3_2;

import java.util.InputMismatchException;
import java.util.Scanner;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        try{
            Scanner in = new Scanner(System.in);
            EgyptBank acc1 = new EgyptBank();
            String option = "";
            do{
                
                System.out.println("1. Deposite");
                System.out.println("2. Withdraw");
                System.out.println("3. Balance Enquiry");
                System.out.println("Enter Option");
                option = in.next();
                switch(option){
                    case "1" ->  {
                        System.out.println("Enter the Deposit Amount");
                        double ammount = in.nextDouble();
                        acc1.deposite(ammount);
                        acc1.balanceEnquiry();
                        break;
                    }
                    case "2" -> {
                        System.out.println("Enter the Amount to withdraw...");
                        double ammount = in.nextDouble();
                        double wd = acc1.withdraw(ammount);
                        System.out.println("The Withdraw Amount is " +wd);
                        acc1.balanceEnquiry();
                        break;
                    }
                    case "3" -> {
                        acc1.balanceEnquiry();
                        break;
                    }
                }
                System.out.println("Do You Want To continue (YES/NO)");
                option = in.next();
            }while(option.equalsIgnoreCase("yes"));
        }catch(InvalidAmmountException | InsuffcientFundException | NumberFormatException | InputMismatchException e){
            System.out.println(e);
        }
            
    }
}
