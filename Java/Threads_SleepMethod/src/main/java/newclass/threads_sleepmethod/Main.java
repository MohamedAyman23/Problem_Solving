/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.threads_sleepmethod;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        Synchronized s = new Synchronized();
        User u1 = new User(s);
        Person person = new Person(s);
        Thread t1 = new Thread(u1);
        t1.start();
        Thread t2 = new Thread(person);
        t2.start();
        User u2 = new User(s);
        Thread t3 = new Thread(u2);
        t3.start();
        System.out.println(Thread.currentThread().getName());
       
    }
}
