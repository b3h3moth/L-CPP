#include <iostream>
using namespace std;

#include "Budget.h"

double Budget::company_budget = 0;

void Budget::mainOffice(double mo)
{
    company_budget += mo;
}
