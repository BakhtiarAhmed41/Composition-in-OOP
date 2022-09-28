#include <iostream>
#include <string>
using namespace std;



class school {
	string name;
	int floors;
		
	public:
	school(){
		name = "HBM";
		floors = 5;
		}
	
	string get_name(){
		return name;
	}
	
	int get_floors(){
		return floors;
	}
};

class classroom{

	school s;
	int no_of_classrooms;
	
	public:
	
	classroom(){
		no_of_classrooms = 15;
	}
		
	void details(){
		cout<< "The School "<<s.get_name()<< " has "<< s.get_floors()<<" floors and "<< no_of_classrooms<<" classrooms."<<endl;
	}
};

class teacher{
	school s;
	string T_name;
	int no_of_teachers;
	
	public:
		teacher(){
			T_name= " ";
			no_of_teachers = 35;
		}
	void t_details(){
		cout<< "The School "<<s.get_name()<< " has "<< s.get_floors()<<" floors and "<<no_of_teachers<<" teachers."<<endl;
	}
};



int main(){
	school s;
	
	classroom c;
	c.details();
	
	teacher t;
	t.t_details();
}
