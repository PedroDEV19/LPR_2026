#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Livro {
private:
    string titulo;
    string autor;
    int anoPublicacao;

public:

    Livro(string t, string a, int ano) {
        titulo = t;
        autor = a;
        anoPublicacao = ano;
    }

    // Getters
    string getTitulo() {
        return titulo;
    }

    string getAutor() {
        return autor;
    }

    int getAnoPublicacao() {
        return anoPublicacao;
    }

    void setTitulo(string t) {
        titulo = t;
    }

    void setAutor(string a) {
        autor = a;
    }

    void setAnoPublicacao(int ano) {
        anoPublicacao = ano;
    }
};

class Biblioteca {
private:
    vector<Livro> livros;

public:

    void AdicionarLivro(Livro livro) {
        livros.push_back(livro);
    }

    // Lista todos os livros
    void ListarLivros() {
        for (int i = 0; i < livros.size(); i++) {
            cout << "\nTitulo: "
                 << livros[i].getTitulo();

            cout << "\nAutor: "
                 << livros[i].getAutor();

            cout << "\nAno de publicacao: "
                 << livros[i].getAnoPublicacao();

            cout << "\n--------------------";
        }
    }
};

int main() {
    Biblioteca biblioteca;

    Livro livro1("Dom Casmurro", "Machado de Assis", 1899);
    Livro livro2("O Pequeno Principe", "Antoine de Saint-Exupery", 1943);
    Livro livro3("1984", "George Orwell", 1949);

    biblioteca.AdicionarLivro(livro1);
    biblioteca.AdicionarLivro(livro2);
    biblioteca.AdicionarLivro(livro3);

    cout << "LIVROS DA BIBLIOTECA \n";

    biblioteca.ListarLivros();

    return 0;
}