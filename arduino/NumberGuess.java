import java.util.Scanner;

public class NumberGuess {

    public static void main(String[] args){
        
        int secretNum;
        int guess;
        boolean correct = false;

        Scanner keyboard = new Scanner(System.in);

        System.out.print("GENERATING NUMBER...");
        secretNum = (int)(Math.random()*((20-0)+1))+0;

        while (!correct) {

            System.out.println("GUESS:  ");
            guess = keyboard.nextInt();

            if (guess == secretNum) {
                correct = true;
                System.out.println("You are right!");
            }
            else if (guess < secretNum) {
                System.out.println("HIGHER");
            }
            else if (guess > secretNum) {
                String x = "LOWER";
                System.out.println(x);
            }
        }
    }
}