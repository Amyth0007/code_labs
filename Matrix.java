package Arrays;

import java.util.Scanner;

public class Matrix {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        int m =in.nextInt();
        int[][] arr1 = new int[n][m];
        int[][] arr2 = new int[m][n];
        int[][] arr = new int[n][n];
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr1[i][j] = in.nextInt();
            }
        }
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                arr2[i][j] = in.nextInt();
            }
        }
        System.out.println("*************");
        int sum=0;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0 ;k<m;k++){
                    sum += arr1[i][k] * arr2[k][j];
                }
                 arr[i][j]=sum;
                System.out.println(arr[i][j]);
                sum=0;
            }
        }
    }
}
