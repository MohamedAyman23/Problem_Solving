public class BinarySearch {
    public void findItem(Object[] arr, Object item){
        int low = 0;
        int high = arr.length - 1;
        int mid = 0;
        while(true){

            mid = (low + ((high - low) / 2));
            if(low > high){
                System.out.println("The Number is not found");
                break;
            }
            if(arr[mid] == item){
                System.out.println("The Number is found");
               break;
            }else if((Integer)arr[mid] > (Integer) item){
                high = mid - 1;
            }else if((Integer)arr[mid] < (Integer) item){
                low = mid + 1;
            }
        }
    }
}
