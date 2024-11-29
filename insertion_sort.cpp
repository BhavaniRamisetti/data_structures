#include <bits/stdc++.h>
using namespace std;
vector <int> insertion_sort(int n,vector <int> &a)
{
    for(int i=0;i<=n-1;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j])
        {
            int temp=a[j-1];
            a[j-1]=a[j];
            a[j]=temp;
            j--;
        }
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
    insertion_sort(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}