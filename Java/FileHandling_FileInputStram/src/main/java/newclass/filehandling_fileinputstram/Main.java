/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.filehandling_fileinputstram;

import java.io.File;
import java.io.FileInputStream;
//import java.io.FileNotFoundException;
import java.io.IOException;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) /*throws FileNotFoundException, IOException*/{/*In this case we will not user try catch if the exception is uncheck but
        if the exception is check we will be forced to user it.*/
        int ch;
        try (FileInputStream fis = new FileInputStream("file.txt")) {
            while((ch = fis.read()) != -1){
                System.out.print((char)ch);
            }
        }catch(IOException e){
            e.printStackTrace();
        }
        /**    
         *  try-with-resources block
         *  try (FileInputStream fis = new FileInputStream("file.txt")) {
            int ch;
            while ((ch = fis.read()) != -1) {
                System.out.print((char) ch);
            }
            } catch (IOException e) {
            System.out.println("An error occurred: " + e.getMessage());
            }
         */
        try{
            File file = new File("file.txt");
            FileInputStream fis2 = new FileInputStream(file);
            byte b [] = new byte[(int)file.length()];//file.length returns length in long return type so we need to cast it to int
            fis2.read(b);// this read take an array of byte as a paramater  
            String s = new String(b);
            System.out.println("");
            System.out.println(s);
        }catch(IOException e){
            e.printStackTrace();
        }
       
    }
}

