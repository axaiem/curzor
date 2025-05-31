#include "AllOperations/Operation.hpp"
#include <memory>
#include <stack>
#include <vector>
#ifndef TEXTBUFFER_HPP
#define TEXTBUFFER_HPP

class TextBuffer {
private:
  std::stack<std::unique_ptr<Operation>> m_recentOps;

public:
  virtual void insert(int idx, std::string text) = 0;
  virtual void remove(int idx, int length) = 0;

  void updateOps(std::unique_ptr<Operation> ops) { m_recentOps.push(ops); }

  void undo() {
    std::unique_ptr<Operation> tp = std::move(m_recentOps.top());
    m_recentOps.pop();
    tp->undo();
  }
};

#endif // TEXTBUFFER_HPP