defmodule Problem13 do
  def solve(filename) do
    IO.inspect getFirstTen(filename)
  end

  def getFirstTen(filename) do
     filename
     |> extractInput()
     |> sumAllRows()
  end

  def extractInput(filename) do
   [_ | [input]] = Tuple.to_list(File.read filename)
   Enum.map(String.split(input , "\r\n") , fn x -> List.first(Tuple.to_list(Integer.parse(x))) end )
  end

  def sumAllRows(input) do
    Enum.reduce(input,0,&(&1 + &2))
  end

end

Problem13.solve("problem13.txt")