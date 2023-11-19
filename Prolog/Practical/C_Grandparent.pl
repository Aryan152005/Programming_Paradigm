% Facts: Define genders
female(pam).
female(liz).
female(pat).
female(ann).
male(jim).
male(bob).
male(tom).
male(peter).

% Facts: Define parent relationships
parent(pam, bob).
parent(tom, bob).
parent(pam, liz).
parent(bob, ann).
parent(bob, pat).
parent(pat, jim).
parent(bob, peter).
parent(peter, jim).

% Rules: Define grandparent relationship
grandparent(X, Y) :- parent(X, Z), parent(Z, Y).
