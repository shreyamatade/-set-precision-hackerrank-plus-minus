#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
    //hackerrank plus minus solution, print each line to six dec places
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int pn=0;int nn=0;int zn=0;

    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            pn++;
        }
        else if(a[i]<0)
        {
            nn++;
        }
        else if(a[i]==0)
        {
            zn++;
        }
    }

    cout<<setprecision(6)<<(float)pn/n<<endl;
    cout<<setprecision(6)<<(float)nn/n<<endl;
    cout<<setprecision(6)<<(float)zn/n<<endl;
}
