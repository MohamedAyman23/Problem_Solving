/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.u_sum_some;

import java.util.Scanner;
/**
 *
 * @author moham
 */
public class U_sum_some {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int sum = 0;
        short N = in.nextShort();
        short A = in.nextShort();
        short B = in.nextShort();
        for(int i = 1; i <= N; i++){
            int res = 0;
            int x = i;
            while(0 != x){
                res += (x % 10);
                x /= 10;
            }
            if(res >= A && res <= B){
                sum += i;
            } 
        }
        System.out.println(sum);
    }       
}
