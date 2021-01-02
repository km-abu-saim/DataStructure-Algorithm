#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={9,13,15,11,2},i,j,min_ind;
    for(i=0;i<5;i++)
    {
        min_ind=i;
        for(j=i+1;j<5;j++)
        {
            if(arr[min_ind]<arr[j])
            {
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
}

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={9,13,15,11,2},n=5;
    int i,j,t;
    for(i=n-1;i>=1;i--)
    {
        t=0;
        for(j=1;j<=i;j++)
        {
            if(arr[t]>arr[j])
            {
                t=j;
            }
        }
        swap(arr[i],arr[t]);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int *A,int n)
{
    int i,j,t;
    for(i=n-1;i>=1;i--)
    {
        t=0;
        for(j=1;j<=i;j++)
        {
            if(A[t]>A[j])
            {
                t=j;
            }
        }
        swap(A[i],A[t]);
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
    int arr[]={9,13,15,11,2},n=5;
    selection_sort(arr,n);
}
*/
