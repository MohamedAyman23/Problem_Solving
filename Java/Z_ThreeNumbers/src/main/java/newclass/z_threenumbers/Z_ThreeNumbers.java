/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.z_threenumbers;

import java.util.Scanner;
/**
 *
 * @author moham
 */
public class Z_ThreeNumbers {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int K = in.nextInt();
        int S = in.nextInt();
        int counter = 0;
        for(int x = 0; x <= K; x++){
            for(int y = 0; y <= K; y++){
                if((S - x - y >= 0) && (S -x - y <= K)){
                    counter++;
                }
            }
        }
        System.out.println(counter);
    }
}
