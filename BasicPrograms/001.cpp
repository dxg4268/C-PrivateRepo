/* Program to enter name and marks of a
 student and give grade acc to general criteria */

#include<iostream>
using namespace std;


int main()
{
    // std::cout << "Enter name of student => " ;
    int i = 1, markSum = 0, marks;
    char grade;

    while (i <= 5){
        std::cout << "Enter marks " << i << " => ";
        std::cin >> marks;
        std::cout << endl;
        markSum = markSum + marks;
        i++;
    }

    float avg = markSum / 5.0f;

    if (avg >= 90) {
        grade = 'A';
    }

    else if (avg >= 80) {
        grade = 'B';
    }

    else if (avg >= 70) {
        grade = 'C';
    }

    else {
        grade = 'D';
    }

    std::cout << "Grade of student is => " << grade;


    return 0;
}



