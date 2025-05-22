/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package newclass.default_private_interfaces;

/**
 *
 * @author moham
 */
public interface Drivable {
    void startEngine();
    void stopEngine();
    default void isThereAnyProblemWithEngine(){
        printTheEnginStatus();
        System.out.println("There is no Problem");
    }
    private void printTheEnginStatus(){
        System.out.println("The Engine is Working");
    }
}
