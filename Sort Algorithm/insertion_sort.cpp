#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n=10;
    int data[10]={5,8,1,6,3,9,34,26,87,13};

    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&(data[j]<data[j-1]))
        {
            swap(data[j-1],data[j]);
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<endl;
    }
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n=5;
    int data[5]={3,4,2,8,1};

    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&(data[j]>data[j-1]))
        {
            temp=data[j];
            data[j]=data[j-1];
            data[j-1]=temp;
            j--;
        }
    }
    for(j=0;j<n;j++)
    {
        cout<<data[j]<<endl;
    }
}

*/

/*
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int *A,int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&(A[j]>A[j-1]))
        {
            swap(A[j],A[j-1]);
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}
int main()
{
    int data[5]={2,4,9,1,3},n=5;
    insertion_sort(data,n);
}

*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int data[5],n=5;
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>data[i];
    }
    cout<<"After sort this data"<<endl;
    for(i=0;i<n;i++)
    {
        j=i;
        while(j>0&&(data[j]>data[j-1]))
        {
            swap(data[j],data[j-1]);
            j--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<endl;
    }
}

*/
