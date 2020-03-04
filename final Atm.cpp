#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    int num,x,y,x1,n;
    cout << "Enter the Amount: " << endl;
    cin >> num;
        if(num%50==0)
                {
                x1= num/50;
                if(num==50)
                        {
                        x1=1;
                        }
                }
        else if(num%20==0 || (num-20)%50==0 || (num-40)%50==0)
        {

                for(x=20;x<80;x+=20)
                 {
                                n=num-x;
                                if((n%50)==0 || (n%50)==1)
                                {
                                        x1=n/50;
                                        y=x/20;
                                        break;
                                }
                }
        }
        else
        {
                y= num/20;
                if(num==20)
                {
                       y=1;
                }
        }
        cout << " value of x: " << x1 << "value of Y: " << y << endl;
}
