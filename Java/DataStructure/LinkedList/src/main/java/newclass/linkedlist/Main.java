/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.linkedlist;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        LinkedList ls = new LinkedList(new Node(10, null));
        ls.add(new Node(20, null));
        ls.add(new Node(30, null));
        Node newNode = new Node(40, null);
        ls.add(newNode);
        ls.display();
    }
}
