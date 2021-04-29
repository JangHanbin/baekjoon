#include <iostream>

using namespace std;

int main()
{

    long long a,b,c;
    cin >> a >> b >> c;
    if(c-b < 0)
    {
        cout<<"-1"<<endl;
    }else{
        for(int i=1; ;i++)
        {
            if(a < (c-b)*i)
            {
                cout<<i<<endl;
                break;
            }
        }
    }


    return 0;
}
