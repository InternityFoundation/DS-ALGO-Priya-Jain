#include<bits/stdc++.h>
using namespace std;
void flip(int arr[],int i)
{
    int temp,start=0;
    while(start <i)
    {
        temp=arr[start];
        arr[start]=arr[i];
        arr[i]=temp;
        start++;
        i--;
    }
}
int maximum(int arr[],int n)
{
    int  m_index,i;
    for(m_index=0,i=0;i<n;++i)
    {
        if(arr[i]>arr[m_index])
            m_index=i;

    }
    return m_index;
}
int pancakeSort(int *arr,int n)
{
    for(int c=n;c>1;--c)
    {
        int m_index=maximum(arr,c);
        if(m_index!=c-1)
        {
            flip(arr,m_index)
            flip(arr,c-1);
        }

    }
}
void printArr(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int *arr;
    int n;
    cin>>n;
    arr=new int[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pancakeSort(arr,n);
    printArr(arr,n);
    return 0;
}
