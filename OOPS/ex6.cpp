#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class KLETUstudent
{
    public: string name;
            string srn;
            long mobileNumber;
            static int counter;
        KLETUstudent(string n, long m ):name(n),mobileNumber(m)
        {
            counter++;
            stringstream ss;
            ss << counter;

            srn="01FE18BCS"+ss.str();

        }

        void display()
        {
            cout<<"Student name= "<<name<<" SRN= "<<srn<<" mobile number= "<<mobileNumber;
        }
        bool updateMobileNumber(long m)
        {
            bool result=false;
            if(m==mobileNumber)
            {
                result=false;
            }
            else
            {
                result=true;
                mobileNumber=m;
            }
            return result;
        }


};
int KLETUstudent::counter= 0;

int main()
{
    KLETUstudent ram("Ram",999999999L), shyam("Shyam",888888888L);
    cout<<"students details are---------\n";
    ram.display();
    cout<<"\n";
    shyam.display();

    cout<<"\n\n----trying to change mobile number of a student\n";
    bool r= ram.updateMobileNumber(777777777L);
    if( r )
    {
        cout<<" ram mobile number is updated successfully \n";
        ram.display();
    }
    else
    {
        cout<<" could not update ram mobile number since the new number is same as old one\n";
    }

    cout<<"\n\n-----creating objects in a loop\n";
    for(int i=0; i<10; i++)
    {
        stringstream ss;
        ss << i;
        string someName="xyz"+ss.str();
        KLETUstudent s(someName, 777777777L+i);
        cout<<"\n";
        s.display();
    }
}
