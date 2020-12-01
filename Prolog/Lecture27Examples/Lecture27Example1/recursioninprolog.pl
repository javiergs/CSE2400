% this is a fact
factorial(0, 1).
% this is a rule
% the factorial of F is N*F1
% if N>0 and
% N1 is N-1 and
% the factorial of N1 is F1
factorial(N, F) :-
    N>0,
    N1 is N - 1,
    factorial(N1, F1),
    F is N * F1.

fib(0, 0).
fib(1, 1).

fib(X, Y) :- X > 1,
    X2 is X - 2, fib(X2, Y2),
    X1 is X - 1, fib(X1, Y1),
    Y is Y1 + Y2.