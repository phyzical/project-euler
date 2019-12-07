defmodule Problem5 do
  def solve() do
    smallestMultiple(20)
  end

  def smallestMultiple(n) when rem(n,1) == 0 and  rem(n,2) == 0 and  rem(n,3) == 0 and  rem(n,4) == 0 and  rem(n,5) == 0 and  rem(n,6) == 0 and  rem(n,7) == 0 and  rem(n,8) == 0 and rem(n,9) == 0 and  rem(n,10) == 0 and  rem(n,11) == 0 and  rem(n,12) == 0 and  rem(n,13) == 0 and  rem(n,14) == 0 and  rem(n,15) == 0 and  rem(n,16) == 0 and  rem(n,17) == 0 and  rem(n,18) == 0 and  rem(n,19) == 0 and  rem(n,20) == 0 do
    IO.puts n
  end

  def smallestMultiple(n) do
    smallestMultiple(n+1)
  end
end

Problem5.solve()