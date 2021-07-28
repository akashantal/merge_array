#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void merge(int arr2[],int arr1[],int z,int x)
{
         int k=x+z+1;
         while(x>=0&&z>=0)
         {
                 if(arr2[z]>arr1[x])
                 {
                         arr2[k--]=arr2[z--];
                 }
                 else
                 {
                         arr2[k--]=arr1[x--];
                 }
         }

         while(x>=0)
         {
                 arr2[k--]=arr1[x--];
         }

         for(int p=0;p<x;p++)
         {
                 arr1[p]=0;
         }

}


void rearrange(int arr2[],int arr1[],int z,int x)
{
        int k=0;
        for(int a=0;a<z;a++)
                 {
                                  if(arr2[a]!=0)
                                                           arr2[k++]=arr2[a];
                 }

        merge(arr2,arr1,k-1,x-1);
}

int main()
{
int x,y,z;
cout<<"enter the size of small array: ";
cin>>x;
int arr1[x];
cout<<"\nenter the size of big array:";
cin>>y;
z=x+y;
int arr2[z];
cout<<"\nfinal size of big array: "<<z;
cout<<"\n Enter values in small array: \n";
for(int i=0;i<x;i++)
{
        cin>>arr1[i];
}

cout<<"\nEnter values in big array: \n";
for(int j=0;j<z;j++)
{
                cin>>arr2[j];
}
rearrange(arr2,arr1,z,x);

cout<<"\n\n Merged array is: "<<"{ ";
for(int t=0;t<z;t++)
{
        cout<<arr2[t]<<", ";
}
cout<<" }";

return 0;
}
