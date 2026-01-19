#pragma once  // 必须有，防止重复包含
#include <vector> // 必须有，否则报错“没有成员 vector”

class Perceptron {
public:
    explicit Perceptron(size_t input_count);
    int Predict(const std::vector<double>& inputs) const;
    void Train(const std::vector<double>& inputs, int target);

private:
    std::vector<double> weights_;
    double bias_;
    const double learning_rate_ = 0.1;
};