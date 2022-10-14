#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<vector<int>> matriz;
    vector<int> linha_temp;
    int N;
    int temp;

    cout << "Informe a ordem da matriz: ";
    cin >> N;

    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << "Elemento["<<i<<"]["<<j<<"]: ";
            cin >> temp;
            linha_temp.push_back(temp);
        }
        matriz.push_back(linha_temp);
        linha_temp.clear();
    }

    cout << "\n\nMatriz Lida\n\n";

    for(int i = 0; i < N; i++){
        for(int j =0; j < N; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }




    return 0;
}
