#inclu#include <iostream>
using namespace std;
bool func();
bool func2();
int main()
{
func();
}

bool func2()
{
cout <<"called me"<<endl;
return true;
}
bool func()
{
return (true ||func2());
}