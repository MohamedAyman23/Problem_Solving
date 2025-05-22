/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.atomotivemanufactoring;

/**
 *
 * @author moham
 */
public class HatchBack extends Car{
    @Override
    public void autoPilot(){
        System.out.println("HatckBack autoPilot is running");
    }
    @Override
    public void streamingServices(){
        System.out.println("HatchBack Streaming Services are running");
    }
    @Override
    public void parkingSensors(){
        System.out.println("HatckBack parking sensors are running");
    }
}
