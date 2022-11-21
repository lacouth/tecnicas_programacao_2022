#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    srand(time(NULL));
    ofstream arquivo;
    arquivo.open("/home/lacouth/codes/sensor.txt");

    for(int i = 0; i < 1000; i++){
        arquivo << 20 + rand() % 13 << ",";
        arquivo << 70 + rand() % 21 << endl;
    }
    return 0;
}
