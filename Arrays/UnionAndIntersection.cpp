#include<bits/stdc++.h>
using namespace std;
int printUnion(int arr1[],int arr2[],int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(arr1[i]<arr2[j])
        {
            cout<<arr[i++]<<" ";
        }
        else if(arr2[j]<arr1[i])
        {
            cout<<arr2[j++]<<" ";
        }
        else
        {
            cout<<arr2[j++]<<" ";
            i++;
        }
    }
    while(i<m)
    {
        cout<<arr1[i++]<<" ";
    }
    while(j<n)
    {
        cout<<arr2[j++]<<" ";
}

int main()
{
    int *arr1,*arr2;
    int n,m;
    cin>>n>>m;
    arr1=new int[n];
    arr2=new int[m];
    for (int i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    printUnion(arr1,arr2,n,m);
    return 0;
}

