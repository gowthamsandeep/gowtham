public static void main(String[] args) {
        // TODO code application logic here
       // public static void main(String[] args) // consecutive
    {
        String str,str1="";
        Scanner sc=new Scanner(System.in);
        str=sc.nextLine();
        char s[]=str.toCharArray();
        for(int i=0;i<s.length-1;i++)
        {
            
                if(s[i]==s[i+1])
                {
                    s[i]='$';
                    s[i+1]='$';
                    i+=1;
                    
                }
            }
        
        for( int i=0;i<=s.length-1;i++)
        {
            if((s[i])!='$')
            {
                str1=str1+s[i];
            }
            
        }
        System.out.println(str1);
    
    }
    }
