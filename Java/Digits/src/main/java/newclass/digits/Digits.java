/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.digits;
import java.util.Scanner;
/**
 *
 * @author moham
 */
public class Digits {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short T = in.nextShort();
        for(int i = 0; i < T; i++){
            long N = in.nextLong();
            if(0 == N)
                System.out.print(N);
            while(0 != N){
                short res = (short)(N%10);
                System.out.print(res +" ");
                N /= 10;
            }
            System.out.println("");
        }
    }
}
