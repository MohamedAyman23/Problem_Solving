/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package Review1;

/**
 *
 * @author moham
 */
public class Customer {
    private String customerName;
    private int accountNumber;
    private float ammount;
    private String dataofCreation;
    
    public Customer(){
        System.out.println("Constructor is called..");
    }
    
    public Customer(String customerN, int accNumber, float accountAmount){
        this.customerName = customerN;
        this.accountNumber = accNumber;
        this.ammount = accountAmount;
        
    }
    
    public Customer(String customerN, int accNumber, float accountAmount, String dateOfCreation){
        this(customerN, accNumber, accountAmount);
        this.dataofCreation = dateOfCreation;
    }
    
    public Customer(Customer client){
        this(client.customerName, client.accountNumber, client.ammount, client.dataofCreation);
    }
    
    public void setCustomerName(String customerName) {
        this.customerName = customerName;
    }

    public void setAccountNumber(int accountNumber) {
        this.accountNumber = accountNumber;
    }

    public void setAmmount(float ammount) {
        this.ammount = ammount;
    }

    public String getCustomerName() {
        return customerName;
    }

    public int getAccountNumber() {
        return accountNumber;
    }

    public float getAmmount() {
        return ammount;
    }
    public void insert(int accountNumber, String customerName, float ammount){
        this.setAccountNumber(accountNumber);
        this.setCustomerName(customerName);
        this.setAmmount(ammount);
    }
    
    public void deposit(float amt){
        this.ammount += amt;
    }
    
    public void withdraw(float amt){
        if(amt > this.ammount)
            System.out.println("There is no enough money please check your balance!");
        else
        {            
            System.out.println("The Current ammount is =" +(float)(this.ammount -= amt));
        }
    }
    
    public void checkBalance(){
        System.out.println("The account Balance is = " +(float)this.ammount);
    }

    @Override
    public String toString() {
        return "Customer{" + "customerName = " + customerName + ", accountNumber = " + accountNumber + ", ammount = " + ammount + ", dataofCreation = " + dataofCreation + '}';
    }   
}
