package Arrays;

import java.util.Scanner;

public class Bineary_search {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int arr[] = new int[n];
        for(int i=0;i<n;i++){
            arr[i] = in.nextInt();
        }
        int x = in.nextInt();
        System.out.println(Binary(arr, x,n));

    }
    static int Binary(int[] arr , int x, int n){
        int s = 0;
        int e = n;
        int ans=0;
        for(int i=0;i<n;i++){
            int mid = (s+e)/2;
            if(arr[mid] == x){
                return mid;
            }
            else if(x>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        //return ans;
        return -1;
    }
}
