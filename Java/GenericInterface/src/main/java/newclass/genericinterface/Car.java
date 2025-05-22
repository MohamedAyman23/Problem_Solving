/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.genericinterface;

/**
 *
 * @author moham
 */
public class Car <T> implements GenericTestInterface <T>, SelfDrivable{

    
    @Override
    public T carModel(){
        return (T)new Carv1();
    }
}
