/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.u_pum;

import java.util.Scanner;
/**
 *
 * @author Mohamed Ayman
 */
public class U_PUM {
    static int x = 1;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        
        short N = in.nextShort();
        for(int i = 1; i <= N; i++){
            for(int j = 1; j <= 4; j++){
                if(4 == j){
                    System.out.print("PUM"); 
                    (U_PUM.x) ++;
                }else{
                    System.out.print(U_PUM.x +" ");
                    (U_PUM.x) ++;
                }  
            }
            System.out.println("");
        }
    }
}
