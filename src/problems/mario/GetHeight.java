import java.util.Scanner;

public class GetHeight {
    
    public static int height() {
        Scanner input = new Scanner(System.in);
        int height = 0;

        do {
            System.out.print("Insert a number: ");
            if (input.hasNextInt()) {
                height = input.nextInt();
            } else {
                input.nextLine(); 
                height = 0;
            }
        } while (height < 1 || height > 8);

        input.close();
        return height;
    }
}

