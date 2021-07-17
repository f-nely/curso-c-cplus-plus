#include <fstream>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    ofstream myFile;

    myFile.open("text.txt");

    myFile << "";

    myFile.close();

    return 0;
}


