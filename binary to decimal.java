package bin.to.dec;

import java.util.Scanner;

public class BinToDec {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        String bi=sc.nextLine();
        System.out.println("value : "+Integer.parseInt(bi,2));
    }
    
}
