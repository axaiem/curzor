#include "AddTextPieceTable.hpp"
#include "DllPieces.hpp" // defines data sructure of peice table
#include "TextBuffers/TextBuffer.hpp"

#ifndef PIECETABLE_HPP
#define PIECETABLE_HPP

class PieceTable : public TextBuffer {
public:
  DllPieces m_tablePieces;

private:
  std::string m_original;
  std::string m_changes;

public:
  PieceTable(std::string file) : m_original(file), m_tablePieces(m_original) {}

  void insert(int idx, std::string text) override {
    std::unique_ptr<Operation> addition = std::make_unique<AddTextPieceTable>(
        m_tablePieces, idx, text, m_changes);
    addition->run();
    updateOps(std::move(addition));
  }

  void remove(int idx, int length) override {
    std::unique_ptr<Operation> deletion =
        std::make_unique<DeleteTextPieceTable>(m_tablePieces, idx, length);
    deletion->run();
    updateOps(std::move(deletion));
  }
};

#endif