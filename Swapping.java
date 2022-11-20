package Arrays;

public class Swapping {
    public static void main(String[] args) {
        int[] arr ={2, 34,56,13,22,98 ,45};
        for(int i=0;i< arr.length;i++){
            System.out.print(arr[i]+" ");
        }
        System.out.println("******************");
        swap(arr , 3,6 );
        for(int i=0;i< arr.length;i++){
            System.out.print(arr[i]+" ");
        }
    }
    static void swap(int arr[],int x , int y){

        arr[x]=arr[x]^arr[y];
        arr[y]=arr[x]^arr[y];
        arr[x]=arr[x]^arr[y];



    }
}
