#include <iostream>

using namespace std;

struct Data{
    int dia;
    int mes;
    int ano;
};

int dias_no_mes(Data d){
    int meses[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if (( d.ano % 4 == 0 && d.ano % 100 != 0 ) || d.ano % 400 == 0){
        meses[1] = 29;
    }
    return meses[d.mes -1];
}

bool datas_iguais(Data d1, Data d2){
    return d1.dia==d2.dia and d1.mes==d2.mes and d1.ano==d2.ano;
}

int dias_entre_datas(Data d1, Data d2){
    int contador = 0;
    while(datas_iguais(d1,d2) == false){
        contador++;
        d1.dia++;
        if(d1.dia > dias_no_mes(d1)){
            d1.dia = 1;
            d1.mes++;
            if(d1.mes > 12){
                d1.mes = 1;
                d1.ano++;
            }
        }
    }
    return contador;
}

int main()
{

    Data data1;
    data1.dia = 1;
    data1.mes = 1;
    data1.ano = 2024;

    Data data2;
    data2.dia = 1;
    data2.mes = 1;
    data2.ano = 2025;

    int dias = 0;
    dias = dias_entre_datas(data1,data2);
    cout << "Total de dias entre as datas = " << dias << endl;
    return 0;
}
