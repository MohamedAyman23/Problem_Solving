/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.linkedqueue;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        LinkedQueue<Integer> lq =new LinkedQueue<>(new NodeDouble<>(null, 10, null));
        lq.enQueue(new NodeDouble(null, 20, null));
        lq.enQueue(new NodeDouble(null, 30, null));
        lq.enQueue(new NodeDouble(null, 40, null));
        lq.display();
        System.out.println("The returned data is = " +lq.deQueue());
        lq.display();
    }
}
