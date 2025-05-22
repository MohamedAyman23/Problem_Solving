/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.javawatermelon;
import java.util.Scanner;
/**
 *
 * @author moham
 */
public class JavaWatermelon {

    public static void main(String[] args) {
        short w;
        Scanner obj = new Scanner(System.in);
        w = obj.nextShort();
        if((100 >= w) && (w >= 1) && (w % 2 == 0) && (2 != w))
            System.out.println("YES");
        else
            System.out.println("NO");
        
    }
}
