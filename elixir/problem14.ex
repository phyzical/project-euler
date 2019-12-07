defmodule Problem14 do
    def solve(n) do
        IO.inspect nextCollatz(n)
    end

    def nextCollatz(max) do
        max
        |> nextCollatz(1,0,0)
    end

    def nextCollatz(max,x,res,resX) when max > x do
        currentCollatzCount = calulateCollatz(x,1)
        if  currentCollatzCount > res do
          res = currentCollatzCount
          resX = x
        end
        nextCollatz(max,x+1,res,resX)
    end

    def nextCollatz(_,_,_,resX) do
        resX
    end

    def calulateCollatz(x,count) when rem(x,2) == 0 and  x > 1 do
        [x | _] = Tuple.to_list(Integer.parse(Float.to_string(x/2)))
        calulateCollatz(x, count+1)
    end

    def calulateCollatz(x,count) when x > 1 do
        (3*x) + 1
        |> calulateCollatz(count+1)
    end

    def calulateCollatz(x,count) when x == 1  do
        count
    end

    def calulateCollatz(_,_)  do
        0
    end

end

Problem14.solve(1000000)