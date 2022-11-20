package Arrays;

public class max_min {
    public static void main(String[] args) {
        int[] arr ={2, 34,56,13,22,98 ,45};
        for(int i=0;i< arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        int x = arr.length;
        System.out.println();
        System.out.println("the minimum elemnt in arr is: " + min(arr,x));
        System.out.println("the maximum elemnt in arr is: " + max(arr,x));
    }
    static int max(int arr[], int s)
    {
        int max=-199376;
        for(int i=0;i<s;i++){
            if(arr[i]>max){
                max= arr[i];
            }
        }
        return max;
    }
    static int min(int arr[], int s)
    {
        int min=199376;
        for(int i=0;i<s;i++){
            if(arr[i]<min){
                min= arr[i];
            }
        }
        return min;
    }
}
