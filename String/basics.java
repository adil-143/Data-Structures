import java.util.*;
import java.util.Scanner;

public class basics{
    public static void main(String[] args) {

        String str = new String("Hello World");
        System.out.println(str);

        Scanner sc = new Scanner(System.in);

        // System.out.println("Enter your name: ");
        // String name = sc.nextLine();
        // System.out.println("Hello, " + name + "!");

        String name = "Adil";
        System.out.println(name.length());
        System.out.println(name.toLowerCase());
        System.out.println(name.toUpperCase());
        System.out.println(name.indexOf('i'));

        name.concat(" Ansari");
        System.out.println(name); // original string is not changed

        String new_name = name.concat(" Ansari");
        System.out.println(new_name);

    }
}
