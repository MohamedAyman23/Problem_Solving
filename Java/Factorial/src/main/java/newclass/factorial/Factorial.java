/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.factorial;
import java.util.Scanner;
/**
 *
 * @author moham
 */
/**
*   Number one is the only one which returns odd number when we get its factorial, so that we don't need to get every number 
*   factorial.
*   1 is the only odd, and the all other number will return even value.
*/
public class Factorial {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        long num = in.nextLong();
        if(1 == num){
            System.out.println("NO");
        }else{
            System.out.println("YES");
        }
        
    }
}
