/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.threads_sleepmethod;

/**
 *
 * @author Mohammed Ayman
 */
public class Synchronized {
    
    public synchronized void print(Object obj){
        for(int i=0; i < 3; i++){
            try {
                System.out.println(obj);
                Thread.sleep(3000);
            } catch (InterruptedException ex) {
                System.out.println(ex);
            }
        }
    }
}
