% Facts: Define genders
male(john).
female(lisa).
male(bob).
female(ann).
male(jim).

% Facts: Define parent relationships
parent(john, lisa).
parent(john, bob).
parent(lisa, ann).
parent(bob, jim).

% Rules: Define sibling relationship
sibling(X, Y) :-
    parent(Z, X),
    parent(Z, Y),
    X \= Y.

% Rules: Define grandfather relationship
grandfather(X, Y) :-
    parent(X, Z),
    parent(Z, Y),
    male(X).
