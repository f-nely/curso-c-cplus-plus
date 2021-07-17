#include <stdio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("text.txt", std::ios_base::app);

    outfile << "Hey you!";

    outfile.close();

    return 0;
}
