/**
 * A simple mad libs generator
 *
 * @author (Matthew Harison)
 * @version (1.0)
 */

import java.util.Scanner;

public class madLibs {
    public static void main(String [] args) {
        
        Scanner keyboardInput = new Scanner(System.in);
        
        System.out.print("Enter your name:");
        String username = keyboardInput.nextLine();
        System.out.print("Enter the current day of the week:");
        String weekday = keyboardInput.nextLine();
        System.out.print("Enter a noun:");
        String noun1 = keyboardInput.nextLine();
        System.out.print("Enter your favorite activity:");
        String verb1 = keyboardInput.nextLine();
        
        
        System.out.print("Hello there " + username + ". ");
        System.out.print("I'm so glad you could join me this " + weekday + ". ");
        System.out.print("We are going to make some " + noun1 + ". ");
        System.out.print("It's great that you like to " + verb1 + ". ");
    }
}
