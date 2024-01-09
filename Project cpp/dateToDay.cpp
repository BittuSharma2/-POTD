#include<iostream>
int oddnum(int day,int month,int year);
int LeapYear(int y);
using namespace std;
int main()
{

    cout<<"Enter Date formate dd mm yyyy: ";
    int d,m,y;
    cin>>d>>m>>y;
    int da=d,ma=m,ya=y-1;
    ya%=400;
    int o=ya/100;
    o*=5;
    //cout<<endl<<o;
    ya%=100;
   // cout<<endl<<ya;
    int oo,ll;
    ll=ya/4;
    oo=ya-ll;
    ll*=2;
    int odd;
    odd=o+ll+oo;
    int od=oddnum(d,m,y);
   // cout<<endl<<o<<endl<<ll<<endl<<oo<<endl<<odd<<endl<<od;
   // cout<<od<<"  "<<o<<"  "<<od+o;
    int oddDay1=odd+od;
    oddDay1%=7;
   // cout<<endl<<oddDay1;


   //cout<<endl<<"    ";




    switch(oddDay1)
    {
    case 0:
        cout<<"Sunday.";
        break;
    case 1:
        cout<<"Monday.";
        break;
    case 2:
        cout<<"Tuesday.";
        break;
    case 3:
        cout<<"Wednesday.";
        break;
    case 4:
        cout<<"Thursday.";
        break;
    case 5:
        cout<<"Friday.";
        break;
    case 6:
        cout<<"Saturday.";
        break;
    default:
        cout<<"Wrong value.";
    }


    //cout<<endl<<d<<"  "<<m<<"  "<<ya;
    //int l=LeapYear(y);
    //cout<<endl<<endl<<l;
}

//Function for odd day.
int oddnum(int day,int month,int year)
{
    int odd=0;
    switch(month-1)
    {
    case 11:
        odd+=30;
    case 10:
        odd+=31;
    case 9:
        odd+=30;
    case 8:
        odd+=31;
    case 7:
        odd+=31;
    case 6:
        odd+=30;
    case 5:
        odd+=31;
    case 4:
        odd+=30;
    case 3:
        odd+=31;
    case 2:{
        int l=LeapYear(year);
        if(l==1)
            odd+=29;
        else
            odd+=28;}
    case 1:
        odd+=31;

    }
    return odd+day;
}

//Function for leap year.

int LeapYear(int y)
{
    if((y%4==0)&&(y%100!=0)||(y%400==0))
    {
        //cout<<"Leap year";
        return 1;
    }
    else{
        //cout<<"Not a Leap year";
        return 0;
    }
}
