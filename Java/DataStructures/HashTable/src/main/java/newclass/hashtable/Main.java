/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.hashtable;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        HashTableArray<Integer, String> hash = new HashTableArray<>(10);
        hash.put(1, "Mohamed");
        hash.put(2, "Youssef");
        hash.put(3, "Ayman");
        hash.put(4, "Ahmed");
        System.out.println("The return value = " +hash.get(3));
        hash.put(3, "Hassan");
        System.out.println("The return value = " +hash.get(3));
        hash.put(10, "Sami");
        hash.put(11, "MIDO");
        hash.put(12, "Tarek");
        hash.put(13, "MOHAMED");
        System.out.println("The value is = " +hash.get(13));
        hash.put(14, "Norhan");
        hash.put(15, "Sayed");
        System.out.println("The value is = " +hash.get(15));
        
    }
}
