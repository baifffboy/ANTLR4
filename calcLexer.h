
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  calcLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, INT = 3, FLOAT = 4, SEP = 5, WS = 6, HZ = 7, MUL = 8, 
    ADD = 9, SUB = 10
  };

  explicit calcLexer(antlr4::CharStream *input);

  ~calcLexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

