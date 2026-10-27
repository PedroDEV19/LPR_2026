
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Cliente;

class Reserva
{
public:
    string descricao;
    Cliente* cliente;

    Reserva(string descricao)
    {
        this->descricao = descricao;
        cliente = nullptr;
    }
};

class Cliente
{
public:
    string nome;
    vector<Reserva*> reservas;

    Cliente(string nome)
    {
        this->nome = nome;
    }

    void AdicionarReserva(Reserva* reserva)
    {
        reservas.push_back(reserva);
        reserva->cliente = this;
    }

    void ListarReservas()
    {
        cout << "Reservas de " << nome << ":" << endl;

        for (Reserva* reserva : reservas)
        {
            cout << reserva->descricao << endl;
        }
    }
};

int main()
{
    Cliente cliente("Joao");

    Reserva r1("Reserva 1");
    Reserva r2("Reserva 2");

    cliente.AdicionarReserva(&r1);
    cliente.AdicionarReserva(&r2);

    cliente.ListarReservas();

    return 0;
}
