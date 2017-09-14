#include "Data.h"
#include <iostream>

using namespace std;

Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);

    if(m == 2){
		if(d <= 28){
			setDia(d);
		}
	}
    if(m == 4 || m == 6 || m == 9 || m == 11){
        if(d <= 30){
            setDia(d);
			}
    }
    if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){
        if(d <= 31){
            setDia(d);
			}
    }
	}

    void Data::setDia (int d){
        if(d>0 && d<13){
            dia = d;
        } else {
            cout << "Dia invalido" << endl;
        }
    }

    void Data::setMes (int m){
        if(m>0 && m<13){
            mes = m;
        } else {
            cout << "Mes invalido" << endl;
        }
    }

    void Data::setAno (int a){
        if(a>0){
            ano = a;
        }
    }

    void Data::avancarDia(int dia, int mes, int ano){
        int d;
        int m;
        int a;

        d = getDia();
        m = getMes();
        a = getAno();

        if( m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 ){
            if(d == 31){
                setDia(1);
                setMes(m + 1);
            } else if(d <= 30){
                setDia(d + 1);
            }
        }

        if( m == 2){
             if(d == 28){
                setDia(1);
                setMes(m + 1);
            } else if(d <= 27){
            setDia(d + 1);
        }
        }

        if(m == 4 || m == 6 || m == 9 || m == 11){
            if(d == 30){
                setDia(1);
                setMes(m + 1);
            } else if(d <= 29){
                setDia(d + 1);
            }
        }

        if(m == 12){
            if(d == 31){
                setDia(1);
                setMes(1);
                setAno(a + 1);
                cout << "Feliz ano novo!! :)" << endl;
            } else if( d <= 30){
                setDia(d + 1);
            }
        }
    }


