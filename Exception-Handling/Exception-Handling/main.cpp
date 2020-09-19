#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larrys_account;
    try {
        std::cout << "==============================================" << std::endl;
        std::cout << "\nMaking Savings Account for Larry" << std::endl;
        larrys_account = std::make_unique<Savings_Account>("Larry", -2000.0);
        std::cout << *larrys_account << std::endl;
    } catch (const IllegalBalanceException& ex) {
        std::cerr << ex.what() << std::endl;
    }

    try {
        std::cout << "\n==============================================" << std::endl;
        std::cout << "\nMaking Savings Account for Moe" << std::endl;
        moes_account = std::make_unique<Savings_Account>("Moe", 1000.0);
        std::cout << *moes_account << std::endl;

        std::cout << "\nMaking withdrawals from Moe's Savings Account" << std::endl;
        std::cout << "\nWithdrawing $500" << std::endl;
        moes_account->withdraw(500.0);
        std::cout << *moes_account << std::endl;
        std::cout << "\nWithdrawing $1000" << std::endl;
        moes_account->withdraw(1000.0);
        std::cout << *moes_account << std::endl;

    } catch (const IllegalBalanceException& ex) {
        std::cerr << ex.what() << std::endl;
    } catch (const InsufficientFundsException& ex) {
        std::cerr << ex.what() << std::endl;
    }
    std::cout << "\n==============================================" << std::endl;
    std::cout << "\nProgram completed successfully" << std::endl;
    return 0;
}