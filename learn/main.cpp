#include<iostream>          // import iostream header file, for input/output
#include<vector>            // import vector headers
using namespace std;

int GLOBAL_VAR = 1306;

float avg(int a, int b){
    float avg_result = (a + b)/2.0f;
    return avg_result;
}

double sum(int a, int b){
    double sum_res = a + b;
    return sum_res;
}


void exchange(int a, int b){
    float c;
    c = b;
    b = a;
    a = c;
    cout << "exchanged values,";
    cout << "x : " << a;
    cout << "y : " << b;
}


string greet(){
    int age;
    cout << endl << "Enter age : ";
    cin >> age;
    
    string str = "\nHello, You are Aditya\n";
    return str;
}


int main(){                 // main() is the starting point, runs by default, int value will be returned    
    // Fuction body starts
    
    vector<int> vect ;

    float x;
    cout << "Enter a Number : ";
    cin >> x;

    float y;
    cout << "Enter 2nd Number : ";
    cin>>y;

    bool is_true = true;

    float result = avg(x,y);
    double sum_value = sum(x,y);
    string msg = greet();
    bool is_correct = (x >= 5) || (y < 3);
    std::cout << endl << is_correct << endl;

    exchange(x,y);

    std::cout << msg;
    std::cout << "Average of 2 Numbers is ==> " << result << endl;
    std::cout << "Sum of the Numbers is ==> " << sum_value;
    return 0;

}// function body ends
