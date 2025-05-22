/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.c_findingminimums;


import java.util.Scanner;
/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N = in.nextInt();
        int K = in.nextInt();
        int min = 0;
        int arr[]= new int[N];
        for(int i = 0; i < N; i++){
            arr[i] = in.nextInt();
        }
        for(int i = 0; i < N; i +=K){
            min = arr[i];
            for(int j = i + 1; j < i + K && j < N; j++){  
                if (arr[j] < min) {
                    min = arr[j];
                }
            }
            System.out.print(min +" ");                   
        }
    }
}
