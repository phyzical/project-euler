defmodule Problem1 do
  def solve(startNum) do
    is3Or5(startNum,0)
  end

  def is3Or5(num,total) when num < 3 do
    IO.puts("Your Total is " <>  Integer.to_string(total))
  end

  def is3Or5(num,total) when num >= 3 and (rem(num,3) == 0 or rem(num,5) == 0) do
    is3Or5(num-1,total + num)
  end

  def is3Or5(num,total) do
    is3Or5(num-1,total)
  end
end

Problem1.solve(999)