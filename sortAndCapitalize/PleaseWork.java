import java.util.Scanner;
import java.io.File;
import java.util.List;
import java.io.IOException;
import java.util.ArrayList;

public class PleaseWork {
    public static void main(String[] args) {

        Scanner input = new Scanner(new File("foo.txt"));
        ArrayList<String> list = new ArrayList<String>();
        


        while (input.hasNext()){
            list.add(input.next());
        System.out.println(input.next());

        }
        input.close();      
    }
}
