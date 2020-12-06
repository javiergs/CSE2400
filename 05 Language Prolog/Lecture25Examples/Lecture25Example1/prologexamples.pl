father(bill, joe) :- son(joe, bill).

exam_easy.
arizona_hot.
july_4_is_independence_day.

likes(john, mary).
eats(fred, oranges).
age(john, 32).
age(ian, 2).

mortal(X) :- human(X).
human(socrates).

% facts
instructor(john, cs365).
instructor(mary, cs311).
instructor(paul, cs446).
enrolled(joseph, cs311).
enrolled(joseph, cs365).
enrolled(joseph, cs446).
enrolled(danielle, cs365).
enrolled(danielle, cs446).

% rules
teaches(P, S) :- instructor(P, C), enrolled(S, C).
classmates(S1, S2) :- enrolled(S1, C), enrolled(S2, C).

% an additional rule
classmates(S1, S2, C) :- enrolled(S1, C), enrolled(S2, C).