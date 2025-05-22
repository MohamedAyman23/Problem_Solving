/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.y_easy_fibonacci;

import java.util.Scanner;
/**
 *
 * @author moham
 */
public class Y_Easy_Fibonacci {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short N = in.nextShort();
        int Res1 = 0;
        int Res2 = 0;
        int res;      
        for(int i =0; i < N; i++){
            if(0 == i){
                Res1 = i;             
                System.out.print(i +" ");
            }else if(1 == i){
                Res2 = i;
                System.out.print(i +" ");
            }else{
                res = Res1 + Res2;
                Res1 = Res2;
                Res2 = res;
                System.out.print(res +" ");
            }
            
        }
    }
}
