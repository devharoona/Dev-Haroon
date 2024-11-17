
package basics_java.switchexm;
import java.util.Scanner;

public class likeswitch {
    public static void main(String[] args) {
        int age;
        System.out.println("Enter your age: ");
        try (Scanner sc = new Scanner(System.in)) {
            age = sc.nextInt();
        }
        switch(age){
            case 18: System.out.println("Your are becoming an Adult");
            break;
            case 23: System.out.println("Your are able to join a job");
            break;
            case 60: System.out.println("Your are able to retired a job");
            break;
            default:System.out.println("Your are able to Enjoy your life");
        }
    }
}



