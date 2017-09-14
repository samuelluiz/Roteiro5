#include <iostream>
#include "Invoice.h"
#include <string>

using namespace std;

int main(){
    Invoice p1 = Invoice(2, "roupa", 2, 25.0);
    Invoice p2 = Invoice(3, "sapato", 3, 50.0);

    p1.setNum(3);
    p1.setDesc("sapato");
    p1.setQuant(3);
    p1.setPrec(50.0);

    p2.setNum(4);
    p2.setDesc("bolsa");
    p2.setQuant(4);
    p2.setPrec(100.0);

    p1.getInvoiceAmount(3, 50.0);
    p2.getInvoiceAmount(4, 100.0);

return 0;
}
