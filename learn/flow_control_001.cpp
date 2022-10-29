#include<iostream>
using namespace std;

int main()
{
    // *************** Flow Control ==> if-else

    const int var = 16;

    std::cout << "Guess the Number : ";
    int x; cin >> x;

    if(x == var) {
        std::cout << "You have guessed the number ";

    }

    else if(x > var){
        std::cout << "Your number is bigger !";

    }

    else if(x < var){
        std::cout << "Your number is smaller !";

    }

    else{
        std::cout << "Invalid input !";
    }
    oddEven();
    return 0;
}


int switchCheck() {

    cout << "Enter age ";
    int age; cin >> age;
    
    switch (age)
    {
    case 18:
        cout << "Age is 18";
        break;

    case 16:
        cout << "Age is 16";
        break;

    default:
        cout << "You are not robot.";
        break;

    }

}

void oddEven(){
    int num1;
    cin >> num1;
    if (num1%2==1){
        cout<< "Odd";
    }
    else{
        cout << "Even";
    }
}
