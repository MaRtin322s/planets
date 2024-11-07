#include <iostream>
using namespace std;

int main() {
    string product, city;
    double quantity;

    cin >> product;
    cin >> city;
    cin >> quantity;

    double price = 0.0;

    if (city == "Sofia") {
        if (product == "coffee") price = 0.50;
        else if (product == "water") price = 0.80;
        else if (product == "beer") price = 1.20;
        else if (product == "sweets") price = 1.45;
        else if (product == "peanuts") price = 1.60;
    } else if (city == "Plovdiv") {
        if (product == "coffee") price = 0.40;
        else if (product == "water") price = 0.70;
        else if (product == "beer") price = 1.15;
        else if (product == "sweets") price = 1.30;
        else if (product == "peanuts") price = 1.50;
    } else if (city == "Varna") {
        if (product == "coffee") price = 0.45;
        else if (product == "water") price = 0.70;
        else if (product == "beer") price = 1.10;
        else if (product == "sweets") price = 1.35;
        else if (product == "peanuts") price = 1.55;
    }

    if (price > 0) {
        double totalCost = quantity * price;
        std::cout << "Total cost: " << totalCost << std::endl;
    } else {
        std::cout << "Invalid product or city!" << std::endl;
    }

    return 0;
}

