#include<iostream>


using namespace std;

int main(){

int i,r,k,j;

 cout << "enter the value of n: " << endl;
 cin >> r;

 for(i=1;i<=r;++i)
        {
                for(k=1;k<=r-i;k++)
                 {
                        cout << " " ;
                 }
                for(j=1;j<=i;j++)
                {
                        cout << "* ";
                }
           cout << endl;
        }
        return 0;

}