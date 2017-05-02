#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
   //Nombre del archivo
   string na= "datos3.txt";
   
   //Crear un objeto de archivo de lectura
   ifstream archivo (na);
   
   //variabke de string parra leer cada linea
   string texto;
   vector<string> vlineas;
   
   //Leo las lineas dek archivo
   while (getline(archivo, texto))
   
   {
      // cout << texto << endl;
      vlineas.push_back(texto);
   }
   
   for (auto i : vlineas)
   {
      cout << i << endl; 
       
   }
   
   //Imprimir usando el for tradicional
   for (int i=0; i < vlineas.size(); i++)
   
   {
       cout << vlineas[i] << endl;
   }
 
    return 0;   
}