/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.filehandling_read_write_image;

import java.io.File;
import java.io.FileInputStream;
import java.io.FileNotFoundException;
import java.io.FileOutputStream;
import java.io.IOException;

/**
 *
 * @author moham
 */
public class Main {

    public static void main(String[] args) throws FileNotFoundException, IOException {
        File file = new File("D:/myphoto.jpg");
        FileInputStream fis = new FileInputStream(file);
        byte b[] = new byte[(int)file.length()];// array of bytes with length enough to sotre all file bytes
        fis.read(b);// need to take an byte varible to save the return byte
        fis.read();//read just on byte return int
        FileOutputStream fos = new FileOutputStream("D:/myphoto4.jpg");
        fos.write(b);
        fos.write(b);
        fos.flush();
        fos.close();
        fis.close();
    }
}
