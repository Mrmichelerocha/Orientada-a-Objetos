#include "dictionary.hpp"

int main(int argc, char* argv[])
{
// chamada da minha minha função na pagina dictionary.hpp
    bool status = LoadDictionary("meu.txt");
    if(status == false)
    {
// se ele não encontrou o arquivo txt ele retorna isso:*/
        cout << "Arquivo não encontrado" << endl;
        return 1;
    }
    return 0;
}
