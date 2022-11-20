package Arrays;

import java.util.Arrays;

public class insert {
    public static void main(String[] args) {
        int[] arr={56,54,89,11,25,1,80,89,111,54,73,61};
        insertion(arr);
        System.out.println(Arrays.toString(arr));

    }
    static void insertion(int arr[]){
        for(int i=0;i< arr.length-1;i++){
            for(int j=i+1;j>0;j--){
                //first swaap mai pehle do element then pehle teen then pehle 4 then ......etc compare krenge
                if(arr[j]<arr[j-1]){
                    int temp = arr[j];
                    arr[j] = arr[j-1];
                    arr[j-1] = temp;
                }
                else{ continue;}

            }
        }
    }
}
