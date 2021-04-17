import java.util.*;

public class AmusingJoke
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);    
        String s1 = sc.next();
        String s2 = sc.next();
        String s3 = sc.next();
        String s4 = s1 + s2;

        char[] ch1 = s3.toCharArray();
        char[] ch2 = s4.toCharArray();

        Arrays.sort(ch1);
        Arrays.sort(ch2);

        s1 = String.valueOf(ch1);
        s2 = String.valueOf(ch2);

        if(s2.equals(s1))
            System.out.println("YES");
        else
            System.out.println("NO");
        
        sc.close();
    }
}