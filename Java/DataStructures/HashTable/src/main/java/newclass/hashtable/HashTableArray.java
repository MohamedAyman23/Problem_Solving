/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.hashtable;


/**
 *
 * @author Mohammed Ayman
 * @param <K> Generic data type of key
 * @param <V> Generic data type of value
 */
public class HashTableArray<K, V> {
    private int size;
    private Entry [] hashArray;
    int count;
    private final float load_Factor = 0.75f;
    public HashTableArray(int size){
        this.size = size;
        hashArray = new Entry[size];
        for(int i = 0; i < hashArray.length; i++){
            hashArray[i] = null;
        }
        count = 0;
    }
    
    public void put(K key, V value){
        if(null == key){
            System.out.println("An invalid key!");
            return;
        }
        if(((1.0 * count)/ size) >= load_Factor){
            reHash();
        }
        int index = getHash(key);
        Entry current = hashArray[index];
        while(current != null){
            if(current.getKey().equals(key)){
                current.setValue(value);
                return;
            }
            current = current.getNext();
        }
        //Entry arrayValue = hashArray[index];
        Entry newItem = new Entry<>(key, value);
        newItem.setNext(hashArray[index]);
        hashArray[index] = newItem;
        count++;
    }
    
    public V get(K key){
        if(null == key){
            System.out.println("Key is invalid!");
            return null;
        }
        V value = null;
        int index = getHash(key);
        //this syntax just for debugging 
        //System.out.println("Index = " +index);
        Entry arrayValue = hashArray[index];
        while(null != arrayValue){
            if(arrayValue.getKey().equals(key)){
                //this syntax just for debugging
                //System.out.println("value = " +arrayValue.getValue());
                value = (V)arrayValue.getValue();
                break;
            }
            arrayValue = arrayValue.getNext();
        }
        return value;
    }
    private void reHash(){
        System.out.println("ReHashing...");
        Entry [] oldHash = hashArray;
        size *= 2;
        hashArray = new Entry[size];
        count = 0;
        for(Entry head : oldHash){
            while(head != null){
                put((K)head.getKey(),(V) head.getValue());
                head = head.getNext();
            }
        }
    }
    
    private int getHash(K Key){
        return (Key == null) ? 0 : Math.abs(Key.hashCode())% size;
    }
}
