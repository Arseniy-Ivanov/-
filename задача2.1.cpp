#include <iostream> 
#include <cstdlib> 
#include <time.h> 
using namespace std; 
int main() 
{ 
    setlocale(LC_ALL,"ru");
    srand(time(NULL)); 
    int x,k,m; 
    k = 1;  
    x = rand(); 
    while ((x > 100) or (x < 1)) 
        {x = rand();} 
    cout<<"введи число: "<<endl; 
    cin>>m;  
    if (m == x) 
       {cout<<"молодец! ты угадал число с первой попытки)";} 
    else 
        {k = 1; 
        while (k < 6) 
            {if (m == x) 
                {cout<<"ты угадал число верно, молодец! (число:"<<x<<")"; 
                k = 8;} 
            else 
            {cout<<"попробуй еще раз, у тебя "<<k+1<<"-ая попытка: "; 
            cin>>m; 
            k += 1;}}} 

}