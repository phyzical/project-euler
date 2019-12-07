defmodule Problem2 do
  def solve(max) do
    startSeq(max)
  end

  def startSeq(max) do
    nextSeq(max,1,1,0)
  end

  def nextSeq(max,current,next,total) when current <= max and rem(current + next,2) == 0 do
    nextSeq(max,next, current + next, total + current + next)
  end

  def nextSeq(max,current,next,total) when current <= max do
    nextSeq(max,next, current + next, total)
  end

  def nextSeq(_,_,_,total) do
    IO.puts total
  end
end

Problem2.solve(4000000)