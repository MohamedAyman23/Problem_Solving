/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.exceptionhandlingpart3_2;

/**
 *
 * @author moham
 */
public class InvalidAmmountException extends Exception {
    public InvalidAmmountException(){
        super();
    }
    public InvalidAmmountException(String message){
        super(message);
    }
}
