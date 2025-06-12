/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.dlinkedlist;

/**
 *
 * @author Mohammed Ayman
 */
public class DoubleLinkedList {
    Node head;
    public DoubleLinkedList(Node head){
        this.head = head;
    }
    public void add(Node newNode){
        head.setPrevious(newNode);
        newNode.setNext(head);
        head = newNode;
    }
    public void delete(){
        head = head.getNext();
        head.setPrevious(null);
    }
    public void display(){
        Node n = head;
        while(n != null){
            System.out.println(n.getValue());
            n = n.getNext();
        }
    }
}
