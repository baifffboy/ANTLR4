#pragma once

#include "antlr4-runtime.h"
#include "calcBaseVisitor.h"

#include <iostream>
#include <vector>

class CalcUserVisitor : public calcBaseVisitor {
public:

	std::vector<double> res;

	virtual std::any visitOneLineProg(calcParser::OneLineProgContext* ctx) override {
		std::cout << "OneLineProg" << std::endl;
		double val = std::any_cast<double>(visit(ctx->expr()));
		res.push_back(val);
		return val;
	}

	//virtual std::any visitMultLineProg(calcParser::MultLineProgContext* ctx) override {
	//	std::cout << "MultLineProg" << std::endl;
	//	visit(ctx->prog());
	//	int val = std::any_cast<int>(visit(ctx->expr()));
	//	res.push_back(val);
	//	return val;
	//}

	virtual std::any visitMultLineProg(calcParser::MultLineProgContext* ctx) override {
		std::cout << "MultLineProg" << std::endl;
		std::vector < calcParser::ProgContext* > arr_p = ctx->prog();
		for each(calcParser::ProgContext * p in arr_p) { visit(p); }
		return &res;
	}

	virtual std::any visitParens(calcParser::ParensContext* ctx) override {
		std::cout << "Parens" << std::endl;
		return visit(ctx->expr());
	}

	virtual std::any visitAddsub(calcParser::AddsubContext* ctx) override {
		double left = std::any_cast<double> (visit(ctx->expr(0)));
		double right = std::any_cast<double>(visit(ctx->expr(1)));
		std::cout << " T <- " << left << ctx->op->getText() << right << std::endl;
		if (ctx->op->getType() == calcParser::ADD) { return left + right; }
		else return left - right;
	}

	virtual std::any visitInt(calcParser::IntContext* ctx) override {
		return (std::stod(ctx->INT()->getText()));
	}

	virtual std::any visitFloat(calcParser::FloatContext* ctx) override {
		return (std::stod(ctx->FLOAT()->getText()));
	}

	virtual std::any visitMulDiv(calcParser::MulDivContext* ctx) override {
		double left = std::any_cast<double>(visit(ctx->expr(0)));
		double right = std::any_cast<double>(visit(ctx->expr(1)));
		std::cout << " T <- " << left << ctx->getText() << right << std::endl;
		return left * right; 
	}

	virtual std::any visitHz(calcParser::HzContext* ctx) override {
		double left = std::any_cast<double>(visit(ctx->expr(0)));
		double right = std::any_cast<double>(visit(ctx->expr(1)));
		std::cout << " T <- " << left << ctx->getText() << right << std::endl;
		return std::pow(left, right);
	}
};