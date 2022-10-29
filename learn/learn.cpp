#include<iostream>
#include<string>
using namespace std;

float globalVar = 22/7;

int main()
{

    float globalVar = 3.1415f;
    std::cout << "The value of pi is => " << globalVar;         //display local variable

    std::cout << "The alt value of pi is => " << ::globalVar;   // display global variable
    // :: is a scope resolution operator


    /* ***********Reference Variables************   */


    float var = 610.06f;
    float &another_var = var;
    // var and another_var are same variable with different names



    /* ****************** TypeCasting ******************** */

    int a  = 1306;
    std::cout<< "Float value of a => " << float(a) << endl; 
    std::cout<< "Double value of a => " << (double)a << endl;

    return 0;
}


int learnCpp(){
    
    // typecasting and reference var

    
    return 0;

}