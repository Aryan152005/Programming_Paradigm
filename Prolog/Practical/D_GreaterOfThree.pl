max_of_three :-
    write('Enter first number: '), read(X), nl,
    write('Enter second number: '), read(Y), nl,
    write('Enter third number: '), read(Z), nl,
    (   X > Y, X > Z, MAX = X;
        Y > X, Y > Z, MAX = Y;
        Z > X, Z > Y, MAX = Z
    ),
    write('Greatest among '), write(X), write(','), write(Y), write(' and '), write(Z), write(' is '), write(MAX), nl.
