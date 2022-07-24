#include <iostream>
using namespace std;
int main()
{
    double num1,num2;
    char op;
    bool exit;
    string answer;
    while(true)
    {
        exit=false;
        cin>>num1>>num2;
        cin.get();
        cin>>op;
        cin.get();
        switch(op)
        {
        case '+':
            cout<<num1+num2<<"\n\n";
            break;
        case '-':
            cout<<num1-num2<<"\n\n";
            break;
        case '/':
            cout<<num1/num2<<"\n\n";
            break;
        case '*':
             cout<<num1*num2<<"\n\n";
             break;
        default:
            cout<<"invalid operator"<<"\n\n";
            break;
        }
        while(exit==false)
        {
        cout<<"Do you want to shut down the calculator?\n";
            getline(cin,answer);
            if(answer=="yes")
                return 0;
            if(answer=="no")
                 exit=true;
            else
            {
               cout<<"invalid answer\n\n";
                exit=false;
            }
        }
    }
    return 0;
}
