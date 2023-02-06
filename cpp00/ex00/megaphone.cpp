#include <iostream>

int main(int argc, char* argv[])
{
	int x = 1;
	int i = 0;

	if(argc==1)
		std::cout<< "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	while(argv[x])
	{
		i = 0;
		while(argv[x][i])
		{
			std::cout<<static_cast<char>(std::toupper(argv[x][i])); 	 //(char)std::toupper(argv[x][i]);
			i++;
		} 
		x++;
	}
	std::cout<<std::endl;

	return(0);
}