#include<iostream>
using namespace std;

class LibraryBook{
    private :
        string bookname;
        string author;
        bool issued;

    public:
       LibraryBook(string name,string a)
       {
        bookname=name;
        author=a;
        issued =false;
       }

       void issuedbook()
       {
        if(issued == false)
        {
            issued=true;
            cout<<"book issued successfully."<<endl;
        }
        else
        {
            cout<<"book is already issued."<<endl;
        }
       }

       void returnBook()
       {
        if(issued == true){
            issued=false;
            cout<<"book is returned successfully."<<endl;
        }
        else
        {
            cout<<"Book is already availabel."<<endl;
        }

       }

       void display()
       {
        cout<<"name of the book is :"<<bookname<<endl;
        cout<<"name of the author :"<<author<<endl;
       }   
};

int main()
{
    LibraryBook book1("Fire of wings","Abdul kalam");
    book1.display();

    book1.issuedbook();
    book1.display();

    book1.returnBook();
    book1.display();
return 0;

}