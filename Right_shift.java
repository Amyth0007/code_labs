package Arrays;

import java.util.Scanner;

public class Right_shift {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int arr[] = {1, 2,3,4, 5,6,7};
        int n = arr.length;
     for(int i=0;i<n;i++){
         System.out.print(arr[i]+" ");

     }
        System.out.println();
     int k =in.nextInt();
     for(int i=0;i<n;i++){
         if(i<k){
             System.out.println(arr[n + i- k] + " ");
         }
         else{
             System.out.println(arr[i-k]+" ");
         }

     }
    }

}
