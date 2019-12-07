defmodule Problem4 do
  @a 999

  def solve() do
    largestPalindrome(@a,@a)
  end

  def largestPalindrome(a,b) when a > 0 and b > 0 do
    # todo find a way to make this faster problem 3 needs it too
    if Integer.to_string(a*b) == String.reverse(Integer.to_string(a*b)) do
        IO.puts a * b
        largestPalindrome(a-1,@a)
    else
        largestPalindrome(a,b-1)
    end
  end

  def largestPalindrome(_,_) do
    IO.inspect("Done")
  end
end

Problem4.solve()