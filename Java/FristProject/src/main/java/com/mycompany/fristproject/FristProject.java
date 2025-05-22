/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.fristproject;


import java.util.Scanner;


/**
 *+++++
 * @author mohamed
 */
public class FristProject {
    
    public static void main(String[] args) {     
        Scanner in = new Scanner(System.in);
        char arr[];
        arr = in.nextLine().toCharArray();
        if(10 >= arr.length)
            System.out.println("Doesn't reach the limit length");
    }
}