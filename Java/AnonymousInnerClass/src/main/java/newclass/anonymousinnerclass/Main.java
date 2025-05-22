/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package newclass.anonymousinnerclass;

/**
 *
 * @author moham
 */
public class Main {
    public static void display(Showable s){
        s.print();
    }
    public static void main(String[] args) {
        display(() -> {
            System.out.println("This is an inner class argument to method");
        });
        new Showable(){
            @Override
            public void print(){
                System.out.println("This is the inner Class show");
            }
        }.print();
        // using lambda expression we need to declare an object
        Showable show;
        show = ()-> System.out.println("What is the wrong with the showable");
        show.print();
        RewardClass emp1 = new RewardClass();
        RewardClass emp2 = new RewardClass();
        RewardClass emp3;
        emp1.rewardMethod();
        emp2.rewardMethod();
        emp3 = new RewardClass(){
            @Override
            public void rewardMethod(){
                System.out.println("In this case the reward is 40$");
            }
        };
        emp3.rewardMethod();
        new RewardClass(){
            @Override
            public void rewardMethod(){
                System.out.println("This case without an Object..");
            }
        }.rewardMethod();    
        show = ()-> System.out.println("What is this");
        show.print();
    }
}
