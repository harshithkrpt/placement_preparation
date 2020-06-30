import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
	public static void main (String[] args)
  {
		Scanner sc=new Scanner(System.in);
    int tc=sc.nextInt();
    while(tc>=1)
    {
      int n=sc.nextInt();
      int d=sc.nextInt();
      int a[]=new int[n];
      for(int i=0;i<n;i++)
      a[i]=sc.nextInt();
      //logic

      //printing result
      PrintWriter out = new PrintWriter(System.out);

      for(int i=d;i<n;i++)
		out.print(a[i]+" ");
      for(int i=0;i<d;i++)
		out.print(a[i]+" ");
		out.println();
		
	  out.flush();
      tc--;
    }
	}
}
