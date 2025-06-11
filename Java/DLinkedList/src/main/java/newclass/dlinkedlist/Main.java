/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.dlinkedlist;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        DoubleLinkedList dL = new DoubleLinkedList(new Node<Integer>(null, 10, null));
        dL.display();
        dL.add(new Node(null, 20, null));
        dL.add(new Node(null, 30, null));
        dL.add(new Node(null, 40, null));
        dL.add(new Node(null, 50, null));
        dL.add(new Node(null, 60, null));
        dL.add(new Node(null, 70, null));
        dL.add(new Node(null, 80, null));
        dL.add(new Node(null, 90, null));
        dL.add(new Node(null, 100, null));
        dL.add(new Node(null, 110, null));
        dL.delete();
        dL.display();
        
    }
}
