#include "dictionary.hpp"

bool LoadDictionary(const char* path)
{
    cout << "tentando carregar: " << path << endl;
// ifstream nome_da_variavel é um comando de saida
// do arquivo e entrada no codigo
    ifstream file;
// tm é minha variavel do tipo string (tipo int) que vai
// armazena cada cadeia de caracter do meu arquivo txt
    string tm;
// variavel.open(nome do arquivo txt) ela vai abrir o Arquivo
    file.open(path);
// verificar se não ocoreu nenhum erro ao abrir e se abrir executar um
// comando de impressão
    if(file.is_open() == true){
// preciso ler linha por linha do meu arquivo então comando de repetição
// o ***getline*** vai me retornar o arquivo lido. logo como parametro eu coloco
// o arquivo que vai ser lido (file) e a variavel onde ele vai ser armazenado
// (tm)
      while(getline(file, tm)){
          cout << "string is : " << tm << endl;
      }
      return true;
    }
    return false;
}
