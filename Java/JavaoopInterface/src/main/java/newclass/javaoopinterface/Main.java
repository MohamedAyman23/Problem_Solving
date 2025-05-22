/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.javaoopinterface;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        Carv1 car1 = new Carv1(10, 15, 4);
        car1.destination("Mohamed145548");
        car1.drive();
        car1.moveUp();
        Movable car2 = new Carv1();
        car2.moveDown();
        SelfDrivable car3 = new Carv1();
        car3.destination("Cairo12234.145");
        
    }
}
