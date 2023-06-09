#ifndef _TF_ORDER_HPP

#include "../TechFlow.hpp"
#include <iostream>
#include <functional>

class TF_Order
{
    /// Private variables:
    TF_Customer customer;
    TF_Vector<TF_Product> products;
    TF_String date;

public:
    /// Constructors:
    TF_Order();
    TF_Order(const TF_Customer& customer, TF_Vector<TF_Product> products, TF_String date);
    TF_Order(TF_Order &other);

    /// Destructor:
    ~TF_Order();

    /// Operators:
    friend std::ostream &operator<<(std::ostream &out, const TF_Order &object);

    /// Methods:
    double orderTotal();
    double addCharge(double charge);
    double verifyBudget(double value, const std::function<void()> &overBudgetCallback, const std::function<void(double)> &remainingBudgetCallback);
};

#endif