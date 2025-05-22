/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.exceptionhandlingpart2;

import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) {
        readFile("D:\\file.txt");
        
    }
    
    
    static void readFile(String filePath) {
        /*
        try{
            FileReader reader = new FileReader(filePath);
        }catch(FileNotFoundException e){
            System.out.println(e);
            
        }
       */
        /*FileInputStream method*/
        FileInputStream Fin = null;
        try{
            FileInputStream fin = new FileInputStream(filePath);
            System.out.println("File Content..");
            int r;
            while((r = fin.read()) != -1){
                System.out.print((char)r);
            }
        }catch(FileNotFoundException e){
            System.out.println(e);
        }catch(IOException e){
            System.out.println(e);
        }
        try{
            Fin = new FileInputStream(filePath);
            int r;
            while((r = Fin.read()) != -1){
                System.out.print((char)r);
            }
        }catch(FileNotFoundException e){
            System.out.println(e);
        }catch(IOException e){
            System.out.println(e);
        }finally{
            if(Fin != null){
                try{
                Fin.close();
                }catch(IOException e){
                    System.out.println(e);
                }
            }
        }
        
        
    }
}
