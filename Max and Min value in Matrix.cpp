#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
int arr[4][4],sum=0;
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
{
 cout<<"Enter Number:";
 cin>>arr[i][j];
}
cout<<endl;  
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
{
  sum=sum+arr[i][j];  
}
cout<<"Sum of ALL Elements:"<<sum<<endl;
///Sum of all elements in the array
cout<<endl;
int sum1=0;
for(int i=0;i<=0;i++)
for(int j=0;j<4;j++)
{
 sum1=sum1+arr[i][j];
}
cout<<"Sum of 1st row:"<<sum1<<endl;//sum of first row 
/////////////////////////////////////////////////////////
cout<<endl;
int sum2=0;
for(int i=1;i<=1;i++)
for(int j=0;j<4;j++)
{
 sum2=sum2+arr[i][j];
}
cout<<"Sum of 2nd row:"<<sum2<<endl;//sum of 2nd row 
////////////////////////////////////////////////////////
cout<<endl;
int sum3=0;
for(int i=2;i<=2;i++)
for(int j=0;j<4;j++)
{
 sum3=sum3+arr[i][j];
}
cout<<"Sum of 3rd row:"<<sum3<<endl;//sum of 3rd row 
////////////////////////////////////////////////////////
cout<<endl;
int sum4=0;
for(int i=3;i<=3;i++)
for(int j=0;j<4;j++)
{
 sum4=sum4+arr[i][j];
}
cout<<"Sum of 4th row:"<<sum4<<endl;//sum of 4th row 
///////////////////////////////////////////////////////
cout<<endl;
// Now We will take sum of Matrix Column wise

int s1=0;
for(int j=0;j<=0;j++)
for(int i=0;i<4;i++)
{
 s1=s1+arr[i][j];
}
cout<<"Sum of 1st column:"<<s1<<endl;//sum of 1st column 
/////////////////////////////////////////////////////////
cout<<endl;
int s2=0;
for(int j=1;j<=1;j++)
for(int i=0;i<4;i++)
{
 s2=s2+arr[i][j];
}
cout<<"Sum of 2nd column:"<<s2<<endl;//sum of 2nd column 
/////////////////////////////////////////////////////////
cout<<endl;
int s3=0;
for(int j=2;j<=2;j++)
for(int i=0;i<4;i++)
{
 s3=s3+arr[i][j];
}
cout<<"Sum of 3rd column:"<<s3<<endl;//sum of 3rd column 
cout<<endl;
/////////////////////////////////////////////////////////
int s4=0;
for(int j=1;j<=1;j++)
for(int i=0;i<4;i++)
{
 s4=s4+arr[i][j];
}
cout<<"Sum of 4th column:"<<s4<<endl;//sum of 4th column 
/////////////////////////////////////////////////////////

// FInd MAx and Minimum Number In MAtrices 
int max,min;
 max=min=arr[0][0];
for(int i=0;i<4;i++)
{
for(int j=0;j<4;j++)
{
  if(arr[i][j]>max)
  {
    max=arr[i][j];
  }
  else
  {
      min=arr[i][j];
  }
}
}
cout<<"MAX Number In Matrix:"<<max<<endl;
cout<<"Minimuum Number in Matrix:"<<min<<endl;
getch();
return 0;
}
  
