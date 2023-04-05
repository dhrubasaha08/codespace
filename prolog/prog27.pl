%find the maximum of a list


maxlist([X],X).
maxlist([X|[Y|Rest]],max):-maxlist([Y|Rest],MaxRest),max(MaxRest,X,Max).
sumlist([],0).
sumlist([X|Rest],Sum):-sumlist(Rest,SumRest),Sum is SumRest+X.