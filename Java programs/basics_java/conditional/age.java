package conditional;
import java.util.Scanner;
public class age {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter age:");
        int no = sc.nextInt();
        if (no>=118){
            System.out.println("You are allowed to drive");
        }
        else{
            System.out.println("you are not allowed to drive");
        }


    }

}