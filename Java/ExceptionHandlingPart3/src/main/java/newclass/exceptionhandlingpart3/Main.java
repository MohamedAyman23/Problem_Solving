/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.exceptionhandlingpart3;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        validate(1);
        try{
            validate(0);
        }catch(ArithmeticException e){
            System.out.println(e);
        }
    }
/**
 * with throw if the exception is unchecked its optional to use try_catch
 * but if the exception is checked without using throws we need to use try_catch the same block
 * but if we use throws when we throw an unchecked exception we don't need to use try_catch in the same block. 
 * @param x 
 */
    public static void validate(int x){
        if(x <= 0){
            ArithmeticException ae = new ArithmeticException("there is an exception");
            throw ae;
            // throw new ArithmeticException("this is an exception");
        }else{
            System.out.println("This is a correct number...");
        }   
    }
}
