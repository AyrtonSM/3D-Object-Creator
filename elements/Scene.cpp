using namespace std;

#define K 1
class Scene{
	
	Object3D* objects;
	int objCounter;
	
	public:
		Scene(){
			objects = (Object3D*) malloc(sizeof(Object3D) * K);
		}
		
		void addObject(Object3D obj){
			if(objCounter == K){
				cout << "Maximum number of objects for a Scene reached"; 
			}else{
				objects[objCounter+1] = obj;
				objCounter++;	
			}
		}
		
		void describeScene(){
			for(int i=0; i < objCounter; i++){
				cout << objects[i].getName();
			}
		}	 
		
};
