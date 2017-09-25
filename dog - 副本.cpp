#include<iostream>
#include<cstring>
using namespace std;
class Dog
{
	char name[20];
	int age;
	char sex;
	float weight;
	public:
		void Register(char * Name,int Age,char Sex ,float Weight);
		char*GetName(){return name;}
		int GetAge() {return age;}
		char GetSex() {return sex;}
		float GetWeight() {return weight;}
		void speak(){cout<<"Arf! Arf!" <<endl;}
};
void Dog::Register(char * Name,int Age,char Sex ,float Weight)
{
strcpy(name,Name);
age=Age;
sex=Sex;
weight=Weight;
}
int main()
{
	char name[20],sex;
	int age;
	float weight;
	Dog dog1;
	cout<<"Enter a dog's name,age,sex and weight:";
	cin>>name>>age>>sex>>weight;
	dog1.Register(name,age,sex,weight);
	cout<<"Dog's name:"<<dog1.GetName()<<endl;
	cout<<"Dog's age:"<<dog1.GetAge()<<endl;
	cout<<"Dog's sex:"<<dog1.GetSex()<<endl;
	cout<<"Dog's weight:"<<dog1.GetWeight()<<endl;
	cout<<"Dog speak:";
	dog1.speak();
	return 0;
}
