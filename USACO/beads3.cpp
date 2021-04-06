#include<iostream>
using namespace std;
int main()
{

    int n,i,out=0,w=0,pre,k;
    cin>>n;
    char a[n],num1,num2;
    for( i=0;i<n;i++)
    {
            cin>>a[i];
    }
    for( i=0;i<n;i++)
    {
            w=i;
            pre=0;
            num1=a[w];         
            for(int r=w;r>=0;r++)
            {
                    if(r==n)r=0;
                    num2=a[r];
                    if(num1=='r')
                    {
                                if(num2=='b') break;
                    }
                    if(num1=='b')
                    {
                                 if(num2=='r') break;
                    }
                    pre++;
                    if(num1=='w')num1=num2;
                    if(pre==n)
                    {
                              break;    
                    }
            }
            k=pre+w;
           if(k>=n)k=k%n; 
            num1=a[k]; 
            if(n>pre)
            {
                      for(int e=k;e>=0;e++)
                      {
                              
                              num2=a[e];
                              if(e==n-1)e=-1;
                              if(num1=='r')
                              {
                                           if(num2=='b')break;
                              }
                              if(num1=='b')
                              {
                                           if(num2=='r')break;
                              }       
                              if(num1=='w')num1=num2;
                              pre++;      
                      }
            }
            if(pre==n)
            {
                      out=pre;
                      break;
            }
            else if(pre>out)
            {
                       out=pre;
            } 
    }
    cout<<out<<endl;
    return 0;
}
