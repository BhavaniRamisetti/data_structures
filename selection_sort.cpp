#include <bits/stdc++.h>
using namespace std;
vector <int> selection_sort(int n,vector <int> &a)
{
    int min;
    for(int i=0;i<=n-2;i++)
    {
        min=i;
        for(int j=i;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
    return a;
}
int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    vector <int> a(n);
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    selection_sort(n,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}