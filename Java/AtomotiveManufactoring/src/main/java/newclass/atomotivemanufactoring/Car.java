/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.atomotivemanufactoring;

/**
 *
 * @author moham
 */
public abstract class Car {
    private int numberOfWheels;
    private float hight;
    private float weight;

    public int getNumberOfWheels() {
        return numberOfWheels;
    }

    public float getHight() {
        return hight;
    }

    public float getWeight() {
        return weight;
    }

    public void setNumberOfWheels(int numberOfWheels) {
        this.numberOfWheels = numberOfWheels;
    }

    public void setHight(float hight) {
        this.hight = hight;
    }

    public void setWeight(float weight) {
        this.weight = weight;
    }
    
    abstract public void autoPilot();
    abstract public void streamingServices();
    abstract public void parkingSensors();
    
}
