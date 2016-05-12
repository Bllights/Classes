#include "Job.h"

Job::Job(){
	CCLOG("Job 생성자1");

}
Job::Job(bool Gold,int kind){
	CCLOG("CReference 생성자2");
	this->Gold=Gold;
	M_kind.kind=kind;
	Job();
}
void Job::SetKinds(int Parents, int Childs){
	M_kind.Parents=Parents;//예시
	M_kind.Childs=Childs;//예시
}
void Job::SetRand(){
	int _kind=rand()%MAX_kind;
}
