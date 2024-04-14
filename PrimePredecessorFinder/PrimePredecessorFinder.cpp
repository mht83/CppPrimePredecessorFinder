//////////////////////////////////////////////written by mht83/////////////////////////////////////////
#include <iostream>
#include <math.h>

bool check_prime(int num) {
    bool flag = 1;
    if (num % 2 != 0) {
        for (int i=3; i <= sqrt(num); i+=2)
        {
            if (num%i == 0)
            {
                flag = 0;
            }
        }
    }
    else { flag = 0; }
    return flag;
}

int main()
{
    int num,last_prime=2;
    std::cout << "enter a number\n";
    std::cin >> num;
    for (int i = 1; i <= num; i++) {
        if(check_prime(i))
        {
            last_prime = i;
        }
    }
    std::cout << "Largest prime smaller than given number is: " << last_prime;

}
