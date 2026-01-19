# Project 01: Single-Layer Perceptron (AND Gate)

## 📌 Overview / 项目概述
This sub-project implements a basic **Single-Layer Perceptron** from scratch in C++. The goal is to train a simple neuron to learn the **AND** logic gate, demonstrating the fundamental concepts of weight adjustment and linear classification.
本项目从零开始实现了一个基础的**单层感知器**。目标是训练一个简单的神经元学习 **AND（与门）** 逻辑，展示权重调整和线性分类的基本概念。

---

## 🧠 Mathematical Model / 数学模型
The perceptron calculates a weighted sum of inputs and applies a step activation function:
感知器计算输入的加权和，并应用阶跃激活函数：

$$f(x) = \begin{cases} 1 & \text{if } \sum w_i x_i + b > 0 \\ 0 & \text{otherwise} \end{cases}$$

- **Forward Propagation**: Dot product of input and weight vectors.
- **Learning Rule**: $w_i = w_i + \Delta w$, where $\Delta w = \eta \cdot (target - prediction) \cdot x_i$.

---

## 💻 Implementation Details / 实现细节
To follow professional C++ engineering standards, the project is structured into three parts:
为了遵循专业的 C++ 工程标准，项目结构分为三个部分：

1. **`Perceptron.h`**: Class declaration (Interface). / 类声明（接口）。
2. **`Perceptron.cpp`**: Mathematical logic and training implementation. / 数学逻辑与训练实现。
3. **`main.cpp`**: Dataset preparation and training execution. / 数据集准备与训练执行。

---

## 📊 Results / 运行结果
After 50 epochs of training, the model achieves 100% accuracy on the AND gate:
经过 50 轮训练后，模型在 AND 逻辑门上达到了 100% 的准确率：

- Input (1, 1) -> Output: **1** (Correct)
- Input (1, 0) -> Output: **0** (Correct)

---

## 🛠️ How to Run / 如何运行
1. Open `AI-Learning-CPP.sln` in Visual Studio 2022.
2. Set `01_Perceptron` as the Startup Project.
3. Press `Ctrl + F5` to run.