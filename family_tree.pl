# Create a family tree knowledge base and find X is parent to Y or not 
female(pam).
female(liz).
female(pat).
female(ann).

male(jim).
male(bob).
male(tom).
male(peter).

parent(pam,bob).
parent(tom,bob).
parent(tom,liz).
parent(bob,ann).
parent(bob,pat).
parent(pat,jim).
parent(bob,peter).
parent(peter,jim).

mother(X,Y):- parent(X,Y), female(X).

father(X,Y):- parent(X,Y), male(X).

haschild(X):- parent(X,_).

sister(X,Y):- parent(Z,X, parent(Z,Y)),
female(X), X\==Y.