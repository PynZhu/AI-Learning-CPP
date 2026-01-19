#include <iostream>
#include "Perceptron.h"

int main() {
    Perceptron p(2);

    // ÑµÁ·Êý¾Ý (AND ÃÅ)
    struct Data { std::vector<double> in; int out; };
    std::vector<Data> dataset = {
        {{0,0}, 0}, {{0,1}, 0}, {{1,0}, 0}, {{1,1}, 1}
    };

    std::cout << "--- AI Training Start ---" << std::endl;
    for (int i = 0; i < 50; ++i) {
        for (auto& d : dataset) p.Train(d.in, d.out);
    }

    std::cout << "Result (1,1): " << p.Predict({ 1, 1 }) << std::endl;
    std::cout << "Result (1,0): " << p.Predict({ 1, 0 }) << std::endl;

    return 0;
}