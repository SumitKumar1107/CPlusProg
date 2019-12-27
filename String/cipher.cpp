#include<iostream>
#include<string>
using namespace std;

int main()
{
    string alphabet ="{ abcdefghijklmnopqrstuvwxyz";
    string key =" {XZNLWEBGJHQDYVTKFUOMPCIASR";
    string secret;
    cout<<"enter your secret message: ";
    getline(cin,secret);
    
    string encrypt;
    cout<<"\nEncrypting message..."<<endl;
    
    for(char c:secret)
    {
        size_t position = alphabet.find(c);
        if(position != string::npos)
        {
            char new_char {key.at(position)};
            encrypt+=new_char;
        }
        else
        {
            encrypt+=c;
        }
    }
    
    cout<<"\nEncrypted message : " << encrypt << endl;
    
    string decrypt;
    cout<<"\nDecrypting message..."<<endl;
    
    for(char c:encrypt)
    {
        size_t position = key.find(c);
        if(position != string::npos)
        {
            char new_char {alphabet.at(position)};
            decrypt+=new_char;
        }
        else
        {
            decrypt+=c;
        }
    }
    
    cout<<"\nDecrypted message : " << decrypt << endl;    

    return 0;
}