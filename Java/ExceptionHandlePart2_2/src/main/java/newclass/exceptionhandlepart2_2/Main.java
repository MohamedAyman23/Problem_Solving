/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.exceptionhandlepart2_2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.IOException;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args){
        try{
            readFile("D:\\file.txt");
        }catch(FileNotFoundException e){
            System.out.println(e);
        }catch(IOException e){
            System.out.println(e);
        }
    }
    static void readFile(String filePath) throws FileNotFoundException, IOException{
        FileInputStream fin = new FileInputStream(filePath);
        int r;
        while((r = fin.read()) != -1){
            System.out.print((char)r);
        }
        System.out.println("");
        readMultiFile("D:\\file.txt");
    }
    static void readMultiFile(String filePath) throws FileNotFoundException, IOException{
        FileInputStream fin = new FileInputStream(filePath);
        int r;
        while((r = fin.read()) != -1){
            System.out.print((char)r);
        }
    }
}
