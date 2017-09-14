#include <iostream>
#include "Data.h"

using namespace std;

int main()
{
    	Data d1 = Data(1,1,1970);
    	Data d2 = Data(12,9,2017);

	d1.setDia(12);
	d1.setMes(12);
	d1.setAno(2012);

	d2.setDia(13);
	d2.setMes(12);
	d2.setAno(2013);


	d1.avancarDia(d1.getDia(), d1.getMes(), d1.getAno());
	d2.avancarDia(d2.getDia(), d2.getMes(), d2.getAno());

    return 0;

}
