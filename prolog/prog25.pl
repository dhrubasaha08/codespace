%add a element to list with no duplicates

add(X,[],[X]).
add(X,[H|T],[X,H|T]):-X<H,!.
add(X,[H|T],[H|T1]):-add(X,T,T1).
