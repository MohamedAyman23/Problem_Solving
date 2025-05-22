/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.sh2t;

import java.util.Scanner;

/**
 *
 * @author moham
 */
public class SH2T {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int k =1;
        for(int i =1; i <= N; i++){
            for(int x = N-1; x >= i; x--){
                System.out.print(" ");
            }
            for(int j =1; j <= k ;j++){
                System.out.print("*");
            }
            k +=2;
            System.out.println();
        }
    }
}
