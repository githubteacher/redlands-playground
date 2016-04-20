#include <iostream>
#include <vector>

template <typename T>
class Stack {
public:
    T& top() {
        m_data.back();
    }
    void push(const T& t) {
        m_data.push_back(t);
    }
    void push(T&& t) {
        m_data.push_back(std::move(t));
    }
    void pop() {
        m_data.pop_back();
    }
    bool empty() {
        return m_data.empty();
    }
private:
    std::vector<T> m_data;
};

int main() {
    Stack<std::string> stack;
    std::string str{"world"};
    stack.push(str);
    stack.push("hello");

    while (!stack.empty()) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }

    return 0;
}

