defmodule Problem7 do
  def solve(n) do
    findPrime(n,3,[2])
  end

  def findPrime(n,i,primes) when Kernel.length(primes) < n do
    if isNewPrime(n,primes,i,0) do
      addPrime(n,i,primes)
    else
      findPrime(n,i+1,primes ++ [i])
    end
  end

  def findPrime(__,_,primes) do
    [answer | _] = Enum.reverse(primes)
    IO.inspect answer
  end

  def addPrime(n,i,primes) do
    findPrime(n,i+1,primes ++ [i])
  end

  def isNewPrime(n,primes,i,x) when x < Kernel.length(primes) do
    [temp |_ ] = Tuple.to_list(List.pop_at(primes,x))
#    IO.inspect(temp)
#        IO.inspect(i)

    if rem(i,temp) == 0 do
        findPrime(n,i+1,primes)
    else
        isNewPrime(n,primes,i,x+1)
    end
  end

  def isNewPrime(_,_,_,_) do
    true
  end
end

Problem7.solve(6)