import java.util.Scanner;
class Grade
{
    public static void main(String []args)
    {
        Scanner sc = new Scanner(System.in);
        int marks;
        System.out.println("Enter the marks");
        marks = sc.nextInt();

        
            if (marks > 90 && marks <=100)
                {
                    System.out.println("grade = A");
                    
                }
            else if(marks > 80 && marks <=90)
                {
                    System.out.println("grade = B");
                    
                }
            else if (marks > 70 && marks <=80)
                {
                    System.out.println("grade = C");
                    
                }
        
            else 
            {
                    System.out.println("grade = D");
            }

        }
    }
