#include <iostream>
using namespace std;

int main()
{
    int x,a,b,c,ai,bi,ci,k;
    int max = 0; 
    cout<<"Введи трехзначное число, в котором не повторяются цифры"<<endl;
    cin>>x; 
    while (k != 1) 
    {
        while((x < 100) or (x > 999))
        {
            cout<<"это не трехзначное число, введите, пожалуйста трехзначное"<<endl;
            cin>>x; 
        }
        a = x % 10;
        b = (x / 10) % 10;
        c = x / 100;
        while ((a == b) or (b == c) or (c == a))
        {
            cout<<"в этом числе пофторяются цифры, введи другое"<<endl;
            cin>>x;
            a = x % 10;
            b = (x / 10) % 10;
            c = x / 100;
        }
        k = 1;
    }
    cout<<"комбинации цифр: "<<endl;
    for(int i = 100; i < 1000; ++i)
    { 
        ai = i % 10;
        bi = (i / 10) % 10;
        ci = i / 100;
        if ((a == ai) or (a == bi) or (a == ci))
        {
            if ((b == ai) or (b == bi) or (b == ci))
            {
                if ((c == ai) or (c == bi) or (c == ci))
                {
                    cout<<i<<endl; 
                    if (max < i)
                    {
                        max = i;
                    }
                }
            }
        }
    }
    cout<<"максимальное число из комбинаций: "<<max;
}