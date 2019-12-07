defmodule Problem15 do
    def solve(n) do
        IO.puts countPaths(n)
    end

    def countPaths(n) do
      countPaths(n,0,0)
    end

    def countPaths(n,x,y) when x < n and y < n do
     countPaths(n,x+1,y) + countPaths(n,x,y+1)
    end

    def countPaths(_,_,_)  do
        1
    end

end

Problem15.solve(20)