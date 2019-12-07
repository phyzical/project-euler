defmodule Problem3 do

  def solve(n) do
    {a,_} = Integer.parse(Float.to_string(:math.ceil(:math.sqrt(n))))
    largestPrime(a,a*a-n,n)
  end

  def largestPrime() do
    IO.puts("game over")
  end

  def largestPrime(a,b2,n)   do
    t = a + :math.sqrt(b2)
    IO.inspect(t)
    if t > n do
        largestPrime()
    end
    if isPerfectSquare?( b2) do
      answer(a + :math.sqrt(b2))
    else
      largestPrime(a+1,(a+1)*(a+1)-n,n)
    end
  end

  def isPerfectSquare?(b2) do
    is_integer(:math.sqrt(b2))
  end

   def answer(a) do
    IO.puts a
   end

#  def largestPrime(a,b2_) do
#    IO.puts a + :math.sqrt(b2)
#  end
end

Problem3.solve(600851475143)