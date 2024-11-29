#include <bits/stdc++.h>
using namespace std;
int partition(vector <int> &a,int low,int high)
{
    int start=low;
    int end=high;
    int pivot=a[low];
    while(start<end)
    {
         while(a[start]<=pivot && start<high)
        {
            start++;
        }
        while(a[end]>pivot && end>low)
        {
            end--;
        }
        if(start<end)
        {
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
        }
    }
    int temp=a[end];
    a[end]=a[low];
    a[low]=temp;
    return end;
}
void quick_sort(vector <int> &a,int low,int high)
{
    if(low<high)
    {
        int pIndex=partition(a,low,high);
        quick_sort(a,low,pIndex-1);
        quick_sort(a,pIndex+1,high);
    }
}
vector <int> qs(vector <int> &a,int n)
{
    quick_sort(a,0,n-1);
    return a;
}
int main()
{
    int n;
    cout<<"Enter the size:";
    cin>>n;
    cout<<"Enter the elements:";
    vector <int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    a=qs(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}