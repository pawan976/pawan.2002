#include<iostream>
using namespace std;
int main()
{
int predefinedNumber=7;
int userInput;
cout<<"welcome to the no guessingGame!"<<endl;
cout<<"please enter a number:";
cin>>userInput;
if(userInput==predefinedNumber){
cout<<"congratulations!youguessed the correct number!"<<endl;
}else{
cout<<"Oops!Thats not the correctnumber."<<endl;
}
return 0;
}
