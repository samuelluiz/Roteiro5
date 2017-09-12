#ifndef DATA_H
#define DATA_H

class Data{
private:
    int dia;
    int mes;
    int ano;

public:
    Data(int dia, int mes, int ano);
    void setDia(int);
    void setMes(int);
    void setAno(int);

    int getDia(){
        return dia;
    }
    int getMes(){
        return mes;
    }
    int getAno(){
        return ano;
        }

    void avancarDia(int dia, int mes, int ano);
};
#endif // DATA_H;
