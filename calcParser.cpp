
// Generated from calc.g4 by ANTLR 4.13.2


#include "calcVisitor.h"

#include "calcParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalcParserStaticData final {
  CalcParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcParserStaticData(const CalcParserStaticData&) = delete;
  CalcParserStaticData(CalcParserStaticData&&) = delete;
  CalcParserStaticData& operator=(const CalcParserStaticData&) = delete;
  CalcParserStaticData& operator=(CalcParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calcParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcParserStaticData> calcParserStaticData = nullptr;

void calcParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calcParserStaticData != nullptr) {
    return;
  }
#else
  assert(calcParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcParserStaticData>(
    std::vector<std::string>{
      "prog", "expr"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "", "';'", "", "'^'", "'*'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "INT", "FLOAT", "SEP", "WS", "HZ", "MUL", "ADD", "SUB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,10,42,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,12,8,0,5,0,
  	14,8,0,10,0,12,0,17,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,26,8,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,37,8,1,10,1,12,1,40,9,1,1,1,0,2,0,2,
  	2,0,2,0,1,1,0,9,10,46,0,4,1,0,0,0,2,25,1,0,0,0,4,5,6,0,-1,0,5,6,3,2,1,
  	0,6,15,1,0,0,0,7,8,10,1,0,0,8,9,5,5,0,0,9,11,3,0,0,0,10,12,5,0,0,1,11,
  	10,1,0,0,0,11,12,1,0,0,0,12,14,1,0,0,0,13,7,1,0,0,0,14,17,1,0,0,0,15,
  	13,1,0,0,0,15,16,1,0,0,0,16,1,1,0,0,0,17,15,1,0,0,0,18,19,6,1,-1,0,19,
  	26,5,3,0,0,20,26,5,4,0,0,21,22,5,1,0,0,22,23,3,2,1,0,23,24,5,2,0,0,24,
  	26,1,0,0,0,25,18,1,0,0,0,25,20,1,0,0,0,25,21,1,0,0,0,26,38,1,0,0,0,27,
  	28,10,6,0,0,28,29,5,7,0,0,29,37,3,2,1,7,30,31,10,5,0,0,31,32,5,8,0,0,
  	32,37,3,2,1,6,33,34,10,4,0,0,34,35,7,0,0,0,35,37,3,2,1,5,36,27,1,0,0,
  	0,36,30,1,0,0,0,36,33,1,0,0,0,37,40,1,0,0,0,38,36,1,0,0,0,38,39,1,0,0,
  	0,39,3,1,0,0,0,40,38,1,0,0,0,5,11,15,25,36,38
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calcParserStaticData = std::move(staticData);
}

}

calcParser::calcParser(TokenStream *input) : calcParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calcParser::calcParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calcParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calcParserStaticData->atn, calcParserStaticData->decisionToDFA, calcParserStaticData->sharedContextCache, options);
}

calcParser::~calcParser() {
  delete _interpreter;
}

const atn::ATN& calcParser::getATN() const {
  return *calcParserStaticData->atn;
}

std::string calcParser::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcParser::getRuleNames() const {
  return calcParserStaticData->ruleNames;
}

const dfa::Vocabulary& calcParser::getVocabulary() const {
  return calcParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcParser::getSerializedATN() const {
  return calcParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

calcParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::ProgContext::getRuleIndex() const {
  return calcParser::RuleProg;
}

void calcParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- OneLineProgContext ------------------------------------------------------------------

calcParser::ExprContext* calcParser::OneLineProgContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

calcParser::OneLineProgContext::OneLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any calcParser::OneLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitOneLineProg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultLineProgContext ------------------------------------------------------------------

std::vector<calcParser::ProgContext *> calcParser::MultLineProgContext::prog() {
  return getRuleContexts<calcParser::ProgContext>();
}

calcParser::ProgContext* calcParser::MultLineProgContext::prog(size_t i) {
  return getRuleContext<calcParser::ProgContext>(i);
}

tree::TerminalNode* calcParser::MultLineProgContext::SEP() {
  return getToken(calcParser::SEP, 0);
}

tree::TerminalNode* calcParser::MultLineProgContext::EOF() {
  return getToken(calcParser::EOF, 0);
}

calcParser::MultLineProgContext::MultLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any calcParser::MultLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitMultLineProg(this);
  else
    return visitor->visitChildren(this);
}

calcParser::ProgContext* calcParser::prog() {
   return prog(0);
}

calcParser::ProgContext* calcParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  calcParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, calcParser::RuleProg, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(5);
    expr(0);
    _ctx->stop = _input->LT(-1);
    setState(15);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultLineProgContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(7);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(8);
        match(calcParser::SEP);
        setState(9);
        prog(0);
        setState(11);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(10);
          match(calcParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(17);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

calcParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calcParser::ExprContext::getRuleIndex() const {
  return calcParser::RuleExpr;
}

void calcParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

calcParser::ExprContext* calcParser::ParensContext::expr() {
  return getRuleContext<calcParser::ExprContext>(0);
}

calcParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- HzContext ------------------------------------------------------------------

std::vector<calcParser::ExprContext *> calcParser::HzContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::HzContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::HzContext::HZ() {
  return getToken(calcParser::HZ, 0);
}

calcParser::HzContext::HzContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::HzContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitHz(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddsubContext ------------------------------------------------------------------

std::vector<calcParser::ExprContext *> calcParser::AddsubContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::AddsubContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::AddsubContext::ADD() {
  return getToken(calcParser::ADD, 0);
}

tree::TerminalNode* calcParser::AddsubContext::SUB() {
  return getToken(calcParser::SUB, 0);
}

calcParser::AddsubContext::AddsubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::AddsubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitAddsub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<calcParser::ExprContext *> calcParser::MulDivContext::expr() {
  return getRuleContexts<calcParser::ExprContext>();
}

calcParser::ExprContext* calcParser::MulDivContext::expr(size_t i) {
  return getRuleContext<calcParser::ExprContext>(i);
}

tree::TerminalNode* calcParser::MulDivContext::MUL() {
  return getToken(calcParser::MUL, 0);
}

calcParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::FloatContext::FLOAT() {
  return getToken(calcParser::FLOAT, 0);
}

calcParser::FloatContext::FloatContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::FloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* calcParser::IntContext::INT() {
  return getToken(calcParser::INT, 0);
}

calcParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any calcParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calcVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

calcParser::ExprContext* calcParser::expr() {
   return expr(0);
}

calcParser::ExprContext* calcParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calcParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  calcParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, calcParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calcParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(19);
        match(calcParser::INT);
        break;
      }

      case calcParser::FLOAT: {
        _localctx = _tracker.createInstance<FloatContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(20);
        match(calcParser::FLOAT);
        break;
      }

      case calcParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(21);
        match(calcParser::T__0);
        setState(22);
        expr(0);
        setState(23);
        match(calcParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(38);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(36);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<HzContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(27);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(28);
          match(calcParser::HZ);
          setState(29);
          expr(7);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(30);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(31);
          match(calcParser::MUL);
          setState(32);
          expr(6);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<AddsubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(34);
          antlrcpp::downCast<AddsubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == calcParser::ADD

          || _la == calcParser::SUB)) {
            antlrcpp::downCast<AddsubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(40);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool calcParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calcParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool calcParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void calcParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calcParserInitialize();
#else
  ::antlr4::internal::call_once(calcParserOnceFlag, calcParserInitialize);
#endif
}
