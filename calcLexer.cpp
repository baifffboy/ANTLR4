
// Generated from calc.g4 by ANTLR 4.13.2


#include "calcLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CalcLexerStaticData final {
  CalcLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalcLexerStaticData(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData(CalcLexerStaticData&&) = delete;
  CalcLexerStaticData& operator=(const CalcLexerStaticData&) = delete;
  CalcLexerStaticData& operator=(CalcLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calclexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalcLexerStaticData> calclexerLexerStaticData = nullptr;

void calclexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calclexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(calclexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalcLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "INT", "FLOAT", "SEP", "WS", "HZ", "MUL", "ADD", "SUB"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "", "';'", "", "'^'", "'*'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "INT", "FLOAT", "SEP", "WS", "HZ", "MUL", "ADD", "SUB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,10,58,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,1,0,1,0,1,1,1,1,1,2,4,2,27,8,2,11,2,12,2,28,
  	1,3,4,3,32,8,3,11,3,12,3,33,1,3,1,3,4,3,38,8,3,11,3,12,3,39,1,4,1,4,1,
  	5,4,5,45,8,5,11,5,12,5,46,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,0,0,
  	10,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,1,0,2,1,0,48,57,3,0,
  	9,10,13,13,32,32,61,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,
  	9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,
  	0,0,0,1,21,1,0,0,0,3,23,1,0,0,0,5,26,1,0,0,0,7,31,1,0,0,0,9,41,1,0,0,
  	0,11,44,1,0,0,0,13,50,1,0,0,0,15,52,1,0,0,0,17,54,1,0,0,0,19,56,1,0,0,
  	0,21,22,5,40,0,0,22,2,1,0,0,0,23,24,5,41,0,0,24,4,1,0,0,0,25,27,7,0,0,
  	0,26,25,1,0,0,0,27,28,1,0,0,0,28,26,1,0,0,0,28,29,1,0,0,0,29,6,1,0,0,
  	0,30,32,7,0,0,0,31,30,1,0,0,0,32,33,1,0,0,0,33,31,1,0,0,0,33,34,1,0,0,
  	0,34,35,1,0,0,0,35,37,5,44,0,0,36,38,7,0,0,0,37,36,1,0,0,0,38,39,1,0,
  	0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,8,1,0,0,0,41,42,5,59,0,0,42,10,1,0,
  	0,0,43,45,7,1,0,0,44,43,1,0,0,0,45,46,1,0,0,0,46,44,1,0,0,0,46,47,1,0,
  	0,0,47,48,1,0,0,0,48,49,6,5,0,0,49,12,1,0,0,0,50,51,5,94,0,0,51,14,1,
  	0,0,0,52,53,5,42,0,0,53,16,1,0,0,0,54,55,5,43,0,0,55,18,1,0,0,0,56,57,
  	5,45,0,0,57,20,1,0,0,0,5,0,28,33,39,46,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calclexerLexerStaticData = std::move(staticData);
}

}

calcLexer::calcLexer(CharStream *input) : Lexer(input) {
  calcLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *calclexerLexerStaticData->atn, calclexerLexerStaticData->decisionToDFA, calclexerLexerStaticData->sharedContextCache);
}

calcLexer::~calcLexer() {
  delete _interpreter;
}

std::string calcLexer::getGrammarFileName() const {
  return "calc.g4";
}

const std::vector<std::string>& calcLexer::getRuleNames() const {
  return calclexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& calcLexer::getChannelNames() const {
  return calclexerLexerStaticData->channelNames;
}

const std::vector<std::string>& calcLexer::getModeNames() const {
  return calclexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& calcLexer::getVocabulary() const {
  return calclexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calcLexer::getSerializedATN() const {
  return calclexerLexerStaticData->serializedATN;
}

const atn::ATN& calcLexer::getATN() const {
  return *calclexerLexerStaticData->atn;
}




void calcLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calclexerLexerInitialize();
#else
  ::antlr4::internal::call_once(calclexerLexerOnceFlag, calclexerLexerInitialize);
#endif
}
