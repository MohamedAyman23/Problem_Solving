//TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or
// click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
public class Main {
    public static void main(String[] args) {
        Object[] arr = new Object[100];
        for(int i =0; i < arr.length; i++){
            arr[i] = i;
        }
        BinarySearch bs = new BinarySearch();
        bs.findItem(arr, 56);
        bs.findItem(arr, 99);
        bs.findItem(arr, 104);
    }
}