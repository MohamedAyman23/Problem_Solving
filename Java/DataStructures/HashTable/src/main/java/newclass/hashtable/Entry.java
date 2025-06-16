/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.hashtable;

/**
 *
 * @author Mohammed Ayman
 * @param <K>
 * @param <V>
 */
public class Entry<K, V> {
    private K key;
    private V value;
    private Entry next;
    
    public Entry(){
        this.next = null;
    }
    public Entry(K key, V value){
        this.key = key;
        this.value = value;
        this.next = null;
    }
    public K getKey(){
        return key;
    }
    public V getValue(){
        return value;
    }
    public Entry getNext(){
        return next;
    }
    public void setNext(Entry next){
        this.next = next;
    }
    public void setValue(V value){
        this.value = value;
    }
}
