package Arrays;

import java.util.Arrays;

public class Selection_sort {
    public static void main(String[] args) {
        int[] arr = {5, 6, 3, 4, 1, 2};
        selection(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void selection(int arr[]){
        for(int i=0;i<arr.length-1;i++){
            // it look lke bubble sort but not bubble sort
            for(int j=i+1;j< arr.length;j++){
                if(arr[j]<arr[i]){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }

    }

    static void Bubble(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            for (int j = 1; j < arr.length - i; j++) {
                if (arr[j] < arr[j - 1]) {
                    arr[j] = arr[j] ^ arr[j - 1];
                    arr[j - 1] = arr[j] ^ arr[j - 1];
                    arr[j] = arr[j] ^ arr[j - 1];
//                    int temp = arr[j];
//                    arr[j]=arr[j-1];
//                    arr[j-1]=temp;
                }
            }
        }
    }
}
