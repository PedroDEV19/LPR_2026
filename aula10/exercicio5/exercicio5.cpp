
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Produto
{
public:
    string nome;
    double preco;
};

class Pedido
{
public:
    Produto produto;
    int quantidade;
};

int main()
{
    Produto p;
    p.nome = "Camiseta";
    p.preco = 50.00;

    Pedido pedido;
    pedido.produto = p;
    pedido.quantidade = 3;

    cout << "Produto: " << pedido.produto.nome << endl;
    cout << "Quantidade: " << pedido.quantidade << endl;

    cout << "Preco total: R$ "
         << fixed << setprecision(2)
         << (pedido.produto.preco * pedido.quantidade)
         << endl;

    return 0;
}
