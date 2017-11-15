package hackerrank.TwoDArray;


import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int[][] input = new int[6][6];
        int hourglasses[] = new int[16];

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 6; j++) {
                input[i][j] = scanner.nextInt();
            }
            if (i != 5) scanner.nextLine(); // Move scanner position to next line.
        }

        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 4; j++) {
                int sum  = input[i][j] + input[i][j+1] + input[i][j+2] + input[i+1][j+1] + input[i+2][j] + input[i+2][j+1] + input[i+2][j+2];
                hourglasses[(i*4) + j] = sum;
            }
        }

        int largest = hourglasses[0];
        for (int sum: hourglasses) { if (sum > largest) largest = sum; }

        System.out.println(largest);
    }
}
