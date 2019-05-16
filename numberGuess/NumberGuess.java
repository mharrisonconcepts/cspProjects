import java.util.Scanner;

public class NumberGuess {

    public static void main(String[] args){
        
        int secretNum;
        int guess;
        boolean correct = false;

        Scanner keyboard = new Scanner(System.in);

        System.out.print("GENERATING NUMBER...");
        secretNum = (int)(Math.random()*((100-0)+1))+0;

        while (!correct) {

            System.out.println("GUESS:  ");
            guess = keyboard.nextInt();

            if (guess == secretNum) {
                correct = true;
                String yes = "You are CORRECT!!!!";
                System.out.println(yes);
            }
            else if (guess < secretNum) {
                String a = "You are too low.";
                System.out.println(a);
            }
            else if (guess > secretNum) {
                String x = "You are too high.";
                System.out.println(x);
            }
        }
    }
}