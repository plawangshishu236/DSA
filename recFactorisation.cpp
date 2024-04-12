#include <iostream>
using namespace std;
int fact(int a)
{
    int f = 1;
    while (a > 0)
    {
        f = f * a;
        a--;
    }
    return f;

    // while (a > 0)
    // {
    //     return (a + sum(a - 1));
    // }

    // if (a==0){
    //     return 1;
    // }
    // return (a *fact(a-1));
}

int main()
{
    int a = 4;

    cout << fact(a);
}
