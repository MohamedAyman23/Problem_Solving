/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.exceptionhandling;

/**
 *
 * @author moham
 */
public class Main {
    
    public static void main(String[] args) {
        int arr[] = new int[]{1, 2, 3};
        try{
            System.out.println(arr[3]);
        }catch(ArrayIndexOutOfBoundsException e){
            System.out.println(e.getMessage());
        }catch(ArithmeticException e){
            System.out.println("The reason of this exception is ..." +e);
        }
        int x = 15;
        final int y = 7;
        try{
            System.out.println(y/0);
        }catch(Exception e){
            System.out.println(e);
            System.out.println("This is the second exception...");
            System.out.println("x = " +x);
        }
        int []arr1 = null;
        try{
            System.out.println("this is the array null");
            System.out.println(arr1[1]);
        }catch(Exception e){
            System.out.println("There is an Exception...");
            System.out.println(e);
        }
        
        try{
            int s = Integer.parseInt("string988");
            System.out.println("this is the S exception");
            System.out.println(s);
        }catch(NumberFormatException e){
            System.out.println("the s catch...");
            System.out.println(e);
        }
        try{
            int n = Integer.parseInt("898S");
        }catch(ArithmeticException | NumberFormatException e){
            System.out.println(e);
            System.out.println("This is due to the n variable exception...");
        }
    }
}
