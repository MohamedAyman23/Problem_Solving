/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.stackarray;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
       StackArray sa = new StackArray<Integer>(10);
       sa.display();
       sa.push(10);
       sa.push(20);
       sa.push(30);
       sa.push(40);
       sa.push(50);
       sa.push(60);
       sa.push(70);
       sa.push(80);
       sa.push(90);
       sa.push(100);
       sa.display();
       sa.push(120);
       sa.push(130);
    }
}
