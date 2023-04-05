%write a relation efface(X,Y,Z) which deletes the first occurrence of X in the list Y to obtain the list Z

efface(X, [X|T], T).
efface(X, [H|T], [H|Z]) :- efface(X, T, Z).
