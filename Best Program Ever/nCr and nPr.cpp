/* Bismillahir Rahmanir Rahim */
#include<bits/stdc++.h>
#include <iostream>
#include<math.h>
#include<stdio.h>
#include<time.h>
using namespace std;
long long f[100010];
long long inv[100010];
const int mod = 1000000007;

long long bigmod(int b, int e) {
    if(e == 0) return 1;
    if(e & 1) return (bigmod(b, e-1) * b) % mod;
    long long m = bigmod(b, e >> 1);
    return (m * m) % mod;
}
long long inverse(long long x) {
    return bigmod(x, mod - 2);
}
long long fact(int x)
{
	int i, f=1;
	for(i=2; i<=x; i++)
	{
		f=f*i;
	}
	return f;
}
long long nPr(int n,int r)
{
   return fact(n)/fact(n-r);
}
long long nCr(int n,int r)
{
if(r > n / 2) r = n - r;
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;

}
unsigned long long pCq(int p,int q){
    if(p==q) return 1;
    if (q==0&&p!=0) return 1;
    else return (p*fact(p-1))/fact(p-1)*fact(p-q);
};
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
long long convertDecimalToBinary(int n)
{
    long long binaryNumber = 0;
    int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        //cout << "Step " << step++ << ": " << n << "/2, Remainder = " << remainder << ", Quotient = " << n/2 << endl;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int convertBinarytoOctal(long long binaryNumber)
{
    int octalNumber = 0, decimalNumber = 0, i = 0;

    while(binaryNumber != 0)
    {
        decimalNumber += (binaryNumber%10) * pow(2,i);
        ++i;
        binaryNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        octalNumber += (decimalNumber % 8) * i;
        decimalNumber /= 8;
        i *= 10;
    }

    return octalNumber;
}
long long convertOctalToBinary(int octalNumber)
{
    int decimalNumber = 0, i = 0;
    long long binaryNumber = 0;

    while(octalNumber != 0)
    {
        decimalNumber += (octalNumber%10) * pow(8,i);
        ++i;
        octalNumber/=10;
    }

    i = 1;

    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * i;
        decimalNumber /= 2;
        i *= 10;
    }

    return binaryNumber;
}



int checkPrimeNumber(int n)
{
  bool flag = false;

  for(int i = 2; i <= n/2; ++i)
  {
      if(n%i == 0)
      {
          flag = true;
          break;
      }
  }
  return flag;
}
/*int n;

  cout << "Enter a positive  integer: ";
  cin >> n;

  if(checkPrimeNumber(n) == 0)
    cout << n << " is a prime number.";
  else
    cout << n << " is not a prime number.";*/

    long long gcd(long long int a,long long int b)
    {
        return b==0?a:gcd(b,a%b);
    }

int lcm(int a, int b)
{
    int temp = gcd(a, b);

    return temp ? (a / temp * b) : 0;
}
char FLCap(char s[11])
{
    //first letter capital
  return s[0]=s[0]+('A'-'a');

}
int FF(int n, int p){
int x=0;
while(n){
    n/=p;
    x+=n;
}
return x;
}
int EnglishToBanglaCalendar(int date, int month,int year)
{
    string name;
        //4 55 6666 55 435(14>)//4 55 666666 4 3 5
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
cout<<date<<"  "<<name<<"  "<<"( Month Number="<<month<<")"<<"  "<<year<<endl;

}
/* char to int convetor*/
long stringToInt(char* n)
{   long a;
    for (long i=0,a=0;n[i];i++)
    {
    a = a*10+(n[i]-'0');
    }
    return a;
}
void reverseStr(string &str)
{
    int n = str.length();
    for (int i=0; i<n/2; i++)
       swap(str[i], str[n-i-1]);
}
/*
string sum of kth elements
for(int i=0;i<k;i++){
    sum+=numm[i]-'0';
}
cout<<sum<<endl;
*/
void primeFactor(int n)
{
    while (n%2 == 0)
    {
        printf("%d ", 2);
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            printf("%d ", i);
            n = n/i;
        }
    }
    if (n > 2)
        printf ("%d ", n);
}
/*static string dict1[] ={"Zero","One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine",
                 "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                 "Seventeen", "Eighteen", "Nineteen"};

static string dict2[]={"","", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
static string dict3[]={"Hundred", "Thousand", "Million", "Billion" };


// This function only converts the number which less than 1000
string numberLess1000ToWords(int num) {
    //char n[3] = {0, 0, 0};
    string result;

    if (num == 0) {
        return result;
    }else if (num < 20) {
        return dict1[num];
    } else if (num < 100) {
        result = dict2[num/10];
        if (num%10 > 0) {
            result += " " + dict1[num%10];
        }
    }else {
        result = dict1[num/100] + " " + dict3[0];
        if ( num % 100 > 0 ) {
            result += " " + numberLess1000ToWords( num % 100 );
        }
    }
    return result;
}

string numberToWords(int num) {
    //edge case
    if (num ==0 ) return dict1[num];

    vector<string> ret;
    for( ;num > 0; num/=1000 ) {
        ret.push_back( numberLess1000ToWords(num % 1000) );
    }

    string result=ret[0];
    for (int i=1; i<ret.size(); i++){
        if (ret[i].size() > 0 ){
            if ( result.size() > 0 ) {
                result = ret[i] + " " + dict3[i] + " " + result;
            } else {
                result = ret[i] + " " + dict3[i];
            }
        }

    }
    return result;
}

int main(int argc, char** argv)
{
    int num,c=0;
    cin>>num;
    if (argc >1){
        num = atoi(argv[1]);
    }
    cout<<numberLess1000ToWords(num)<<endl;
return 0;
}
*/
int main(int argc, char const *argv[]){
cin.tie(0);
ios_base::sync_with_stdio(0);


return 0;
}

