/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.executorservice;

import java.util.ArrayList;
import java.util.List;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;


/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        User user = new User();
        Thread t1 = new Thread(user);
        Thread t2 = new Thread(user);
        Thread t3 = new Thread(user);
        Thread t4 = new Thread(user);
        Thread t5 = new Thread(user);
        List<Thread>list = new ArrayList<>();
        list.add(t1);
        list.add(t2);
        list.add(t3);
        list.add(t4);
        list.add(t5);
        ExecutorService ex = Executors.newFixedThreadPool(2);
        
        for(Thread t : list){
            ex.submit(t);   
        }
        ex.shutdown(); // إغلاق ExecutorService
        System.out.println("Shut down");
       
    }
}
