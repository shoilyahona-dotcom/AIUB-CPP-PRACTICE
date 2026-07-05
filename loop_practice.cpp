#include<iostream>
using namespace std;

int main()
{
    for(int i=1; i<=4; i++)
    {
        for(int j=1; j<=i;j++) //FOR ONE SIDED PYRAMID
        {
           cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int j;j<4; j++)
    {
         for(int k=1; k<=4;k++)   //FOR LINIER SHAIP
        {
            cout<<"*";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;

    for(int o=1;o<=4 ;o++)
    {
        for(int g=1; g<=o; g++ )  //FOR LINIER SHAIP
        {
            cout<<g;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    cout<<endl;
    for(int h=1; h<=4; h++)
    {
        for (int l=1; l<=7-h ;l++)
        {
            cout<<" ";
        }
        for (int p=1; p<=2*h-1 ; p++)  //FOR MAKING FULL PYRAMID
        {
            cout<<h;
        }
        cout<<endl;
    }

   return 0;
}
