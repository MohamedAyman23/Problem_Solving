/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.threads_sleepmethod;

/**
 *
 * @author Mohammed Ayman
 */
public class Person implements Runnable{
    private final Synchronized s;
    public Person(Synchronized s){
        this.s = s;
    }
    
    @Override
    public void run(){
        s.print("person");
    }
}
