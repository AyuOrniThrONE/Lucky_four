import java.util.Scanner;

public class luckfour {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        if (1<=t && t<=Math.pow(10, 5)) {
            for (int i = 0; i < t; i++) {
                int cnt=0;
                String n=sc.next();
                for (int k = 0; k < n.length(); k++) {
                    if (n.charAt(k)=='4') {
                        cnt++;
                    }
                }
                System.out.println(cnt);
            }
        }
    }
}
