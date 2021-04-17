import java.util.*;

public class BoyGirl_cf
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        HashSet<Character> set = new HashSet<>();
        String str = sc.next();
        for(char c: str.toCharArray())
        {
            set.add(c);
        }
        System.out.println(set.size()%2==0?"CHAT WITH HER!":"IGNORE HIM!");
        sc.close();
    }
}