// Question 2 project euluer
fn main()
{
	let mut x: float = 100000;
	let mut count = 1;
	let mut sum = 0;
	let mut lock = true;
	loop
	{
		println!("we are at {}", x);
		x -= 1;
		count = x;
		if x <= 1 
		{
			break;
		}
		else
		{
			loop 
			{
				count -= 1;
				if count <= 1
				{
					lock = false;
					sum = x;
					break;                     // exit loop just incase it didnt exit every other way
				}
				else
				{
					if x % count == 0 && x != count
					{
						break;					//exit loop we know its not prime 
					}
					else
					{
						//its not anything we care about
					}
				}
			}
			if lock == false
			{
				break;
			}	
		}	
		
	}
	println!("the result is {}", sum);
}