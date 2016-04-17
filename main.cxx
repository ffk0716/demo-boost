#include <iostream>
#include <boost/filesystem.hpp>

using namespace std;
using namespace boost;
using namespace boost::filesystem;

int main(int argc, char* argv[])
{
	cout << current_path() << endl;
	return 0;
}


