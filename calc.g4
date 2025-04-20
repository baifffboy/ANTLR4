grammar calc;
INT: [0-9]+;
FLOAT : [0-9]+ ',' [0-9]+ ;
SEP: ';' ;
WS : [ \t\n\r]+ -> skip;
HZ: '^';
MUL: '*';
ADD: '+';
SUB: '-';
prog: expr                    # OneLineProg
    | prog SEP prog EOF?      # MultLineProg
    ;
expr: expr HZ expr            # hz
    | expr MUL expr            # MulDiv
    | expr op=(ADD | SUB) expr # Addsub
    | INT                       # int
    | FLOAT                     # float
    | '(' expr ')'              # parens
    ;