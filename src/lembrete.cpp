#include "lembrete.h"

Lembrete::Lembrete()
{
    titulo = "";
    texto = "";
    id = calculaID();
}

void Lembrete::addTitulo(const std::string &t)
{
}

void Lembrete::addTexto(const std::string &txt)
{
}

void Lembrete::addData(int d, int m, int a)
{
    Data novaData;
    novaData.addData(d, m, a);
    if (novaData.valido())
        data = novaData;
}

void Lembrete::addHora(int h, int min)
{
    Hora novaHora;
    novaHora.addHora(h, min);
    if (novaHora.valido())
        hora = novaHora;
}

int Lembrete::getID() { return id; }

int Lembrete::calculaID()
{
    return 0;
}