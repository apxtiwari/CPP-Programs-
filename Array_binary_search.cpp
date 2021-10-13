 #include<iostream> 
using namespace std; 
int main() 
{ 
int book[50]; 
int mid, beg = 0, end, found = 0; 
int page = 11; 
cout<<"\n BOOK PAGES IN ORDER "; 
for (int i = 0; i < 25; i++) 
{ 
cin>>book[i]; 
} 
cout<<"\n Page which is to be searched is 11"; 
end = 24; 
while (beg<=end) 
{ 
mid = (beg+end)/2;
if(book[mid] == page) 
{ 
cout<<"\n PAGE IS FOUND AT "<<mid<<" position"; 
} 
found = 1; 
break; 
} 
if (book[mid] > 11) 
{ 
end = mid-1; 
} 
else if(book[mid] < 11) 
{ 
beg = mid+1; 
} 
if (beg > end && found == 0) 
{ 
cout<<"\n 11 DOES NOT EXIST in array"; 
} 
} 

