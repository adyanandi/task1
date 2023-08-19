#include<iostream>
using namespace std;

int main()
{
    float num1,num2,ans;
    int choice;
    do
    {
        cout<<"1.Addition\n";
        cout<<"2.Substraction\n";
        cout<<"3.Multiplication\n";
        cout<<"4.Division\n\n";
        cout<<"Please enter your choice: ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
        cout<<"\nEnter any two numbers: ";
        cin>>num1>>num2;
        }
     switch(choice)
     {
        case 1:
        ans = num1+num2;
        cout<<"\nAnswer = "<<ans;
        break;
        case 2:
        ans = num1-num2;
        cout<<"\nAnswer = "<<ans;
        break;
        case 3:
        ans = num1*num2;
        cout<<"\nAnswer = "<<ans;
        break;
        case 4:
        ans = num1/num2;
        cout<<"\nAnswer = "<<ans;
        break;
        default:
        cout<<"\nINVALID CHOICE";
        break;
     }
     cout<<"\n\n";
    }
 while(choice!=4);
 return 0;
}