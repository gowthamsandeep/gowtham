 public static void main(String[] args) {
        // TODO code application logic here
         Scanner s=new Scanner(System.in);
        char[] e=null;
        String a;
        String str="";
        a=s.nextLine();
        int l=a.length();
        char[] d = a.toCharArray();
        for(int i=0;i<l;i++)
        {
            for(int j=0;j<l;j++)
            {
            if(d[i]==d[j]&& j!=i)
            {
                d[j]='.';
            }
            }
            //System.out.println(d[i]);
        }
           
       // System.out.println("X"+ d);/*
        for(int i=0;i<l;i++)
        {
            if(d[i]!='.')
            {
                   str= str+d[i];     
                
              
            }
                
        }
        System.out.println(str);
    }
    
}
