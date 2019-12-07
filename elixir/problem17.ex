defmodule Problem17 do
    @a ["one","two","three","four","five","six","seven","eight","nine","ten","eleven",
        "tweleve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"]
    @b ["twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"]
    @c "hundred"
    @d "thousand"

    def solve(n) do
        Enum.reduce(Enum.to_list(1..n),0,&(Enum.join([convertInt(&1) , &2] ) ))
#        |> String.length()
        |> IO.puts
    end

    def convertInt(n) when is_integer(n) do
        a = convertInt( Integer.digits(n))
                Enum.join([a," "])

    end

    def convertInt(x = [a]) when length(x) == 1 do
     [word | _] = Tuple.to_list(List.pop_at(@a,a-1))
     word
    end

    def convertInt(x = [b,a]) when length(x) == 2 and b == 1  do
       [word | _] = Tuple.to_list(List.pop_at(@a,9+a))
       word
    end

    def convertInt(x = [b,a]) when length(x) == 2 and b == 0 do
       convertInt(a)
    end

     def convertInt(x = [b,a]) when length(x) == 2 and a == 0 do
        [wordb | _] = Tuple.to_list(List.pop_at(@b,b-2))
        wordb
    end

    def convertInt(x = [b,a]) when length(x) == 2  do
        [wordb | _] = Tuple.to_list(List.pop_at(@b,b-2))
        worda = convertInt([a])
        Enum.join([wordb,worda])
    end

    def convertInt(x = [c | rest]) when length(x) == 3 and rest == [0,0] do
      Enum.join([convertInt([c]),@c])
    end

    def convertInt(x = [c | rest]) when length(x) == 3  do
      Enum.join([convertInt([c]),"and",@c,convertInt(rest)])
    end

    def convertInt(x = [d | _]) when length(x) == 4  do
          Enum.join([convertInt([d]),@d])
    end
end

Problem17.solve(1000)