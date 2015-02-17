#ifndef BUDGET_H
#define BUDGET_H

class Budget
{
    public:
        Budget() { division_budget = 0; };

        void addBudget(double b) { division_budget += b; company_budget += b; };
        double getDivisionBudget() const { return division_budget; };
        double getCompanyBudget() const { return company_budget; };

    private:
        static double company_budget;
        double division_budget;
};

double Budget::company_budget = 0;

#endif
