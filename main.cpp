#include<bits/stdc++.h>
using namespace std;
void rotateright(vector<int> &arr,int n,int k)
{
    k=k%n;
    int s1=0;
    int e1=n-k-1;
    int s2=n-k;
    int e2=n-1;
    int s3=0;
    int e3=n-1;
    while(s1<=e1)
    {
        int temp=arr[s1];
        arr[s1]=arr[e1];
        arr[e1]=temp;
        s1++;
        e1--;
    }
    while(s2<=e2)
    {
        int temp=arr[s2];
        arr[s2]=arr[e2];
        arr[e2]=temp;
        s2++;
        e2--;
    }
    while(s3<=e3)
    {
        int temp=arr[s3];
        arr[s3]=arr[e3];
        arr[e3]=temp;
        s3++;
        e3--;
    }
}
int main()
{
    vector<int> arr;
    int n,k;
    cout<<"Enter the number of elements in the array"<<endl;
    cin>>n;
    cout<<"Enter the elements in the array"<<endl;
    int c;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        arr.push_back(c);
    }
    cout<<"Enter the times the array should be rotated right"<<endl;
    cin>>k;
    cout<<"Array Before Rotation : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    rotateright(arr,n,k);
    cout<<"Array After Rotation : "<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
