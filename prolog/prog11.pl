#find the reverse of a number 
last(X,[X]).
last(X,[_|L]) :- lastt(X,L).