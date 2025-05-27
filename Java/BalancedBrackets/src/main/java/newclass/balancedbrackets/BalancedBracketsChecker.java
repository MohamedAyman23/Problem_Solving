/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

package newclass.balancedbrackets;
import java.util.Stack;
/**
 *
 * @author Mohammed Ayman
 */
public class BalancedBracketsChecker {
    public boolean isBalanced(String exp){
        Stack<Character> stack = new Stack<>();
        for(char ch: exp.toCharArray()){
            if(ch == '(' || ch == '{' || ch == '['){
                stack.push(ch);
            }else if(ch == ')' || ch == '}' || ch == ']'){     
                if(stack.isEmpty())return false;
                char last = stack.pop();
                if ((ch == ')' && last != '(') ||
                    (ch == '}' && last != '{') ||
                    (ch == ']' && last != '[')) {
                    return false;
                }
            }
        }
        return stack.isEmpty();
    }
}
