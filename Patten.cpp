#include<iostream>
using namespace std;
int main(){
    // int count =3;
    
    // for (int i = 1; i <= count; i++)
    // {
    //     for (int j = 1; j <= count; j++)
    //     {
    //         cout<<"* ";
            
    //     }
    //     cout<<endl;
    // }

    // if is this program to same patten but Alphabatic convert 
// for (int i = 0; i < count; i++)
// {
//     char ch='A';
//     for (int j = 0; j < count; j++)
//     {
//         cout<<ch ;
//         ch=ch+1;
//     }
//     cout<<endl;

// }


// Squre Paitain 1 to 9
// 123
// 456
// 789

// int n=1;

// for (int i = 0; i < count; i++)
// {
//     for (int j = 0; j < count; j++)
//     {
//         cout<<n;
//         n=n+1;
//     }
//     cout<<endl;
// }

//Tringler Partern 
// *
// **
// ***
// ****

// int n=3;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<"*";
//     }
//     cout<<endl;
// }

// 1
// 22
// 333
// 4444

// int n =4;
// for (int i = 0; i < n; i++)
// {
//     for (int j = 0; j < i+1; j++)
//     {
//         cout<<(i+1);
//     }
//     cout<<endl;
// }

// A
// BB
// CCC
// DDDD
// int n=4;
//   char ch='A';
// for (int i = 0; i < n; i++)
// {
  
//    for (int j = 0; j < i+1; j++)
//    {

//     cout<<ch;

    
//    }
//    cout<<endl;
//    ch++;
// }


// int n=6;
// for (int i = 1; i < n; i++)
// {

//     for (int j= 1; j < i+1; j++)
//     {
//         cout<<j;
    
//     }
//     cout<<endl;
    
// }

//bacword loop
// 1
// 21
// 321
// int n=4;
// for (int i = 0; i < n; i++)
// {
//     for (int j =1+i; j >0;j--)
//     {
//         cout<<j;
//     }
//     cout<<endl;
// }


int n=4;
int count=1;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i+1; j++)
    {
        cout<<count;
        count++;
    }
    cout<<endl;
   
}

return 0;
}