#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <cstdlib>
#include <fstream>
using namespace std;

int main(){
    double nub = 0, miw = 0, stdy;
    string x;
    ifstream source("score.txt");
    while (getline(source,x)){
        miw += atof(x.c_str());
        stdy += pow(atof(x.c_str()),2);
        nub++;
    }
    double Mean = miw/nub;
    cout << "Number of data = " << nub << endl;
    cout << setprecision(3);
    cout << "Mean = " << Mean << endl;
    cout << "Standard deviation = " << sqrt((stdy/nub)-pow(Mean,2));
}