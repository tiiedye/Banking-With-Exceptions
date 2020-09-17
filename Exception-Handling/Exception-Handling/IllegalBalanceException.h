#ifndef __ILLEGAL_BALANCE_EXCEPTION_H__
#define __ILLEGAL_BALANCE_EXCEPTION_H__

#include <exception>

class IllegalBalanceException : public std::exception {
public:
    IllegalBalanceException() noexcept = default;
    ~IllegalBalanceException() = default;
    virtual const char* what() const noexcept {
        return "Illegal Balance exception, cannot have a negative Balacnce";
    }
};

#endif // __ILLEGAL_BALANCE_EXCEPTION_H__