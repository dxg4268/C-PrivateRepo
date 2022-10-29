#include<iostream>
using namespace std;


void forLoop()
{

    // For loop basic example to print 10 numbers from 0
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << endl;
    }

    // infinite loop
    int x = 0;
    for (;;)
    {
        std::cout << x << endl;
        x++;
    }
}


void whileLoop(){
    //While Loop basic example to print 10 numbers from 0
    // int i = 0;
    // while (i < 10) {
    //     cout << i;
    //     i++;
    // }


    //infinite Loop
    int x = 0;
    while (true) {
        cout << x << endl;
        x++;
    }
} 

int main()
{
    // forLoop();
    whileLoop();

    return 0;
}






