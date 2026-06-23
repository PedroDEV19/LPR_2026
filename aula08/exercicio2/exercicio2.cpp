#include <iostream>
#include <vector>
#include <string>
#include <iomanip> //formatar as casas decimais do preço

struct Produto {
    std::string nome;
    int codigo;
    double preco;
    int quantidade;
};

int main() {
    //configura o console para exibir duas casas decimais para valores monetários
    std::cout << std::fixed << std::setprecision(2);

    const int QTD_PRODUTOS = 3;
    std::vector<Produto> estoque(QTD_PRODUTOS);
    double valorTotalEstoque = 0.0;

    std::cout << " Cadastro de Produtos \n";

    // ler os dados dos 3 produtos
    for (int i = 0; i < QTD_PRODUTOS; i++) {
        std::cout << "\nProduto " << (i + 1) << ":\n";
        
        std::cout << "Nome: ";
        //limpa o buffer do cin antes de usar getline para ler o nome do produto
        if (i > 0) std::cin.ignore(); 
        std::getline(std::cin, estoque[i].nome);

        std::cout << "Codigo: ";
        std::cin >> estoque[i].codigo;

        std::cout << "Preco (R$): ";
        std::cin >> estoque[i].preco;

        std::cout << "Quantidade: ";
        std::cin >> estoque[i].quantidade;

        // calculo do valor em estoque deste produto e soma ao total
        valorTotalEstoque += estoque[i].preco * estoque[i].quantidade;
    }

    // exibe o resultado final
    std::cout << "Valor total em estoque: R$ " << valorTotalEstoque << "\n";

    return 0;
}