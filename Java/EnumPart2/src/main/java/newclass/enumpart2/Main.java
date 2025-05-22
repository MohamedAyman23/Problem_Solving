/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.enumpart2;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) { 
        Order order1 = new Order();
        order1.setStatus(OrderStatus.PENDING);
        System.out.println(order1.isDeliverable());
        System.out.println(order1.getStatus());
        order1.setStatus(OrderStatus.PREPARING);
        System.out.println(order1.isDeliverable());
        System.out.println(order1.getStatus());
        order1.setStatus(OrderStatus.DELEVIRING);
        System.out.println(order1.isDeliverable());
        System.out.println(order1.getStatus());
    }
}
