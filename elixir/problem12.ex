defmodule Problem12 do
  def solve(div) do
       IO.puts(getNextTriangle(12375))
   # IO.puts getMaxTriangle(div,1)
  end

  def getMaxTriangle(div,n) do
    nextTriangle = getNextTriangle(n+1)
    amtDivs = amtOfDiv(nextTriangle)
    if amtDivs > div do
        nextTriangle
    else
        getMaxTriangle(div,n+1)
    end
  end

  def getNextTriangle(n) do
     Enum.reduce(Enum.to_list(1..n), 0, &(&1 + &2))
  end

    def amtOfDiv(triangle) do
        amtOfDiv(triangle,triangle,0)
    end

    def amtOfDiv(triangle,x,divCount) when rem(triangle,x) == 0 and x > 0 do
     amtOfDiv(triangle,x-1,divCount+1)
    end

    def amtOfDiv(triangle,x,divCount) when x > 0  do
     amtOfDiv(triangle,x-1,divCount)
    end

    def amtOfDiv(_,_,divCount) do
     divCount
    end
end

Problem12.solve(500)