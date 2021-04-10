#ifndef HACKERRANK_CODES_003_BASIC_DATA_TYPES_H
#define HACKERRANK_CODES_003_BASIC_DATA_TYPES_H

#include "iostream"
#include "iomanip"
using namespace std;

int basicDataTypes(){
    int a;
    long int b;
    char c;
    float f;
    double d;
    cin >> a >> b >> c >> f >>d;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    cout << fixed << setprecision(3) << f << endl;
    cout << fixed << setprecision(9) << d <<endl;

    return 0;
}


#endif //HACKERRANK_CODES_003_BASIC_DATA_TYPES_H
