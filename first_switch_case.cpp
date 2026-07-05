#include<iostream>
using namespace std;

int main(){

  char c;
  cout<<"Input a letter:"<<endl;
  cin>>c;

  switch(c){
      case'a': cout<<"the variable is A";
      break;
      case'b':cout<<"The variable is B";
      break;
      default:cout<<"Hello Bro";

  }

  return 0;
}
