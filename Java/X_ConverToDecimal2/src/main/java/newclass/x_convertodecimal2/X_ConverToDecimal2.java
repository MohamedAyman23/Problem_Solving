/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.x_convertodecimal2;

import java.util.Scanner;
/**
 *
 * @author mohammed ayman
 */
public class X_ConverToDecimal2 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short T = in.nextShort();
        for(int i = 1; i <= T; i++){
            int N = in.nextInt();
            int res = 0;
            int counter = 0;
            while(0 != N){                      
                if((N % 2) != 0)
                {
                    res +=(Math.pow(2, counter));
                    counter++;    
                } 
                N /= 2;
            }
            System.out.println(res);
        }
    }
}
