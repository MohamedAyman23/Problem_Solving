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
public class NodeDouble <T>{
    private T value;
    private NodeDouble next;
    private NodeDouble previous;
    
    public NodeDouble(NodeDouble previous, T value, NodeDouble next){
        this.previous = previous;
        this.value = value;
        this.next = next;
    }

    public T getValue() {
        return value;
    }

    public NodeDouble getNext() {
        return next;
    }

    public NodeDouble getPrevious() {
        return previous;
    }

    public void setValue(T value) {
        this.value = value;
    }

    public void setNext(NodeDouble next) {
        this.next = next;
    }

    public void setPrevious(NodeDouble previous) {
        this.previous = previous;
    }
    
}
