import java.util.Scanner;
class Student
{
    int id;
    String name;
    int roll;

    public void input(Scanner sc)
    {
        System.out.println("Enter the id of student");
        id = sc.nextInt();

        sc.nextLine();

        System.out.println("Enter the name of student");
        name = sc.nextLine();

        System.out.println("Enter the roll number of student");
        roll = sc.nextInt();

       
    }
    public void output()
    {
        System.out.println(id + name + roll);
    }

class ArrayofObject
{
    public static void main(String []args)
    {
        Student[] s1 = new Student[5];
        Scanner sc = new Scanner(System.in);
        int i;
        for(i=0;i<s1.length;i++)
        {
            s1[i] = new Student();
            System.out.println("Enter the detali of"+ (i+1)+"Student");
            s1[i].input(sc);
        }
        for(i=0;i<s1.length;i++)
        {
            s1[i].output();  
        }
        sc.close();
}
}
}