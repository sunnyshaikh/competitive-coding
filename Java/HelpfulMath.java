import java.util.*;

public class HelpfulMath 
{
    static void helpfulMath(String str)
    {
        if(str.length() <= 1)
        {
            System.out.println(str); 
            return;
        }
        
        List<Character> list = new ArrayList<>();
        
        for(int i=0; i<str.length(); i+=2)
            list.add(str.charAt(i));

        Collections.sort(list);

        for(int i=0; i<list.size()-1; i++)
            System.out.print(list.get(i) + "+");

        System.out.println(list.get(list.size()-1));
    }

    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.next();   
        helpfulMath(str);

        sc.close();
    }    
}
