/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.linkedlist;

/**
 *
 * @author Mohammed Ayman
 * @param <T>
 */
public class Node <T>{
    T value;
    Node next;
    public Node(T value, Node next){
        this.value = value;
        this.next = next;
    }
}
