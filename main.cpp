#include <iostream>
#include "antlr4-runtime.h"
#include "calcUserVisitor.h"
#include "calcParser.h"
#include "calcLexer.h"
#include <string>
#include <sstream>

int main() {
	setlocale(LC_ALL, "RUS");
	std::cout << "¬ведите полином:\n¬ид полинома: x^ny^uz^q, где n, u, q - целые числа, z, y, q - дробные\n";
	std::string line;
	std::getline(std::cin, line);
	std::cout << "\n¬ведите точку дл€ вычислени€ полинома(числа представл€ют тип double): ѕример: 354.0 65.0 87.0 enter\n";
	double number;
	std::string r;
	std::getline(std::cin, r);
	std::stringstream ss(r);
	std::vector<float> y;
	while (ss >> number) {
		y.push_back(number);
	}
	std::string e;
	std::string myString;
	for (char i : line) {
		if ((120 <= i) && (i <= 122)) {
			if (i == 'x') {
				if (i != line[0] && e[e.size() - 1] != '+' && e[e.size() - 1] != '-' && e[e.size() - 1] != ' ') { e += '*'; } myString = std::to_string(y[0]); e += myString; continue;
			}
			if (i == 'y') {
				if (i != line[0] && e[e.size() - 1] != '+' && e[e.size() - 1] != '-' && e[e.size() - 1] != ' ') { e += '*'; } myString = std::to_string(y[1]); e += myString; continue;
			}
			if (i == 'z') {
				if (i != line[0] && e[e.size() - 1] != '+' && e[e.size() - 1] != '-' && e[e.size() - 1] != ' ') { e += '*'; } myString = std::to_string(y[2]); e += myString; continue;
			}
		}
		if (i == 94) {
			e += i;
			continue;
		}
		if (48 <= i <= 57) {
			e += i;
			continue;
		}
		if (i == ' ') {
			e += i;
			continue;
		}
		if (i == '+' || i == '-') {
			e += i;
			continue;
		}
		if (i == 40 || i == 41) {
			e += i;
			continue;
		}
	}
	e += ';';
	std::stringstream stream(e);
	antlr4::ANTLRInputStream input(stream);
	calcLexer lexer(&input);
	antlr4::CommonTokenStream tokens(&lexer);
	calcParser parser(&tokens);
	CalcUserVisitor visitor;
	visitor.visit(parser.prog());

	std::cout << "Result: " << std::endl;
	for each(float var in visitor.res) {
		std::cout << var << std::endl;
	}

	return 0;
}