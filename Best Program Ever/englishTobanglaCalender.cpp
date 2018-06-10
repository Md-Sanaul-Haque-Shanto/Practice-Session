#include <bits/stdc++.h>
using namespace std;
int EnglishToBanglaCalendar(int date, int month,int year)
{
    string name;
    if(month>=4 && month<12)
    {
        year=year-593;
    }
    else
    {
         year=year-1-593;
    }

    if(month==4)
    {

        if(date<14)
        {
           month=12;
           name="Chaitra";
           date=date+14+3;
        }
        else if(date>=14)
        {
            month=1;
            name="Boishakh";
           date=date-14+1;
        }

    }
    else if(month==5)
    {

        if(date<15)
        {
           month=1;
           name="Boishakh";
           date=date+15+2;
        }
        else if(date>=15)
        {
           month=2;
           name="Joistha";
           date=date-15+1;
        }

    }
    else if(month==6)
    {

        if(date<15)
        {
             month=2;
             name="Joistha";
             date=date+15+2;
        }
        else if(date>=15)
        {
             month=3;
             name="Ashar";
             date=date-15+1;
        }
    }
    else if(month==7)
    {

        if(date<16)
        {
          month=3;
          name="Ashar";
          date=date+16;
        }
        else if(date>=16)
        {
           month=4;
           name="Srabon";
           date=date-16+1;
        }
    }
    else if(month==8)
    {

        if(date<16)
        {
          month=4;
          name="Srabon";
          date=date+16;
        }
        else if(date>=16)
        {
           month=5;
           name="Vadro";
           date=date-16+1;
        }
    }
    else if(month==9)
    {

        if(date<16)
        {
          month=5;
          name="Vadro";
          date=date+16;
        }
        else if(date>=16)
        {
           month=6;
           name="Ashwin";
           date=date-16+1;
        }
    }
    else if(month==10)
    {

        if(date<16)
        {
           month=6;
           name="Aswin";
           date=date+15;
        }
        else if(date>=16)
        {
            month=7;
            name="Kartik";
            date=date-16+1;
        }
    }
    else if(month==11)
    {

        if(date<15)
        {
          month=7;
          name="Kartik";
          date=date+15+1;
        }
        else if(date>=15)
        {
           month=8;
           name="Agrahoyon";
           date=date-15+1;
        }

    }
    else if(month==12)
    {

        if(date<15)
        {
          month=8;
          name="Agrahoyon";
          date=date+15+1;
        }
        else if(date>=15)
        {
           month=9;
           name="Poush";
           date=date-15+1;
        }
    }
    else if(month==1)
    {

        if(date<14)
        {
           month=9;
           name="Poush";
           date=date+14+3;
        }
        else if(date>=14)
        {
           month=10;
           name="Magh";
           date=date-14+1;
        }

    }
    else if(month==2)
    {

        if(date<13)
        {
           month=10;
           name="Magh";
           date=date+13+5;
        }
        else if(date>=13)
        {
           month=11;
           name="Falgun";
           date=date-13+1;
        }
    }
    else if(month==3)
    {

        if(date<15)
        {
           month=11;
           name="Falgun";
           date=date+15+2;
        }
        else if(date>=15)
        {
           month=12;
           name="Choitra";
           date=date-15+1;
        }
    }
cout<<date<<" "<<name<<" "<<month<<" "<<year<<endl;

}
int main(){
long long t;
cin>>t;
while(t--){
int d,m,y;
cin>>d>>m>>y;
EnglishToBanglaCalendar(d,m,y);
}
}
