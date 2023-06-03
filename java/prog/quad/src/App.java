import java.util.Scanner;

public class App {
  public static void main(String[] args) {
    Scanner input = new Scanner(System.in);
    System.out.println("Enter a number: ");
    int num = input.nextInt();
    System.out.println("Entered number is: " + num);
    System.out.println("Enter a string: ");
    String str = input.next();
    System.out.println("Entered string is: " + str);
    System.out.println("Enter a array of numbers: ");
    int[] arr = new int[5];
    for (int i = 0; i < 5; i++) {
      arr[i] = input.nextInt();
    }
    System.out.println("Entered array is: ");
    for (int i = 0; i < 5; i++) {
      System.out.print(arr[i] + " ");
    }
    input.close();
  }
}
