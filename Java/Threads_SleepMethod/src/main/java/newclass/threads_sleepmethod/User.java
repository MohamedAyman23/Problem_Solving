/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.threads_sleepmethod;

import java.util.logging.Level;
import java.util.logging.Logger;

/**
 *
 * @author Mohammed Ayman
 */
public class User implements Runnable{
    private final Synchronized s;
    public User(Synchronized s){
        this.s = s;
    }
    @Override
    public void run(){
        s.print("user");
    }
    

}
