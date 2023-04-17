#include "Pet.h"

int main()
{
	Pet myPet("Moca", 3, "dog");
	cout << "My Pet name is " << myPet.getName() << endl;
	cout << "My Pet age is " << myPet.getAge() << endl;
	Puppy myPuppy("Blue", 1, "dog", "Great Dane");
	cout << "My Puppy name is " << myPuppy.getName() << endl;
	cout << "My Puppy age is " << myPuppy.getAge() << endl;
	cout << "My Puppy breed is " << myPuppy.getBreed() << endl;
}