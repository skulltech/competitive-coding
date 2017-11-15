package hackerrank.JavaIfElse;


import java.util.Scanner;

public class Solution {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int input = scanner.nextInt();

        if (input % 2 != 0) { System.out.println("Weird"); }
        else {
            if (input > 1 && input < 6)  System.out.println("Not Weird");
            if (input > 5 && input < 21) System.out.println("Weird");
            if (input > 20)              System.out.println("Not Weird");
        }

    }
}
