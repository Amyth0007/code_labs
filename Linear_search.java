package Arrays;

import java.util.Scanner;

public class Linear_search {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int x = in.nextInt();
        System.out.println(linear(arr, x,n));

    }
    static int linear(int[] arr , int x, int n){
        int m=0;
        for(int i = 0 ;i<n;i++){
            if(x == arr[i]){
                m++;
                return i;
            }
        }
        if(m>0){
            System.out.println("linear search completed");

        }
        else{
            System.out.println("sorry we cant find");
        }
        return  -1;
    }
}
