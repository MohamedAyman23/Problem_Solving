/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.b_drawingx;

import java.util.Scanner;
/**
 *
 * @author mohammed ayman
 */
public class B_DrawingX {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        short N = in.nextShort();
        short t = (short)(N - 1);
        t /=2 ;     
        short temp = (short)(N - 1);
        for(int i =0; i < N; i++){
            for(int j =0; j < N; j++){
                if(i == j && i != t){
                    System.out.print("\\");
                }else if(i != t && j == temp){
                    System.out.print("/");
                }else if(j == t && i == t){
                    System.out.print("X");
                }else{
                    System.out.print("*");
                }                
            }
            temp--;
            System.out.println(""); 
        }
    }
}
