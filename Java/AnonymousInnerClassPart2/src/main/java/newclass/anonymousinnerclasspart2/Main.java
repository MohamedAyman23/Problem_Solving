/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.anonymousinnerclasspart2;

/**
 *
 * @author moham
 */
public class Main {

    static void m(){
        TestClass test = new TestClass(){
            @Override
            public void testMethod(){
                System.out.println("This is in the m method");
            }
        };
        test.testMethod();
    }
    public static void main(String[] args) {
        TestClass test = new TestClass(){
            @Override
            public void testMethod(){
                System.out.println("The test method in the Anonymous inner Class");
            }
        };
       test.testMethod();
       var test1 = new TestClass(5){
           @Override 
           public void testMethod(){
               System.out.println("This is a testMethod in the var test1");
           }
           public void testDisplay(){
               System.out.println("This is the testdisplay in the var test1");
           }
       };
       test1.testDisplay();
       test1.testMethod();
       m();
    }
}
