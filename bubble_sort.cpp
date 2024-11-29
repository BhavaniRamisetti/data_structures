#include <bits/stdc++.h>
using namespace std;
vector <int> bubble_sort(int n,vector <int> &a)
{
    for(int i=n-1;i>=1;i--)
    {
        int didSwap=0;
        for(int j=0;j<=i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0)
        {
            break;
        }
        cout<<"runs\n";
    }
    return a;
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    vector <int> a(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    bubble_sort(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}