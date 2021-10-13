#include<iostream> 
using namespace std; 
int main() 
{ 
int array[10], number; 
cout<<"\n Enter the elements in array: "<<endl; 
    for (int i = 0; i < 10; i++) 
         { 
            cin>>array[i]; 
         } 
cout<<"\n Enter the number which you want to seacrh: "; 
cin>>number; 
    for (int i = 0; i < 10; i++) 
        { 
             if(array[i] == number) 
           {
               cout<<"\n Number Found at "<<i+1<<" position"; 
           }
        }
}