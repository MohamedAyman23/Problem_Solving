/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.atomotivemanufactoring;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        Car car1 = new HatchBack();
        car1.autoPilot();
        car1 = new Sedan();
        car1.autoPilot();
        car1 = new Suv();
        car1.autoPilot();
    }
}
