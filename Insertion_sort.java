package Arrays;

import java.util.Arrays;

public class Insertion_sort {
    public static void main(String[] args) {
        int[] arr={5,6,3,4,1,2};
        insertion(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void insertion(int arr[]){
        for(int i=1;i< arr.length;i++){
            for(int j=i+1;j>0;j--){
               if(arr[j]<arr[j-1]){
                   int temp = arr[j];
                   arr[j] = arr[j-1];
                   arr[j-1] = arr[j];
               }
               else{ break;}

            }
        }
    }
}
