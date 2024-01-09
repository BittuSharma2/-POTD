#include<iostream>
using namespace std;
#include "alphabet.h"//my own heder file.

int main()
{
    cout<<"Enter any 10 word: ";
    char name[12];
    int i=-1,a=0;
    do
    {
        i++;
        name[i]=getchar();
        a++;
    }while((int)name[i]!=10);//ASCII value of Enter key is 10.

    cout<<endl<<endl;

    for(int k=1;k<=5;k++)
    {
for(int r=0;r<a-1;r++){
    int num=(int)name[r];
        switch(num)
        {
            case 97:
                A(k);
                break;
            case 98:
                B(k);
                break;
            case 99:
                C(k);
                break;
            case 100:
                D(k);
                break;
            case 101:
                E(k);
                break;
            case 102:
                F(k);
                break;
            case 103:
                G(k);
                break;
            case 104:
                H(k);
                break;
            case 105:
                I(k);
                break;
            case 106:
                J(k);
                break;
            case 107:
                K(k);
                break;
            case 108:
                L(k);
                break;
            case 109:
                M(k);
                break;
            case 110:
                N(k);
                break;
            case 111:
                O(k);
                break;
            case 112:
                P(k);
                break;
            case 113:
                Q(k);
                break;
            case 114:
                R(k);
                break;
            case 115:
                S(k);
                break;
            case 116:
                T(k);
                break;
            case 117:
                U(k);
                break;
            case 118:
                V(k);
                break;
            case 119:
                W(k);
                break;
            case 120:
                X(k);
                break;
            case 121:
                Y(k);
                break;
            case 122:
                Z(k);
                break;
            default:
                cout<<"     ";


    }}
        cout<<endl;}
}
