#include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;

main()
{
double num1, num2;
cin >>num1 >> num2;
if(num1 > num2)
cout << resetiosflags(ios::showpoint)<< setiosflags(ios::fixed)<<setprecision(1)<< num1<<endl;
else {
cout << resetiosflags(ios::showpoint)<< setiosflags(ios::fixed)<<setprecision(1)<< num1 <<endl;
cout << resetiosflags(ios::showpoint)<< setiosflags(ios::fixed)<<setprecision(1)<< num2 <<endl; }

system("PAUSE");
return 0;
}
