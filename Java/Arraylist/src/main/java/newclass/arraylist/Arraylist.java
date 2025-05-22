/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.arraylist;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Scanner;

/**
 *
 * @author moham
 */
public class Arraylist {
    static void displayMenue(){
        System.out.println("");
        System.out.println("""
                           1. Add Element
                           2. Remove an Element
                           3. Print Elements
                           4. Exit
                           """);
        System.out.println("");
    }

    public static void main(String[] args) {
        ArrayList <Integer> list = new ArrayList();
        Scanner in = new Scanner(System.in);
        
        while(true){
            displayMenue();
            int choice = in.nextInt();
            switch(choice){
                case 1:
                    System.out.println("Enter an Integer");
                    list.add(in.nextInt());
                    System.out.println("The Element is added");
                    break;
                case 2:
                    System.out.println("Enter the element to be deleted");
                    int element = in.nextInt();
                    if(list.contains(element))
                        list.remove((Integer)element);
                    else
                        System.out.println("Element is not found");
                    break;
                case 3:
                    System.out.println(list);
                    break;
                case 4:
                    return;    
            }
        }
    }
}
