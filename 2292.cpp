#include <iostream>

using namespace std;

int main()
{

    int a;
    int n=6;
    int c=1;
    cin >> a;
    if (a==1)
    {
        cout<<"1"<<endl;
    }else{
        for(int i=0;; i++)
        {
            c+=i;
            if(n*(c+i)+1 >= a)
            {
                cout<<i+2<<endl;
                break;
            }
        }

    }


    return 0;
}
