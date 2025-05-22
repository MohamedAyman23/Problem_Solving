/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.w_shape3;

import java.util.Scanner;
/**
 *
 * @author mohammed Ayman
 */
public class W_Shape3 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short x = 1;
        short N = in.nextShort();
        for(int i = 0; i < N; i++){
            for(int j = (N - 1); j > i; j--){
                System.out.print(" ");
            }
            for(int k = 0; k < x; k++){
                System.out.print("*");
                
            }
            x += 2;
            System.out.println("");
        }
        short y = 1;
        for(int i = 0; i < N; i++){
            for(int j = 1; j <= i; j++){
                System.out.print(" ");
            }
            for(int j = (2*N - 1); j >= y; j--){
                System.out.print("*");
            }           
            System.out.println("");
            y +=2;
        }
    }
}
