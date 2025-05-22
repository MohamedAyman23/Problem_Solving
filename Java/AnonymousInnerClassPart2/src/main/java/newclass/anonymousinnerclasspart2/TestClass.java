/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package newclass.anonymousinnerclasspart2;

/**
 *
 * @author moham
 */
public class TestClass {
    
    TestClass(){
        System.out.println("Default Constructor");
    }
    TestClass(int x){
        System.out.println("Param Constructor");
    }
    public void testMethod(){
        System.out.println("Test Method in the TestClass");
    }
    static {
        System.out.println("This is an Intialization Block");
    }
}
