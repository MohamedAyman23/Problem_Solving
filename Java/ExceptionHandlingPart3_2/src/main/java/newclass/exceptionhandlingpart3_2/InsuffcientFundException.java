/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.exceptionhandlingpart3_2;

/**
 *
 * @author moham
 */
public class InsuffcientFundException extends Exception{
    public InsuffcientFundException(){
        super();
    }
    public InsuffcientFundException(String messege){
        super(messege);
    }
        
}
