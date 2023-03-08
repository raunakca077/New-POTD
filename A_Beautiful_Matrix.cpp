#include <bits/stdc++.h>
using namespace std;
int main ()
    {
     int arr[5][5],n,p,q;
     for(int i=0;i<5;i++)
         for(int j=0;j<5;j++)
         {
            cin>>n;
            arr[i][j]=n;
            if(n==1)
            {
                p=i;
                q=j;
            }
         }
    cout<< abs(p-2)+abs(q-2)<<endl;
     
    }