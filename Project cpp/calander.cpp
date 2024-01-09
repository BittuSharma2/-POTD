#include<iostream>

int Mday(int m,int y);
int ODDday(int d,int m,int y);
void Month(void);
void Day(void);
int oddnum(int day,int month,int year);
int LeapYear(int y);
int OddDay(int d,int m,int y);

using namespace std;
int main()
{
    cout<<"1. For Day";
    cout<<endl<<"2. For Month";
    cout<<endl<<"3. For year";
    cout<<endl<<"Enter your choice: ";
    int choice;
    cin>>choice;
    //cout<<choice;
    switch(choice)
    {
    case 1:
        //cout<<choice<<endl
        cout<<endl<<"    ";
        Day();
        break;
    case 2:
        //cout<<choice;
        cout<<endl;
        Month();
        break;
    case 3:
        cout<<choice;
        break;
    default:
        cout<<"Wrong choice";
    }
    cout<<endl;
    getchar();
    getchar();
}


//Function for Day.
void Day(void)
{
     cout<<"Enter Date formate(dd mm yyyy): ";
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
        cout<<"    Sunday.";
        break;
    case 1:
        cout<<"   Monday.";
        break;
    case 2:
        cout<<"   Tuesday.";
        break;
    case 3:
        cout<<"   Wednesday.";
        break;
    case 4:
        cout<<"   Thursday.";
        break;
    case 5:
        cout<<"   Friday.";
        break;
    case 6:
        cout<<"   Saturday.";
        break;
    default:
        cout<<"   Wrong value.";
    }


    //cout<<endl<<d<<"  "<<m<<"  "<<ya;
    //int l=LeapYear(y);
    //cout<<endl<<endl<<l;
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


//Function for odd day.
int OddDay(int d,int m,int y)
{
    cout<<"odd day";
    int da=d,ma=m,ya=y;
    da%=400;




    int od;
    switch(od)
    {
    case 0:
        return 0;
        break;
    case 1:
        return 1;
        break;
    case 2:
        return 2;
        break;
    case 3:
        return 3;
        break;
    case 4:
        return 4;
        break;
    case 5:
        return 5;
        break;
    case 6:
        return 6;
        break;
    default:
        return 7;
    }
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







//Function for month.
void Month(void)
{
    cout<<"Enter Date formate(mm yyyy): ";
    int m,y;
    cin>>m>>y;
    int oddnum=ODDday(1,m,y);
    cout<<endl<<oddnum;
    cout<<endl<<"Sun  Mon  Tue  Wed  Thu  Fri  Sat"<<endl;
    for(int i=0;i<oddnum;i++)
    {
        cout<<"     ";
    }
    int mday=Mday(m,y);
    int i=1;
    for(;i<=7-oddnum;i++){
        cout<<i;
        for(int k=1;k<=4;k++)
            cout<<" ";}
    cout<<endl;

    for(;i<=mday;)
    {

        for(int j=1;j<=7;j++){
            cout<<i;
            //for space
            if(i<=9){
            for(int k=1;k<=4;k++)
                cout<<" ";}
            else{
                for(int k=1;k<=3;k++)
                    cout<<" ";
            }
            if(i==mday)
            {
                i++;
                break;
            }
            i++;

            }
        cout<<endl;
    }

cout<<endl<<endl<<mday;
}



//Function for odd day.
int ODDday(int d,int m,int y)
{
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
    return oddDay1;
}




//Function for month day.
int Mday(int m,int y)
{
    switch(m)
    {
    case 12:
        return 31;
        break;
    case 11:
        return 30;
        break;
    case 10:
        return 31;
        break;
    case 9:
        return 30;
        break;
    case 8:
        return 31;
        break;
    case 7:
        return 31;
        break;
    case 6:
        return 30;
        break;
    case 5:
        return 31;
        break;
    case 4:
        return 30;
        break;
    case 3:
        return 31;
        break;
    case 2:{
        int l=LeapYear(y);
        if(l==1)
            {return 29;
            break;}
        else
            {return 28;
            break;}}
    case 1:
        return 31;

    }
}
