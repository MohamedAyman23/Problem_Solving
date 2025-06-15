/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.queuearray;

/**
 *
 * @author Mohammed Ayman
 * @param <T>
 */
public class QueueArray <T> {
    private final int size;
    Object queueArray[];
    private int front;
    private int rear;
    private int counter;
    public QueueArray(int size){
        this.size = size;
        queueArray = new Object[size];
        front =0;
        rear = -1;
        counter = 0;
    }
    
    public void enQueue(Object newItem){
        if(counter == size){
            System.out.println("The Queue is Full");
            return;
        }
        rear = (rear + 1) % size;
        queueArray[rear] = newItem;
        ++counter;
    }
    public T deQueue(){
        if(counter == 0){
            System.out.println("The Queue is Empty"); return null;
        }
        T item = (T) queueArray[front];
        front = (front + 1) % size;
        counter--;
        return item;
    }
    public void display(){
        if(counter == 0){
            System.out.println("The Queue is Empty"); return;
        }
        int Front = front;
        int count = counter;
        while(count != 0){
            System.out.println(queueArray[Front]);
            Front = (Front + 1) % size;
            count--;
        }
    }
    public int getSize() {
        return size;
    }

    public int getFront() {
        return front;
    }

    public int getRear() {
        return rear;
    }

    public int getCounter() {
        return counter;
    }
    
}
