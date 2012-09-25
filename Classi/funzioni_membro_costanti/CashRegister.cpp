#include "CashRegister.h"

void CashRegister::clear()
{
    item_count = 0;
    total_price = 0;
}

void CashRegister::add_item(double price)
{
    item_count++;
    total_price += price;
}

// Il qualificatore const va ripetuto nella funzione membro
double CashRegister::get_total() const
{
    return total_price;
}

int CashRegister::get_count() const
{
    return item_count;
}
