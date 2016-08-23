public static void main(String[] args) {
        // TODO code application logic here//dupilcate
        Scanner sc=new Scanner(System.in);
        System.out.print("Enter any word : ");
        String s=sc.nextLine();
        int l=s.length();
        char ch;
        String ans="";
        //int count=0;
        for(int i=0;i<l;i++)
        {
            ch=s.charAt(i);
            if(ch!=' ')
               // count++;
            //System.out.println(count);
                ans = ans + ch;
            s = s.replace(ch,',');
        }
    
    System.out.println("Enter poda madaya \t\t\n"+ans);
    }
