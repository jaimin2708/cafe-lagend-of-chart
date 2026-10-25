import java.util.Scanner;

class JaggedArray
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        // Create 3 rows
        int[][] arr = new int[3][];

        // Give different sizes to each row
        arr[0] = new int[2];
        arr[1] = new int[4];
        arr[2] = new int[3];

        // Take input
        for(int i = 0; i < arr.length; i++)
        {
            System.out.println("Enter elements for row " + (i + 1));

            for(int j = 0; j < arr[i].length; j++)
            {
                arr[i][j] = sc.nextInt();
            }
        }

        // Print the array
        System.out.println("\nJagged Array:");

        for(int i = 0; i < arr.length; i++)
        {
            for(int j = 0; j < arr[i].length; j++)
            {
                System.out.print(arr[i][j] + " ");
            }

            System.out.println();
        }

        sc.close();
    }
}