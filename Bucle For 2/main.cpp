#include <iostream>

using namespace std;

int main()
{
    for(int i=1; i<=255; i++){
            if(i%15==0)
                cout<<endl;
    cout <<" "<< (char)i;
    }

    return 0;
}
