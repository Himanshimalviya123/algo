// question:---1    missing mutiple no.
#include <iostream>
using namespace std;
int main()
{
    int arr[]={2,6,8,13,19,4};
    for(int i=0;i<6;i++)
    {
        if(arr[i+1]>arr[i])
        {
            
        }
    };
    for(int i=0;i<6;i++)
    {
        cout<<(arr[i]-1)<<",";
    
    }
};
// selection sort dsa==============================
#include<iostream>
using namespace std;
void select(int arr[],int s){
    for(int i=0;i<s;i++)
{
 int chotu=i;
 for(int j=i+1;j<s; j++){
     if(arr[chotu]>arr[j]){
         chotu=j;
     }
 }
 if(chotu!=i){
     int tmp;
     tmp=arr[i];
     arr[i]=arr[chotu];
     arr[chotu]=tmp;
 }
}
}
int main()
{
    int arr[]={4,1,5,3,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n after applying\n"<<endl;
    select(arr,s);
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
