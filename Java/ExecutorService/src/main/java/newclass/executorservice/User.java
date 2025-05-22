/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.executorservice;

/**
 *
 * @author Mohammed Ayman
 */
public class User implements Runnable{
    @Override
    public void run(){
        System.out.println("Run....");
        try{
            Thread.sleep(3000);
            System.out.println("End the sleep: ");            
        }catch(InterruptedException e){
            e.printStackTrace();
        }
        System.out.println("Exit...");
    }
}
