#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <fstream>

using namespace std;

class MiClase
{
    int x;
};

int main(int args, char*argv)
{
    //Inicializacion
    vector<int> mi_vector;
    list<int>mi_list;
    map<string,int>mi_map;

    //Agregar valores
    mi_vector.push_back(1);
    mi_vector.push_back(2);

    mi_list.push_back(1);
    mi_list.push_front(0);
    list<int>::iterator mi_iterador;
    mi_iterador=mi_list.begin();
    mi_iterador++;
    mi_list.insert(mi_iterador,5);

    mi_map["test"]=10;
    mi_map["test2"]=20;

    //Recorer
    for(int i=0;i<mi_vector.size();i++)
    {
        cout<<mi_vector[i]<<endl;
    }

    for(mi_iterador=mi_list.begin();
        mi_iterador!=mi_list.end();
        mi_iterador++
        )
    {
        cout<<*mi_iterador<<endl;
    }

    cout<<mi_map["test"]<<endl;
    cout<<mi_map["test2"]<<endl;


    //Archivos
    ofstream out("archivo",ios::binary);
    int *num = new int;
    *num = 99;
    out.write((char*)num,4);
//    out.seekp(0);
    *num = 77;
    out.write((char*)num,4);
    out.close();

    ifstream in("archivo",ios::binary);
    int *num2 = new int;
//    in.seekg(4);
    in.read((char*)num2,4);
    in.close();

    cout<<*num2;

    return 0;
}








