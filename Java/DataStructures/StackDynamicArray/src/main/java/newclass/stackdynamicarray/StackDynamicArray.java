/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.stackdynamicarray;

import java.util.Arrays;
/**
 *
 * @author Mohammed Ayman
 * @param <T>
 */
public class StackDynamicArray <T> {
    private final int size;
    private Object StackD_Array[];
    private int Top;
    
    public StackDynamicArray(int size){
        this.size = size;
        StackD_Array = new Object[size];
        this.Top = -1;
    }
    public void push(T newItem){
       ensureCapacity(Top + 1);
       ++Top;
       this.StackD_Array[Top] = newItem;
    }
    public T pop(){
        if(isEmpty()){
            System.out.println("The stack is empty");
            return null;
        }
        T item = (T) StackD_Array[Top];
        Top--;
        return item;
    }
    
    public void display(){
        int top = Top;
        if(isEmpty()){
            System.out.println("The stack is empty");
            return;
        }
        while(top != -1){
            System.out.println(StackD_Array[top]);
            --top;
        }
    }
    
    
    private boolean isEmpty(){
        return (Top == -1);
    }
    
    private void ensureCapacity(int minCapacity){
        int oldCapacity = (this.StackD_Array.length);
        if(minCapacity >= oldCapacity){
            int newCapacity = oldCapacity * 2;
            if(newCapacity < minCapacity)
                newCapacity = minCapacity;
            StackD_Array = Arrays.copyOf(StackD_Array, newCapacity);
        }else if(minCapacity < (oldCapacity / 2)){
            int newCapacity = (oldCapacity / 2);
            if(newCapacity < minCapacity)
                newCapacity = minCapacity;
            StackD_Array = Arrays.copyOf(StackD_Array, newCapacity);
        }
    }
}
