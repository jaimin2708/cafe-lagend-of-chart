class Main
{
    public static void main(String[] args)
    {
        if(args.length < 2)
        {
            System.out.println("Please enter two float numbers.");
            return;
        }

        float a = Float.parseFloat(args[0]);
        float b = Float.parseFloat(args[1]);

        System.out.println("Sum = " + (a + b));
    }
}