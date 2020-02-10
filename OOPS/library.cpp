#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
    string name;
    string srn;
    long mobileNum;
    Student(string n, string usn):name(n), srn(usn)
    {

    }
    void display()
    {
        cout<<"name="<<name<<" srn="<<srn<<" mobile num="<<mobileNum<<endl;
    }
};

class Book
{
public:
    string title;
    string publisher;
    Student issuedTo;
    bool issueStatus=false;

    Book(string t, string pub):title(t),publisher(pub),issuedTo("-nil", "-nil")
    {

    }
    void display()
    {
       cout<<"Book title="<<title<<" publisher="<<publisher<<endl;
       if(issueStatus)
       {
           cout<<"  issued to ";
           issuedTo.display();
       }
       else
        cout<<" not issued to any one"<<endl;
    }
};

class Library
{
public:
    string collegeName;
    string librarian ;
    Book *books;
    int booksCount;

    Library(string col, string libr):collegeName(col),librarian(libr)
    {

    }
    void issueBook(string title, Student &toStudent)
    {
        int bookIndex=searchBooks(title);
        if(bookIndex!= -1)
        {
            books[bookIndex].issuedTo= toStudent;
            books[bookIndex].issueStatus=true;
            cout<<"Book "<<title<<" issued to "<<toStudent.name<<endl;
        }
        else
            cout<<"requested book "<<title<<" is not available in library"<<endl;
    }

    int searchBooks(string title)
    {
        for(int i=0; i<booksCount;i++)
        {
            if(books[i].title == title && books[i].issueStatus==false)
                return i;
        }
        return -1;
    }
    void displayIssuedBooks()
    {
        for(int i=0; i<booksCount; i++)
        {
            if(books[i].issueStatus)
                books[i].display();
        }
    }
};

int main()
{
    Book b1("Data Structures","pearson");
    Book b2("oops","pearson");
    Book b3("DBMS","pearson");
    Book b4("oops","pearson");
    Book b5("Data Structures","pearson");
    Book b6("DBMS","pearson");
    Book b7("oops","pearson");
    Book b8("Data Structures","pearson");
    Book b9("DBMS","pearson");
    Book b10("Data Structures","pearson");

    Book bookArr[10]={b1,b2,b3,b4,b5,b6,b7,b8,b9,b10};

    Library bvbLib("KLETU", "Prof abc");
    bvbLib.books=bookArr;
    bvbLib.booksCount=10;
    Student s1("aaa","18CSE098");
    bvbLib.issueBook("oops", s1);
    Student s2("bbb","srn2");
    bvbLib.issueBook("DBMS",s2);
    bvbLib.issueBook("DBMS",s2);
    bvbLib.issueBook("DBMS",s2);
    bvbLib.issueBook("DBMS",s2);

    bvbLib.displayIssuedBooks( );
}
