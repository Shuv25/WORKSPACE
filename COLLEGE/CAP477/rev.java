import java.util.*;

public class rev {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.err.println("Enter a word:");
        String wordi = sc.nextLine();

        char[] charArray = wordi.toCharArray();

        int i = 0;
        int j = charArray.length - 1;

        while (i < j) {
            char temp = charArray[i];
            charArray[i] = charArray[j];
            charArray[j] = temp;
            i++;
            j--;
        }

        String reversedWord = new String(charArray);

        System.err.println("Reversed word: " + reversedWord);
    }
}
