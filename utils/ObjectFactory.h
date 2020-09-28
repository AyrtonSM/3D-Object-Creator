#include "Object3D.h"
#include "../elements/cube.hpp"
#include "../elements/Square.h"
#include "../elements/Triangle.h"


/**
*	ObjectFactory é uma classe de tipos genericos, 
*	podendo assim receber qualquer tipo de instancia de classe. 
*  	ela serve para passarmos o tipo de objeto para a classe e 
*	assim fazer certas operações.
*/

using namespace std;
template <typename T> class ObjectFactory{
	private:
		T object;
		
	public:
		
		T getObject(){
			return object;
		}
		
		// inicializa o objeto setando seu nome e tipo
		void initialize(string name, string type){
			object.setType(type);
			object.setName(name);
		}
		
		
};
