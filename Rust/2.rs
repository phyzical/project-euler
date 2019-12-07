// Question 2 project euluer
fn main()
{
	let mut fibFront = 1i;
	let mut fibMiddle = 1i;
	let mut fibTemp = 0i;
	let mut sum = 0i;
	loop
	{
		fibTemp = fibFront;
		fibFront += fibMiddle;
		fibMiddle = fibTemp;

		if fibFront>4000000
		{
			break;
		}
		if fibFront%2==0
		{
			sum += fibFront;
		}
		else
		{
			//its not anything we care about
		}
	}	
	println!("the result is {}", sum);
}