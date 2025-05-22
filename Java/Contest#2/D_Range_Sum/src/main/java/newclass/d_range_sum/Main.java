/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.d_range_sum;

/**
 *
 * @author mohammed Ayman
 */
/*
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int T = in.nextInt();
        for(int i = 0; i < T; i++){
            long L = in.nextLong();
            long R = in.nextLong();
            if(L > R){
                long temp = 0;
                temp = L;
                L = R;
                R = temp;
            }
            long sumL = (L - 1) * L / 2;
            long sumR = R * (R + 1)/2;
            System.out.println((sumR - sumL));       
        }
        
    }
   
}
*/
/*
    another solution for the same problem.
*/
import java.util.Scanner; 
public class Main{
    public static void main(String [] args){
        Scanner in = new Scanner(System.in);
        long T = in.nextInt();
        while(T > 0){
            long L = in.nextLong();
            long R = in.nextLong();
            if(L > R){
               long temp =L;
               L = R;
               R = temp;
            }
           long sumL = L * (L + 1) / 2;
           long sumR = R * (R + 1) / 2;
           System.out.println((sumR - sumL) + L);
           T--;
        }
    }
}