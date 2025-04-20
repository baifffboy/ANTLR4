
// Generated from calc.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "calcVisitor.h"


/**
 * This class provides an empty implementation of calcVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  calcBaseVisitor : public calcVisitor {
public:

  virtual std::any visitOneLineProg(calcParser::OneLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultLineProg(calcParser::MultLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(calcParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitHz(calcParser::HzContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddsub(calcParser::AddsubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(calcParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloat(calcParser::FloatContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(calcParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

