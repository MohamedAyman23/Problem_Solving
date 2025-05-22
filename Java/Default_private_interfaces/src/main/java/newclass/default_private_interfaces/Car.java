/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.default_private_interfaces;

/**
 *
 * @author moham
 */
public class Car implements Movable, Drivable{

    @Override
    public void moveUp() {
        System.out.println("MoveUp");
    }

    @Override
    public void moveDown() {
        System.out.println("moveDown");
    }

    @Override
    public void startEngine() {
        System.out.println("The Engine is beginning");
    }

    @Override
    public void stopEngine() {
        System.out.println("The Engine is shutting down");
    }
    
}
