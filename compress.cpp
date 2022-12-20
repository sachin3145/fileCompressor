#include "huffman.cpp"
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        displayr("ERROR: Failed to detect Files\n");
		exit(1);
	}
    
    huffman file(argv[1], argv[2]);

    file.compress();
    displayg("Compressed successfully\n");

    return 0;
}