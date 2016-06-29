import java.io.*;
import java.util.*;

public class twice_expect_one{
    public static void main(String ar[])throws Exception
{
int n,a,b,i,j;
Scanner s=new Scanner(System.in);
n=s.nextInt();
int ary[]=new int[n];
for(i=0;i<n;i++)
ary[i]=s.nextInt();
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(ary[i]>ary[j])
{
b=ary[i];
ary[i]=ary[j];
ary[j]=b;
}
}
}
for(i=0;i<n;i++)
{
if(ary[i]==ary[i+1])
{
    i++;
continue;

}
else
System.out.println(ary[i]);
}
}

}
