/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.exceptionhandlingpart3_2;

/**
 *
 * @author moham
 */
public class EgyptBank {
    private double balance;
    public double withdraw(double ammount) throws InsuffcientFundException{
        if( balance < ammount){
            throw new InsuffcientFundException(ammount +"This is an insufficient funds");
        }
        balance -= ammount;
        return ammount;
    }
    
    public void deposite(double ammount) throws InvalidAmmountException{
        if(50 > ammount){
            throw new InvalidAmmountException(ammount +"is not valid ammount");
        }
        balance += ammount;    
    }
    
    public void balanceEnquiry(){
        System.out.println("The Balance is = " +balance);
    }
}
