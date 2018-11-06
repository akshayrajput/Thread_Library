This is simple thread library which can create, delete, suspend, resume, run &sleep threads. It can also show the status of any thread.
Threads  can be created with or without function arguments. It simply stores the TCB value of the thread and run it. To run please follow the following commands:-(Note:- only tested on ubuntu).
1) gcc -c MyThread.c
2) gcc -c Yourprogram.c
3) gcc MyThread.o Yourprogram.o -o executable
4) ./executable


Don’t forget to include MyThread.h

Function details:-
int create(void (*f)(void)); 		//update dses of the control
int createWithArgs(void *(*f)(void *), void *arg);
int getID(void); 			//return RThreadID
void dispatch(int); 			//the scheduler func, sig == signalID?
void start(void); 			//start executing the threads - possibly a master thread???
void run(int threadID);			//put thread status = RED?
void suspend(int threadID);		//put thread status = SUS?
void resume(int threadID);		//put thread status = RED?
void yield(void);
void initStatistics(struct statistics* stat,int id);
void deleteThread(int threadID);
void sleep1(int sec);			// put thread status = SLP?
struct statistics* getStatus(int threadID);//print the fields of statistics??
int createWithArgs(void*(*f)(void*),void* arg);
void clean(void);			//stops the master thread?
void JOIN(int threadID);		//bonus
void* GetThreadResult(int threadID);//bonus
