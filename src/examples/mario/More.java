public class More {

    public static void main(String[] args) {
        int height = GetHeight.height();
        pyramid(height);
    }

    public static void pyramid(int height) {
        for (int i = 1; i <= height; i++) {
            for (int j = 0; j < height - i; j++) {
                System.out.print(" ");
            }

            for (int j = 0; j < i; j++) {
                System.out.print("#");
            }

            System.out.print(" ");

            for (int j = 0; j < i; j++) {
                System.out.print("#");
            }

            System.out.println();
        }
    }
}

