#include "Perceptron.h"
#include <numeric> // 必须包含这个才能使用 std::inner_product

Perceptron::Perceptron(size_t input_count)
    : weights_(input_count, 0.0), bias_(0.0) {}

int Perceptron::Predict(const std::vector<double>& inputs) const {
    double sum = bias_;
    // 大厂规范：利用标准库算法计算点积
    sum += std::inner_product(inputs.begin(), inputs.end(), weights_.begin(), 0.0);
    return (sum > 0) ? 1 : 0;
}

void Perceptron::Train(const std::vector<double>& inputs, int target) {
    int prediction = Predict(inputs);
    int error = target - prediction;

    if (error != 0) {
        for (size_t i = 0; i < weights_.size(); ++i) {
            weights_[i] += error * learning_rate_ * inputs[i];
        }
        bias_ += error * learning_rate_;
    }
}