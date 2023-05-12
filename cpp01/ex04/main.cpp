#include <fstream>
#include <iostream>

int replace(char **argv, std::string str)
{
    std::ofstream outfile;
    int x;

    outfile.open((std::string(argv[1])+".replace").c_str());
    if (outfile.fail())
		return (1);
    for (int i = 0; i < (int)str.size(); i++)
	{
		x = str.find(argv[2], i);
		if (x != -1 && x == i)
		{
			outfile << argv[3];
			i += std::string(argv[2]).size() - 1;
		}
		else
			outfile << str[i];
	}
	outfile.close();
	return (0);
}



int	main(int argc, char **argv)
{   
    char a;
	std::ifstream infile;
    std:: string str;
    if(argc!=4)
    {
        std::cout<<"numero de argumentos incorrecto"<<std::endl;
        return(0);
    }
    infile.open(argv[1]);
    if(infile.fail())
    {
        std::cout << "Error: " << argv[1] << ":" << " el directorio es incorrecto" << std::endl;
        return(0);
    }
    while(!infile.eof() && infile >> std::noskipws >> a)
		str += a;
	infile.close();
    return(replace(argv, str));

}