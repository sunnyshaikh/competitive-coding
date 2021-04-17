import java.util.*;

public class RegistrationSystem
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Map<String, Integer> map = new HashMap<>();
        String s;
        while(n-- > 0)
        {
            s = sc.next();           // first
            if(map.containsKey(s))
            {
                System.out.println(s + "" + map.get(s));
                map.put(s + "" + map.get(s), 1);
                map.put(s, map.get(s)+1);
            }
            else
            {
                map.put(s, 1);
                System.out.println("OK");
            }
        }
        sc.close();    
    }
}