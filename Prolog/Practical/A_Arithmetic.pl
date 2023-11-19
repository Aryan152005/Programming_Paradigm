#  A. Write a progoram in Prolog to perfrom arithmetic operations using two numbers , if the numbers are given as input from the user. 

input:- write('Enter X'),nl,
read(X),
write('Enter Y'),nl,
read(Y),nl,
Add is X + Y,
write(X), write(' + '), write(Y), write(' = '), write(Add),nl,
Sub is X - Y,
write(X), write(' - '), write(Y), write(' = '), write(Sub),nl,
Mul is X * Y,
write(X), write(' * '), write(Y), write(' = '), write(Mul),nl,
Div is X // Y,
write(X), write(' // '), write(Y), write(' = '), write(Div),nl,
Mod is X mod Y,
write(X), write(' mod '), write(Y), write(' = '), write(Mod).

