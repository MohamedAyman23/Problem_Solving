/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.linkedqueue;

/**
 *
 * @author Mohammed Ayman
 * @param <T>
 */
public class LinkedQueue <T>{
    private int counter = 0;
    private NodeDouble Rear;
    private NodeDouble Front;
    
    public LinkedQueue(NodeDouble newNode){
        Rear = newNode;
        Front = newNode;
        counter++;
    }
    
    public void enQueue(NodeDouble newNode){
        Rear.setPrevious(newNode);
        newNode.setNext(Rear);
        Rear = newNode;
        ++counter;
    }
    
    public T deQueue(){
        T item = (T) Front.getValue();
        Front = Front.getPrevious();
        Front.setNext(null);
        --counter;
        return item;
    }
    
    public void display(){
        int count = counter;
        NodeDouble front = Front;
        while(count != 0){
            System.out.println(front.getValue());
            front = front.getPrevious();
            count--;
        }
    }
}
