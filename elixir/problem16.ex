defmodule Problem16 do
    def solve(n) do
        pow(2,n)
        |> addDigits()
        |> IO.puts
    end

    def addDigits(n) do
        n
        |> Integer.digits()
        |> Enum.reduce(0,&(&1 + &2))
    end

    def  pow(n, k), do: pow(n, k, 1)
    defp pow(_, 0, acc), do: acc
    defp pow(n, k, acc), do: pow(n, k - 1, n * acc)
end

Problem16.solve(1000)