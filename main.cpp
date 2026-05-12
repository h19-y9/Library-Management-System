#include <iostream>
#include<string>
using namespace std;

struct library{
string book_title;
string author;
int ID;
float price;
};
//Add Book
void add_book(library B[],int &n){
cout<<"Book title : ";cin>>B[n].book_title;
   cout<<"Author : ";cin>>B[n].author;
   cout<<"ID : ";cin>>B[n].ID;
   cout<<"price : ";cin>>B[n].price;
n++;
}
//searching for Book
void search_book(library B[],int n){
     if(n==0){
    cout<<"The library is empty ."<<endl;
return;
    }
int search_id;
cout<<"enter ID to search : ";
cin>>search_id;
bool found=false;
for(int i=0;i<n;i++){
    if(B[i].ID==search_id){
    cout<<"Found:"<<" "<<B[i].book_title<<" "<<B[i].author<<" "<<B[i].price<<endl;
found=true;
break;
    }
}
if(found==false)
    cout<<"sorry, this ID does not exit."<<endl;
}
//show book information
void show_book(library B[],int n){
     if(n==0){
    cout<<"The library is empty ."<<endl;
return;
    }
cout<<"No."<<"\t"<<"Book title"<<"\t"<<"Author"<<"\t"<<"ID"<<"\t"<<"price"<<endl;
cout<<"---"<<"\t"<<"----------"<<"\t"<<"------"<<"\t"<<"--"<<"\t"<<"-----"<<endl;
for(int i=0;i<n;i++)
    cout<<i+1<<"\t"<<B[i].book_title<<"\t"<<B[i].author<<"\t"<<B[i].ID<<"\t"<<B[i].price<<endl;
}
//4-the most expensive book.
void expensive_book(library B[],int n){
    if(n==0){
    cout<<"The library is empty ."<<endl;
    return;
    }
    int k=0;//index(exp)
float exp=B[0].price;
for(int i=0;i<n;i++){
    if(exp<B[i].price){
      exp=B[i].price ;
    k=i;
    }
}
cout<<B[k].book_title<<" "<<B[k].author<<" "<<B[k].ID<<" "<<B[k].price<<endl;
}
//cheapest book
void cheapest_book(library B[],int n){
    if(n==0){
    cout<<"The library is empty ."<<endl;
return;
    }
  int k=0;//index (cheap)
float cheap=B[0].price;
for(int i=0;i<n;i++){
    if(cheap>B[i].price){
      cheap=B[i].price ;
    k=i;
    }
}
cout<<B[k].book_title<<" "<<B[k].author<<" "<<B[k].ID<<" "<<B[k].price<<endl;
}
int main()
{
    int n,op;
    int m=0;//current number of books
    cout<<"Enter the number of books : ";
    cin>>n;
   library B[n];
//Main program loop to keep the menu active until the user exits
do{
   cout<<"\n---- Library Management System ----\n";
   cout<<"1-Add a new book.\n 2-searching for a book.\n 3-show book information.\n 4-the most expensive book.\n 5-cheapest book.\n 6-Exit.\n";
   cout<<"choose one of the options : \n";
   cin>>op;
   //menu options
   switch(op){
   case 1:
       if(m<n)
       add_book(B,m);
       else
       cout<<"Library is Full."<<endl;
   break;
   case 2:
    search_book(B,m);
    break;
    case 3:
        show_book(B,m);
        break;
    case 4:
        expensive_book(B,m);
        break;
    case 5:
        cheapest_book(B,m);
        break;
    case 6:
        cout<<"Exiting program."<<endl;
        break;
        default:
            cout<<"Invalid option"<<endl;
            break;
   }
   }while(op != 6);


    return 0;
}
