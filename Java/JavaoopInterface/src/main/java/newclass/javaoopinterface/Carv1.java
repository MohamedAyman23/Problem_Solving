/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.javaoopinterface;

/**
 *
 * @author moham
 */
public class Carv1 implements Movable, SelfDrivable {
    private int x, y;
    private int numberOfPassengers;
    
    public Carv1(){
        
    }
    public Carv1(int x, int y, int numberofPassengers) {
        this.x = x;
        this.y = y;
        this.setNumberOfPassengers(numberofPassengers);
    }

    public void setNumberOfPassengers(int numberOfPassengers) {
        this.numberOfPassengers = numberOfPassengers;
    }

    public int getNumberOfPassengers() {
        return numberOfPassengers;
    }
    
    
    @Override
    public void moveUp(){
        y--;
    }
    
    @Override
    public void moveDown(){
        y++;
    }
    
    @Override
    public void moveLeft(){
        x--;
    }
    
    @Override
    public void moveRight(){
        x++;
    }
    
    @Override
    public void destination(String d){
        System.out.println("Destination = " +d);
    }
    
    @Override
    public void drive(){
        System.out.println("drive Carv1!");
    }
}
