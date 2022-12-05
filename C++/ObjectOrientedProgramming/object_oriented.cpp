#include<iostream>
using std::string;

class Employee{
private:
	string Name;
	string Company;
	int Age;

public:
	void setName(string name){ // setter --encapsulation for private class to set and get value
		Name = name;
	}
	string getName() { //getter --private data to access required setter and getters
		return Name;
	}

	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}

	void setAge(int age) {
		if(age>=18)
		Age = age;
	}
	int getAge() {
		return Age;
	}

	void IntroduceYourself() {
		std::cout << "Name: " << Name << std::endl;
		std::cout << "Company: " << Company << std::endl;
		std::cout << "Age: " << Age << std::endl; 
	}
	Employee(string name, string company, int age) {  // >>This is Constructor used to replay and reduce code 
		Name = name;
		Company = company;
		Age = age;
	}
};
int main() {
	Employee employee1 = Employee("John", "YT", 25);
	employee1.IntroduceYourself();

	Employee employee2 = Employee("Katia", "OF", 20);
	/*employee2.Name = "Katia";    >> This is replaced by constructor
	employee2.Company = "OF";
	employee2.Age = "20"*/
	employee2.IntroduceYourself();

	employee1.setAge(15);
	std::cout << employee1.getName() << " is " << employee1.getAge() << " years old. " << std::endl;
};