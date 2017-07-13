package hackerrank.ArraysDS;


import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        int[] input = new int[N];

        for (int i = 0; i < N; i++) {
            input[i] = scanner.nextInt();
        }
        for (int i = N-1; i > -1; i--) {
            System.out.print(Integer.toString(input[i]) + ' ');
        }
    }
}
