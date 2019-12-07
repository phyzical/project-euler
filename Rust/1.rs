// question 1 project euluer
fn main()
{
	let mut x = 0i;
	let mut sum = 0i;
	loop
	{
		x += 1;
		if x>999
		{
			break;
		}
		if x%3==0||x%5==0
		{
			sum += x;
		}
		else
		{
			//its not anything we care about
		}
	}	
	println!("the result is {}", sum);
}