#include <iostream>
#include <cstdlib>

using namespace std;


//**********************************************
class cuadrado{                               //
    private:                                  //                                   
        int Lado;                             //Definicion de metodos/funciones y atributos *dentro de la clase*
    public:                                   // cuadrado (){}<-- esto es un *constructor=funcion especial* que se llama poniendo el nombre de la clase
        void imprimircuadrado (int &Lado){    //
            for (int i=0; i < Lado; i++){     //
                for (int i=0; i < Lado ; i++){   //si quisieramos *definir* algo "fuera de la clase" tenemos que declararla dentro de la class y definirla fuera y seria
                    cout << "* ";             //void imprimircuadrado::cuadrado(){codigo de la fun};                                    //
                };                                        
                cout << endl;                             
            };                                            
        };
        void setlado(int L){
            Lado = L;
        }
        int getlado(){
            return Lado;
        }
                                           
};                                            


int main(){
    cuadrado cdr;
    int L;
    cout << "Tamaño del cdr?: ";
    cin >> L;
    system ("cls");
    cdr.setlado(L);
    cout << cdr.getlado() << "\n\n\n";
    cdr.imprimircuadrado(L);
    return 0;
}