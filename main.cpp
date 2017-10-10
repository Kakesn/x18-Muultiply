#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{

vector < vector < int > > Multiply;
int row = 0, col = 0;
Multiply.resize(13);
    for( int row = 0; row < Multiply.size(); row++) {
    Multiply[row].resize(13);
    cout<< " ";
    for( int col = 0; col < Multiply[row].size(); col++) {
    cout << row * col << " ";
    }
    cout<< endl;
    }
    
return 0;
} 
