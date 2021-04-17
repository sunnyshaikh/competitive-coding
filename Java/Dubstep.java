import java.util.*;

public class Dubstep
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();
        str = str.replaceAll("(WUB)+", " ");
        System.out.println(str.trim());
        sc.close();    
    }
}