/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package newclass.genericinterface;

/**
 *
 * @author moham
 */
public interface Movable {
    void moveUp();
    void moveDown();
    void moveLeft();
    void moveRight();
    default void printCarName(String carName){
        System.out.println("The Car Name is " +carName);
    }
}
