![made-with-VisualStudio](https://img.shields.io/badge/Made%20With-Visual%20Studio-ba88f3)  ![Using-CPlusPlus](https://img.shields.io/badge/Using-C%2B%2B-ff69b4)

# Banking With Exception Handling
Building upon my previous banking apps, adding custom exception handling.

<img src="./assets/screenshot.png"
     alt="Img"
     style="margin-right: 10px; height: 400px;" />

Simple Banking App -- https://github.com/tiiedye/Simple-Bank-App

Polymorphic Banking App -- https://github.com/tiiedye/Polymorphic-Bank-App

### Instructions
For this challenge we want to integrate our own user-defined exception classes into the Account class
hierarchy.

The account classes are provided for you.
Also, the IllegalBalanceException.h file contains the declaration for the IllegalBalanceException class.

What I would like you to do is:
1. Derive IllegalBalanceException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown from the Account class constructor if an account object is created with a negative 
   balance.
   
2. Derive InsufficentFundsException from std::exception and implement the what() method to provide an exception message.
   This exception object should be thrown if a withdraw results in a negative balance.
   You should throw this exception object from the Account withdraw method.
   
That's it - good luck!
Test your code in the main driver.

Have fun and experiment!