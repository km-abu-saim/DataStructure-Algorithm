#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int *A,int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(A[j],A[j+1]);
            }
        }
    }
    for(k=0;k<n;k++)
    {
        cout<<A[k]<<endl;
    }
}
int main()
{
    int arr[]={22,14,12,18,9},n=5;
    bubble_sort(arr,n);
}
