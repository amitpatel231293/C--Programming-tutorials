#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,x,y=0,x1=0,n;
    cin >> num;
        if(num%50==0)
                {
                x1= num/50;
                cout << "Yes " << x1 << " " << y << endl;
                }
        else if(num%20==0 || (num-20)%50==0 || (num-40)%50==0)
        {

                for(x=20;x<100;x+=20)
                 {
                                n=num-x;
                                if((n%50)==0 || (n%50)==1)
                                {
                                        x1=n/50;
                                        y=x/20;
                                        cout << "Yes " << x1 << " " << y << endl;
                                        break;
                                }
                }
        }
        else
        {
                cout << "No" << endl;
        }
}
