import java.util.*;

public class duplicateArr {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Entere the size of the array:");
        int n = sc.nextInt();
        System.out.print("Enter the elements of the array:");
        int array[] = new int[n];
        for (int i = 0; i < n; i++) {
            array[i] = sc.nextInt();
        }
        duplicat(array, n);
    }

    public static void duplicat(int array[], int n) {
        int dup = 0;

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (array[i] == array[j]) {
                    dup = array[i];
                    System.out.println(dup);
                }
            }
        }
    }
}
