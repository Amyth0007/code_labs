package Arrays;

import java.util.Scanner;

public class twoD_array {
    public static void main(String[] args) {
        Scanner in = new Scanner( System.in);
        int[][] arr ={{1,2},{34,4}};
        for(int i=0;i< 2;i++)
            for(int j=0;j<2;j++){
                System.out.print(arr[i][j]+ " ");
            }
        System.out.println();
    }
}
