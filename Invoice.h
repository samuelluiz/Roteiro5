#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
    public:
        Invoice(int numero, std::string descricao, int quantidade, float preco);

        float getInvoiceAmount(int, float);

        void setNum(int);
        void setDesc(std::string);
        void setQuant(int);
        void setPrec(float);

        int getNum();
        std::string getDesc();
        int getQuant();
        float getPrec();

        virtual ~Invoice();

    private:
        int numero;
        std::string descricao[50];
        int quantidade;
        float preco;
};

#endif // INVOICE_H
