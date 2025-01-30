// ===========================class and object=====================
# include<iostream>
using namespace std;
class person{
    public:
    string name;
    int age;
    string address;

};
int main()
{
    person obj1;
    obj1.age=20;
    obj1.name="himanshi";
    obj1.address="bhopal";

}
// ===================================question 2=========================
// *********************take input from user**************************
# include<iostream>
using namespace std;
class teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;

void show()
{
    cout<<name<<endl;
    cout<<dept<<endl;
    cout<<subject<<endl;
    cout<<salary<<endl;
}
};

int main(){
   teacher t1;
    cout<<"enter name";
    cin>>t1.name;
     cout<<"entaer dept";
    cin>>t1.dept;
    cout<<"enter subject";
    cin>>t1.subject;
    cout<<"enter salary";
    cin>>t1.salary;
    t1.show();
    
    return 0;
};
// ====================constructor=================================
 # include<iostream>
using namespace std;
class costumer{
    public:
    string name;
    int number;
    int balance;
    costumer()
    {
        cout<<"costumer";
    }
};
int main()
{
    costumer c1;
    
};
// =============================================================================================
// display array============================================

#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    for(int i=0;i<10;i++)
    {
        cout<<"enter your no.";
    cin>>arr[i];

}
for(int i=0;i<10;i++)
{
    cout<<arr[i];
}
}
// ==============================================change no,=====================
#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,5,6,7};
    
    
    arr[2]=arr[0]+arr[4];
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    }
//   swaping=========================================
#include <iostream>
using namespace std;
int main()
{
    
    int arr[5]={1,2,5,6,7};
    
    
   int temp=arr[1];
   arr[1]=arr[3];
   arr[3]=temp;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<"\t";
    }
}
// ======================sum of all array element===========================
#include <iostream>
using namespace std;
int main()
{
    
    int arr[5]={1,3,6,2,4};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
// find the maximum element in an array?
#include <iostream>
using namespace std;
int main(){
    int arr[]={2,4,8,6,3,5};
    int ans=arr[0];
    for(int i=1;i<6;i++)
    {
        if(arr[i]>ans)
        {
            ans=arr[i];
        }
        
    }
    cout<<ans;
    
}
// find the minimum element in an array?
#include <iostream>
using namespace std;
int main(){
    int arr[]={90,4,8,6,3,5};
    int ans=arr[0];
    for(int i=1;i<6;i++)
    {
        if(arr[i]<ans)
        {
            ans=arr[i];
        }
        
    }
    cout<<ans;
    
}
// Online C++ compiler to run C++ program online
//========================reverse of given array ===============
#include <iostream>
using namespace std;
int main() {
   int arr[]={1,2,3,7,8};
   int revers=0;
   for(int i=0; i<5; i++)
   {
       cout<<arr[i]<<"\t";
   }
  int i=0;
   int j=4;
   
   while(i!=j){
       int temp;
    temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   i++;
   j--;
   }
   cout<<"\nafter applying"<<endl;
   for(int i=0; i<5; i++){
       cout<<arr[i]<<"\t";
}

}
// arrange the given arraay in asscending order===========
#include <iostream>
using namespace std;

int main(){
    int arr[]={30,8,98,4,1,8,87};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<7;j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                
            }
            
        }
    }
    
    for(int i=0;i<7;i++){
        cout<<arr[i]<<",";
    }
}
// arrange the given arraay in decending order===========
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,87,9,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        
    }
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
    }
// arrange the given arraay in ascending order===========
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,87,9,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        
    }
        for(int i=0;i<size;i++){
            cout<<arr[i];
        }
    }
// find the second largestno.===========
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,87,9,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        
    }
       
            cout<<arr[1];
        }
    // find the kth largestno.===========
#include <iostream>
using namespace std;
int main(){
    int arr[]={3,6,87,9,4,5};
    int k;
    cout<<"enter the kth";
    cin>>k;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<2;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]>arr[i])
            {
                int tmp=arr[i];
                arr[i]=arr[j];
                arr[j]=tmp;
            }
        }
        
    }
       
            cout<<arr[k-1];
        }
    //  question---1  find the single missing element in array.===========
// int arr[]={1,3,4,5,7}
// output:-2,6
#include <iostream>
using namespace std;
int main(){
    int arr[]={1,3,4,5,7};
    for(int i=0;i<4;i++){
        if(arr[i+1]-arr[i]>1)
        {
            cout<<(arr[i+1]-1);
        }
    }
        }
    // missing multiple no.=========================
# include<iostream>
using namespace std;
int main()
{
    int arr[]={2,8,5,9,14};
    int j=0;
    for(int i=0;i<4;i++)
    {
    if(arr[i+1]-arr[i]>1)
    {
        for(int j=arr[i]+1;j<arr[i+1];++j)
        {
            cout<<j<<endl;
        }
    }
    }
}
 // missing multiple no.=========================
# include<iostream>
using namespace std;
int main()
{
    int arr[]={2,8,5,9,14};
    int j=0;
    for(int i=0;i<4;i++)
    {
    if(arr[i+1]-arr[i]>1)
    {
        for(int j=arr[i]+1;j<arr[i+1];++j)
        {
            cout<<j<<endl;
        }
    }
    }
}
       







