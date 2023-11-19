add(X,Y):-
Z is X+Y,
write(Z).

calculate:- X is 100+200,write('100+200 is '),write(X),nl,
Y is 200-100, write('200-100 is '),write(Y).

addition:- write('enter the value for X'),nl,read(X),write(X).