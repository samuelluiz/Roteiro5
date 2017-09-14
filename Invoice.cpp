#include "Invoice.h"
#include <iostream>
#include <string>

using namespace std;

Invoice::Invoice(int num, std::string desc, int quant, float prec)
{
    setNum(num);
    setDesc(desc);
    setQuant(0);
    setPrec(0.0);
}

void Invoice::setNum(int num){
    if(num <= 0){
        cout << "Numero negativo" << endl;
    } else {
        numero = num;
    }
}

void Invoice::setDesc(std::string desc){
    descricao = desc;
}

void Invoice::setQuant(int quant){
    if(quant>0){
        quantidade = quant;
    }
}

void Invoice::setPrec(float prec){
    if(prec>0){
        preco = prec;
    }
}

float Invoice::getInvoiceAmount(int quant, float prec){
    quant = getQuant();
    prec = getPrec();

    return (float)quantidade*preco;
}
Invoice::~Invoice()
{
    //dtor
}
