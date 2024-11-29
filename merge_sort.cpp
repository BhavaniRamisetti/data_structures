#include <bits/stdc++.h>
using namespace std;
void combine(vector <int> &a,int low,int mid,int high)
{
    vector <int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high)
    {
       if(a[left]<=a[right])
       {
            temp.push_back(a[left]);
            left++;
       }
       else
       {
        temp.push_back(a[right]);
        right++;
       }
    }
    while(left<=mid)
    {
        temp.push_back(a[left]);
        left++;
    }
    while(right<=high)
    {
        temp.push_back(a[right]);
        right++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}
void merge_sort(vector <int> &a,int low,int high)
{
    if(low>=high)
    {
        return;
    }
    int mid=(low+high)/2;
    merge_sort(a,low,mid);
    merge_sort(a,mid+1,high);
    combine(a,low,mid,high);
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
    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}