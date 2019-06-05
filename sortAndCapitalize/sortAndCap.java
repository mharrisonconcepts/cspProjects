import java.util.Scanner;

public class sortAndCap { 

        void sortATextFile(String filename, String toFileName) {
            Path path = Paths.get(filename);
            Charset charset = Charset.forname("UTF-8");

            List<String> lines = Files.readAllLines(path, charset );
            Collections.sort(lines);

            Path toPath = Paths.get(toFileName);
            Files.write(toPath, lines, charset);
        }
        public static void main(String [] args) {
            String filename = keyboardInput.nextLine();
            String toFileName = keyboardInput.nextLine();
            new sortAndCap().sortATextFile("+ filename +", " + toFileName + ");
            
        }
}