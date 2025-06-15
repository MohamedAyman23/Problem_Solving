/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.stackdynamicarray;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        StackDynamicArray Sd = new StackDynamicArray<Integer>(5);
        Sd.display();
        System.out.println(Sd.pop());
        Sd.push(10);
        Sd.push(20);
        Sd.push(30);
        Sd.push(40);
        Sd.push(50);
        Sd.display();
        Sd.push(60);
        
    }
}
