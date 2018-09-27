
void files()
{

}

void console()
{
	
}

int main(int argc, char **argv)
{
	if (argc > 1)
		files(argc, argv);
	else
		console();
	return (0);
}