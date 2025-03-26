
#ifndef CALC_H
#define CALC_H

class Calc
{
    public:
    Calc(); //constructor
    ~Calc(); //destructor
    void welcome();
    double add(double, double);
    double subtract(double, double);
    double multiply(double, double);
    double divide(double, double);
    void user_inputs(double&, double&);
};

#endif