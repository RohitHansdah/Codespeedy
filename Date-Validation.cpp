//Program for Date Validation
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <queue>
#include <map>
#include <set>
#include <math.h>
#include <algorithm>
#include <climits>
#include <string>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    bool session=false;
    while(!session)
    {
         //Asking User for Date Input
         cout<<"Please enter a date for validation"<<endl;
         cout<<"The format should be DD/MM/YYYY"<<endl;
         string date;
         cin>>date;
         //Validation of date
         bool fail=false;
         if(date.length()!=10 || date[2]!='/' || date[5]!='/')
         {
               fail=true;
         }
         else
         {
              int day,month,year;
              int day_ten,day_unit;
              int month_ten,month_unit;
              int year_thousand,year_hundred,year_ten,year_unit;
              day_ten=(int)date[0]-'0';
              day_unit=(int)date[1]-'0';
              day=(day_ten)*10+day_unit;
              month_ten=(int)date[3]-'0';
              month_unit=(int)date[4]-'0';
              month=(month_ten)*10+month_unit;
              year_thousand=(int)date[6]-'0';
              year_hundred=(int)date[7]-'0';
              year_ten=(int)date[8]-'0';
              year_unit=(int)date[9]-'0';
              year=(year_thousand)*1000+(year_hundred)*100+(year_ten)*10+year_unit;
              //Checking year
              if(year<1000 || year>9999)
              {
                   fail=true;
              }
              //Checking for leap 
              bool leap=false;
              if((year%4==0 && year%100!=0)||(year%400==0))
              {
                   leap=true;
              }
              //Checking month
              if(month<1 || month>12)
              {
                   fail=true;
              }
              //Jan Mar May July Aug Oct Dec months
              if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
              {
                   if(day<=0 || day>=32)
                   {
                        fail=true;
                   }
              }
              else if(month==4 || month==6 || month==9 || month==11)
              {
                   //Apr Jun Sept Nov Months
                   if(day<=0 || day>=31)
                   {
                        fail=true;
                   }
              }
              else
              {
                   //Feb Month
                   if(leap)
                   {
                        //29 days in leap year
                        if(day<=0 || day>=30)
                        {
                             fail=true;
                        }
                   }
                   else
                   {
                        //28 days in non leap year
                        if(day<=0 || day>=29)
                        {
                             fail=true;
                        }
                   }
              }
         }
         if(fail)
         {
              cout<<date<<" is a Invalid date"<<endl;
         }
         else
         {
              cout<<date<<" is a Valid date"<<endl;
         }
         cout<<"Do you want to quit ?"<<endl;
         cout<<"press 'y' for yes and 'n' for no"<<endl;
         char quit;
         cin>>quit;
         if(quit=='y')
         {
              session=true;
         }
         else
         {
              session=false;
         }
    }
    return 0;
}