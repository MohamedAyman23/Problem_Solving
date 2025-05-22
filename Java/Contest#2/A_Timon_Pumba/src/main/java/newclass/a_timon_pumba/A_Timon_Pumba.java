/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.a_timon_pumba;

import java.util.Scanner;
/**
 *
 * @author moham
 */
public class A_Timon_Pumba {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a = in.nextInt();
        int b = in.nextInt();
        if(a > b)
            System.out.println((a - b));
        else
            System.out.println("0");
    }
}
