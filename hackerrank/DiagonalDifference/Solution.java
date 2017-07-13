package hackerrank.DiagonalDifference;


import java.util.Scanner;
import java.lang.Math;


public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[][] matrix = new int[N][N];

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                matrix[i][j] = scanner.nextInt();
            }
            if (i != N-1) scanner.nextLine(); // Moving Scanner position to the next line.
        }

        int primary = 0, secondary = 0;
        for (int i = 0; i < N; i++) {
            primary = primary + matrix[i][i];
            secondary = secondary + matrix[i][N-i-1];
        }

        System.out.println(Math.abs(primary - secondary));
    }
}
