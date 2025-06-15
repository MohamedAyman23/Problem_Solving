/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.queuearray;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        QueueArray<Integer> qa = new QueueArray(5);
        qa.enQueue(5);
        qa.enQueue(10);
        qa.enQueue(15);
        qa.enQueue(20);
        qa.enQueue(25);
        qa.display();
        qa.enQueue(30);
        System.out.println("The returned value is = " +qa.deQueue());
        qa.display();
        System.out.println("The returned value is = " +qa.deQueue());
        System.out.println("The returned value is = " +qa.deQueue());
        System.out.println("The returned value is = " +qa.deQueue());
        System.out.println("The returned value is = " +qa.deQueue());
        System.out.println("The returned value is = " +qa.deQueue());
        qa.display();
    }
}
