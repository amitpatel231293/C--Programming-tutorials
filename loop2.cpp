#include<iostream>

using namespace std;

int main(){

int i,r,j;

 cout << "enter the value of n: " << endl;
 cin >> r;

 for(i=1;i<=r;++i)
        {
                for(j=1;j<=i;++j)
                        {
                          cout << "* ";
                        }
                cout << endl;
        }
for(i=r-1;i>=1;--i)
        {
                for(j=1;j<=i;++j)
                        {
                          cout << "* ";
                        }
                cout << endl;
        }

        return 0;

}
