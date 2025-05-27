/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.balancedbrackets;
import java.util.Scanner;
/**
 *
 * @author moham
 */
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        BalancedBracketsChecker checker = new BalancedBracketsChecker();
        System.out.println("Enter the expression to check it");
        String exp = in.nextLine();
        System.out.println(exp +"-->" +checker.isBalanced(exp));
        
    }
}
