//ARRAYS ARITHMETIC IN C++

//an  is a collection of items of similar type stored-
// in contiguous memory location.

#include <iostream>
using namespace std;

int main()
{

    // The student marks in four subject
    //  example
    int marks[4] = {93, 94, 99, 91};
    cout << "The student marks in sub1 = " << marks [0] << endl;
    cout << "The student marks in sub2 = " << marks [1] << endl;
    cout << "The student marks in sub3 = " << marks [2] << endl;
    cout << "The student marks in sub4 = " << marks [3] << endl;

    // Student four math marks
    int mathmarks[4];
    mathmarks [0] = 24;
    mathmarks [1] = 25;
    mathmarks [2] = 21;
    mathmarks [3] = 20;
    cout << "these are the math marks " <<endl;
    cout << mathmarks [0] << endl;
    cout << mathmarks [1] << endl;
    cout << mathmarks [2] << endl;
    cout << mathmarks [3] << endl;

    // you can change the value of the mathmarks 
    mathmarks[2] = 45;
    cout << "these are the marks " <<endl;

    cout << mathmarks[0] << endl;
    cout << mathmarks[1] << endl;
    cout << mathmarks[2] << endl;
    cout << mathmarks[3] << endl;
    cout << "these are the marks" << endl;

    //using for loop
    for (int i = 0; i < 4; i++)
    {
        cout << "the value of the marks" << i << marks[i] << endl;
    }

    // do the same using while and do-while loops

    //using while loop
    int i = 0;
    while (i < 4)
    {
        cout << "the value of the marks " << i <<" is "<< marks [i] << endl;
        i++;
    }

    //using do while loop
    int i=0;
    do
    {
        cout<<"the value of the marks"<<i<<" is "<<marks[i]<<endl;
        i++;
    } while (i<4);

    

    return 0;
}

