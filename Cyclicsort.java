package Arrays;

import java.util.Arrays;

public class Cyclicsort {
    public static void main(String[] args) {
        int arr[] = {3,5,2,4,1};
        Cyclic(arr);
       System.out.println(Arrays.toString(arr));
//        for(int i=0;i< arr.length;i++){
//            System.out.println(arr[i]+" ");
//        }
        amit(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void Cyclic(int[] arr){
        int i =0;
        while(i<arr.length){
            int correct = arr[i]-1;
            if(arr[i] != arr[correct]){
                //swap(arr, i , correct);
                int temp= arr[i];
                arr[i] = arr[correct];
                arr[correct] = temp;
            }
            else {
                i++;
            }
        }
    }
    static void swap(int arr[] , int a , int b){
        int temp= arr[a];
        arr[a] = arr[b];
        arr[b]= temp;
    }
    static void amit(int[] arr){
        int i =0;
        while(i<arr.length){
            //int correct = arr[i]-1;
            if(arr[i] != arr[arr[i]-1]){
                //swap(arr, i , correct);
                int temp= arr[i];
                arr[i] = arr[arr[i]-1];
                arr[arr[i]-1] = temp;
            }
            else {
                i++;
            }
        }
    }
}
