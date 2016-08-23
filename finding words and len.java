public static void main(String[] args) {
        // TODO code application logic here////////find word
        int count=0;
        Scanner s=new Scanner(System.in);
        String in=s.nextLine();
        System.out.println(in);
        int v=in.length();
        for(int i=0;i<v;i++)
        {
            if(in.charAt(i)==' ')
                count++;
        }
System.out.println(count+1);
System.out.println(v);
