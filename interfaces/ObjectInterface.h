 using namespace std;
 
 /**
 * Interface que define açoes para um dado Objeto 3D;
 */
 class ObjectInterface {
 	public:
 		virtual string print() = 0;
 		virtual string getType() = 0;
 		virtual void setType(string type) = 0;
		virtual void save(Mesh mesh, string filepath, string filename,string type) = 0;
 };
