#include <iostream>

using namespace std;

int main()
{

    string filme = "";
    string reversa = "";

    cin >> filme;

    for(int i  = filme.size() - 1; i >= 0 ; i--){
        reversa += filme[i];
    }

    if(filme == reversa){
        cout << "A palavra é palíndroma\n";
    }else{
        cout << "A palavra não é palíndroma\n";
    }



    cout << endl;
    return 0;
}
