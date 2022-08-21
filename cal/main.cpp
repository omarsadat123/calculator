#include <iostream>
using namespace std;
int main()
{
    system("color 74");
    float x,y,result;
    char op;
    cout<< "            \n\t\t      Welcome to you\n\n\t\t   Hope that you are well.\n\n";
    cout<<"\t\tCan you use this calculator ?\n\n\t\t if yes, follow Next........ ";
    cout<< "\n\n\nYour Favourite number x=          ";
   cin>> x;
    cout<< "\n enter operation (+-*/%)=          ";
    cin>> op;
    cout<< "\nYour Favourite number y=          ";
    cin>> y;

    //system("cls");
    //fflush(stdin);
    switch(op)
    {
    case'+':

        result=x+y;
        cout<<"               \n\t\tRESULT   =         " <<result;

        break;
    case'%':
        result=(int)x%(int)y;
        cout<<"               \n\t\tRESULT   =         " <<result;

        break;
    case'-':
        result=x-y;
        cout<<"                 \n\t\tRESULT  =       "  <<result;
        break;
    case'*':
        result=x*y;
        cout<<"                 \n\t\tRESULT  =       "<<result;
        break;
    case'/':
        result=x/y;
        cout<<"                 \n\t\tRESULT  =      "<<result;
            break;
   /*case'%':
        result=x%y;
        cout<<"                 \n\t\tRESULT  =        "<<result;
            break;*/

    default:
        cout<<"                \n\t\t wrong operation ";

        break;


    }


    char name;
    cout<<"\n\n\n\t\t\t\t\t Thank you. \n\n\t\t\t\t\t created by    ** CHAYAN **" ;
    cin>>name;
    cout<<"Thank you";

    return 0;
}

