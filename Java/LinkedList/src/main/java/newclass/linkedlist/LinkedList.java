/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.linkedlist;

/**
 *
 * @author Mohammed Ayman
 */
public class LinkedList {
    Node head;
    public LinkedList(Node head){
        this.head = head;
    }
    public void add(Node newNode){
        newNode.next = head;
        head = newNode;
    }
    public void delete(){
        head = head.next;
    }
    public void display(){
        Node n = head;
        while(n != null){
            System.out.println(n.value);
            n = n.next;
        }
        
    }
}
