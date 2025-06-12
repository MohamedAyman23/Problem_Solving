/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.stackarray;

/**
 *
 * @author Mohammed Ayman
 * @param <T>
 */
public class StackArray <T> {
    private final int size;
    Object []stackArray;
    int top;
    public StackArray(int size){
        this.size = size;
        this.stackArray = new Object[size];
        this.top = -1;
    }
    
    public void push(Object newItem){
        if(isFull()){
            System.out.println("The stack is full"); return;
        }
        top++;
        stackArray[top] = (T)newItem;
    }
    
    public T pop(){
        if(isEmpty()){
            System.out.println("The stack is empty");
            return null;
        }
        T item = (T) stackArray[top];
        top--;
        return item;
    }
    
    public void display(){
        int _top = 0;
        if(isEmpty()){
            System.out.println("The stack is empty..");
            return;
        }
        while(_top <=  this.top){
            System.out.println(stackArray[_top]);
            _top++;
        }    
    }
    
    private boolean isFull(){
        return (top == (size - 1));
    }
    
    private boolean isEmpty(){
        return (top == -1);
    }
}
