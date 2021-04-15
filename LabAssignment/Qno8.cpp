//Write a C++program that reads marks in five subjects and finds total marks, percentage.
#include <iostream>
using namespace std;
int main()
{
    float p, c, m, e, b, total, percentage;
    
    // p, c, m, e, and h are the five subjects
    // p = physics
    // c = chemistry
    // m = math
    // b = biology
    // e = english

    cout << "Enter the marks of five subjects::\n";
    cin >> p >> c >> m >> e >> b;

    // Calculate total, average and percentage
    total = p + c + m + e + b;
    percentage = (total / 500.0) * 100;

    // Output
    cout << "The Total marks   = " << total << "/500\n";
    cout << "The Percentage    = " << percentage << "%";

    return 0;
}