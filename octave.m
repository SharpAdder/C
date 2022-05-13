% SIRUL LUI FIBONACCI

% creeaza o matrice cu 1linie 10 col cu val 1
% [ 1 1 1 1 1 1 1 1 1 1 ] -> 10 coloane
fib = ones(1, 10);

i = 2;

do  
  i++;
  fib(i) = fib (i-1) + fib (i-2);
until (i == 10)

fib
