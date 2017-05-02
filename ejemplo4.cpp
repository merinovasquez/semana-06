#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string texto = "dato1,10.5,19.8";
    
    vector<string> datos;
    
    string valor;
    for(auto i : texto)
    
    {
        if(i!=',')
        {
            valor= valor + i;
        }
        else
        {
            datos.push_back(valor);
            valor.clear();
            
        }
        
    }
    
    datos.push_back(valor);
    
    for(auto i : datos)
    
    {
        cout << i << endl;
    }
    return 0;
    
}