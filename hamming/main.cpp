#include <iostream>
#include <string>

using namespace std;

int main()
{
    string dna_1 = "";
    string dna_2 = "";
    string validas = "ACGT";
    int hamming = 0;
    cin >> dna_1 >> dna_2;

    if(dna_1 != dna_2){
        if(dna_1.size() == dna_2.size()){
            for(int i = 0; i < dna_1.size(); i++){
                if(validas.find(dna_1[i]) != -1 and validas.find(dna_2[i]) != -1){
                    if(dna_1[i] != dna_2[i]){
                        hamming++;
                    }
                }else{
                    cout << "Cadeia de DNA inválida\n";
                    return 0;
                }
            }
            if(hamming == dna_1.size()){
                cout << "Cadeias de DNA completamente diferentes\n";
            }else{
                cout << "Cadeias de DNA com diferenças\n";
            }

            cout << "A distância de Hamming = " << hamming << endl;
        }else{
            cout << "Cadeias de tamanhos diferentes\n";
            return 0;
        }

    }else{
        cout << "Cadeias idênticas\n";
        return 0;
    }
    return 0;
}
