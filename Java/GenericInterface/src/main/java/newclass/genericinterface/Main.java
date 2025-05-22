/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.genericinterface;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        GenericTestInterface <Car> car1 = new Car();
        /**
         لو مش عايز اعمل casting هروح اخلي ال interface generic using <T>
         */
        Car car2 = car1.carModel();
 
        Car car3 = (Car)car1.carModel();
      
                
    }
}
