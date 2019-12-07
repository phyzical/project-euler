defmodule Problem6 do
  def solve(max) do
    subtotals(max,0,0,1)
  end

  def subtotals(max,sumSqr,sqrSum,n) when n <= max do
    sumSqr = sumSqr + :math.pow(n,2)
    sqrSum = sqrSum + n
    subtotals(max,sumSqr,sqrSum,n+1)
  end

  def subtotals(_,sumSqr,sqrSum,_) do
    IO.puts :math.pow(sqrSum,2) - sumSqr
  end
end

Problem6.solve(100)