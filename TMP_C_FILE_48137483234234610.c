
void __BAH_init();
#define noCheck(v) v
#define array(type)	struct{	type *data; long int length; long int elemSize; }
typedef array(char*)* __BAH_ARR_TYPE_cpstring;
long int __BAH__main(__BAH_ARR_TYPE_cpstring);

        #include <gc.h>
        int main(int argc, char ** argv) {
        GC_INIT();
        array(char*) * args = GC_MALLOC(sizeof(array(char*)));
        args->data = GC_MALLOC(sizeof(char*)*argc);
        memcpy(args->data, argv, sizeof(char*)*argc);
        args->elemSize = sizeof(char*);
        args->length = argc;
        __BAH_init();
        long int r =  __BAH__main((__BAH_ARR_TYPE_cpstring)args);
        GC_FREE(args->data);
        GC_FREE(args);
        return r;
        };
        #define main(v) __BAH__main(v)
        #include <signal.h>
#include <string.h>
char * __Bah_safe_string(char * s);
#define null (void *)0
#define true (int)1
#define false (int)0
#include <sys/mman.h>
#define SIZE_OF_INT 8
#define SIZE_OF_CHAR 1
#define SIZE_OF_INT32 4
#define SIZE_OF_FLOAT32 4
#define SIZE_OF_FLOAT 8
long int len(void * a){
if ((a==null)) {
long int ____BAH_COMPILER_VAR_0 = 0;
return ____BAH_COMPILER_VAR_0;
}
long int i =  0;
noCheck( array ( void* ) *arr = a );
noCheck( i = arr -> length );
long int ____BAH_COMPILER_VAR_1 = i;
return ____BAH_COMPILER_VAR_1;
};
#include <gc.h>
void * memoryAlloc(long int s){
void * ____BAH_COMPILER_VAR_2 = GC_MALLOC(s);
return ____BAH_COMPILER_VAR_2;
};
void destroy(void * a){
GC_FREE(a);
};
void clear(void * a){
noCheck( array ( void* ) *arr = a );
noCheck( destroy ( arr -> data ) );
noCheck( arr -> data = memoryAlloc ( sizeof ( 0 ) ) );
noCheck( arr -> length = 0 );
};
void * memoryRealloc(void * p,long int s){
void * ____BAH_COMPILER_VAR_3 = GC_REALLOC(p,s);
return ____BAH_COMPILER_VAR_3;
};
void cleanShutDown(){
exit(1);
return;
};
void append(void * a,void * b){
noCheck( array ( void* ) *arrA = a );
noCheck( array ( void* ) *arrB = b );
long int lenA =  0;
long int lenB =  0;
long int realSizeA =  0;
long int realSizeB =  0;
noCheck( lenA = len ( arrA ) );
noCheck( lenB = len ( arrB ) );
if ((lenB==0)) {
return;
}
if ((lenA==0)) {
noCheck( arrA -> data = arrB -> data );
noCheck( arrA -> length = arrB -> length );
return;
}
noCheck( realSizeA = lenA * arrA -> elemSize );
noCheck( realSizeB = lenB * arrB -> elemSize );
void * buff =  memoryAlloc(realSizeA + realSizeB + 32);
noCheck( memcpy ( buff , arrA -> data , realSizeA ) );
noCheck( memcpy ( buff + lenA , arrB -> data , realSizeB ) );
noCheck( arrA -> length = lenA + lenB );
noCheck( arrA -> data = buff );
};
void copy(void * a,void * b){
noCheck( array ( void* ) *arrA = a );
noCheck( array ( void* ) *arrB = b );
long int lenB =  0;
long int realSizeB =  0;
noCheck( lenB = len ( arrB ) );
noCheck( realSizeB = lenB * arrB -> elemSize );
noCheck( arrA -> data = memoryAlloc ( realSizeB ) );
noCheck( memcpy ( arrA -> data , arrB -> data , realSizeB ) );
noCheck( arrA -> length = arrB -> length );
};
#define PROT_READ 1
#define PROT_WRITE 2
#define PROT_READWRITE 3
#define MAP_SHARED 1
#define MAP_ANONYMOUS 32
void * sharedMemory(long int size){
if ((size==0)) {
size =  4096;
}
void * r =  mmap(0,size,PROT_READ + PROT_WRITE,MAP_SHARED + MAP_ANONYMOUS,-1,0);
void * ____BAH_COMPILER_VAR_7 = r;
return ____BAH_COMPILER_VAR_7;
};
void allocateArray(void * arr,long int nbElems){
noCheck( array ( void* ) *a = arr );
noCheck( a -> length = nbElems );
noCheck( a -> data = memoryAlloc ( nbElems * a -> elemSize ) );
};
typedef array(char)* __BAH_ARR_TYPE_char;
__BAH_ARR_TYPE_char ser(void * a);
__BAH_ARR_TYPE_char __serialize(void * a,long int s){
char * r =  memoryAlloc(s + 9);
memcpy(r,&s,8);
memcpy(noCheck( r + 8 ),a,s);
long int l =  s + 1;
array(char)* arr = memoryAlloc(sizeof(array(char)));

arr->length = 0;
arr->elemSize = sizeof(char);
noCheck( arr -> length = s + 8 );
noCheck( arr -> elemSize = 1 );
noCheck( arr -> data = r );
array(char)* ____BAH_COMPILER_VAR_8 = arr;
return ____BAH_COMPILER_VAR_8;
};
long int serlen(__BAH_ARR_TYPE_char data){

                if (data->length <= 0) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 0, data->length);
                    exit(1);
                };
                
                if (data->length <= 1) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 1, data->length);
                    exit(1);
                };
                
                if (data->length <= 2) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 2, data->length);
                    exit(1);
                };
                
                if (data->length <= 3) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 3, data->length);
                    exit(1);
                };
                
                if (data->length <= 4) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 4, data->length);
                    exit(1);
                };
                
                if (data->length <= 5) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 5, data->length);
                    exit(1);
                };
                
                if (data->length <= 6) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 6, data->length);
                    exit(1);
                };
                
                if (data->length <= 7) {
                    printf("array (/opt/bah/memory.bah:194): data[%d] with length %d\n", 7, data->length);
                    exit(1);
                };
                array(char)* sarr = memoryAlloc(sizeof(array(char)));

sarr->length = 8;
sarr->elemSize = sizeof(char);
sarr->data = memoryAlloc(sizeof(char) * 50);sarr->data[0] = data->data[0];
sarr->data[1] = data->data[1];
sarr->data[2] = data->data[2];
sarr->data[3] = data->data[3];
sarr->data[4] = data->data[4];
sarr->data[5] = data->data[5];
sarr->data[6] = data->data[6];
sarr->data[7] = data->data[7];
long int ____BAH_COMPILER_VAR_9 = noCheck( *sarr -> data );
return ____BAH_COMPILER_VAR_9;
};
void * unser(__BAH_ARR_TYPE_char data){
long int sptr =  serlen(data);
void * r =  memoryAlloc(sptr);
memcpy(r,noCheck( data -> data + 8 ),sptr);
void * ____BAH_COMPILER_VAR_10 = r;
return ____BAH_COMPILER_VAR_10;
};
char * memoryAllocSTR(long int s){
void * r =  GC_malloc_atomic(s);
memset(r,0,s);
char * ____BAH_COMPILER_VAR_11 = r;
return ____BAH_COMPILER_VAR_11;
};
char * concatCPSTRING(char * a,char * b){
long int lenA =  strlen(a);
long int lenB =  strlen(b);
char * r =  memoryAlloc(lenA + lenB + 1);
strncpy(r,a,lenA);
strcat(r,b);
char * ____BAH_COMPILER_VAR_12 = r;
return ____BAH_COMPILER_VAR_12;
};
char * __STR(char * a){
long int lenA =  strlen(a);
char * r =  memoryAlloc(lenA + 1);
strncpy(r,a,lenA);
char * ____BAH_COMPILER_VAR_13 = r;
return ____BAH_COMPILER_VAR_13;
};
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void print(char * s){
write((void *)1,s,strlen(s));
};
void * cArr(void * arr){
noCheck( array ( void* ) *a = arr );
void * ____BAH_COMPILER_VAR_14 = noCheck( a -> data );
return ____BAH_COMPILER_VAR_14;
};
int __checkString(char * s,char * l){
if (((void *)s==null)) {
char * ____BAH_COMPILER_VAR_15 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("cpstring (");
long int strLen_1 = strlen(l);
long int strLen_2 = strlen(") is null \n");
;                            
                        ____BAH_COMPILER_VAR_15 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2);
                        
                        strncpy(____BAH_COMPILER_VAR_15+currStrOff, "cpstring (", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_15+currStrOff, l, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_15+currStrOff, ") is null \n", strLen_2);
                        currStrOff += strLen_2;
                        
                    }
                    print(____BAH_COMPILER_VAR_15);
exit(1);
}
int ____BAH_COMPILER_VAR_16 = true;
return ____BAH_COMPILER_VAR_16;
};
#include <pthread.h>
#define __thread_create GC_pthread_create
#define __thread_join GC_pthread_join
struct mutex {
pthread_mutex_t id;
void(*init)(struct mutex* this);
void(*lock)(struct mutex* this);
void(*unlock)(struct mutex* this);
void(*destroy)(struct mutex* this);
};
void mutex__init(struct mutex* this){
pthread_mutex_init(&this->id,0);
};
void mutex__lock(struct mutex* this){
pthread_mutex_lock(&this->id);
};
void mutex__unlock(struct mutex* this){
pthread_mutex_unlock(&this->id);
};
void mutex__destroy(struct mutex* this){
pthread_mutex_destroy(&this->id);
};
struct mutexCondition {
pthread_cond_t id;
void(*init)(struct mutexCondition* this);
void(*wait)(struct mutexCondition* this,struct mutex m);
void(*send)(struct mutexCondition* this);
void(*destroy)(struct mutexCondition* this);
};
void mutexCondition__init(struct mutexCondition* this){
pthread_cond_init(&this->id,0);
};
void mutexCondition__wait(struct mutexCondition* this,struct mutex m){
pthread_mutex_t mid =  m.id;
pthread_cond_wait(&this->id,&mid);
};
void mutexCondition__send(struct mutexCondition* this){
pthread_cond_signal(&this->id);
};
void mutexCondition__destroy(struct mutexCondition* this){
pthread_cond_destroy(&this->id);
};
struct mutexCondition mutexCondition(){
struct mutexCondition ____BAH_COMPILER_VAR_17 = {};
____BAH_COMPILER_VAR_17.init = mutexCondition__init;
____BAH_COMPILER_VAR_17.wait = mutexCondition__wait;
____BAH_COMPILER_VAR_17.send = mutexCondition__send;
____BAH_COMPILER_VAR_17.destroy = mutexCondition__destroy;
struct mutexCondition m =  ____BAH_COMPILER_VAR_17;
m.init((struct mutexCondition*)&m);
struct mutexCondition ____BAH_COMPILER_VAR_18 = m;
return ____BAH_COMPILER_VAR_18;
};
struct thread {
pthread_t id;
void (*handle)(void *);
void(*create)(struct thread* this);
void(*createWithArg)(struct thread* this,void * arg);
void(*wait)(struct thread* this);
};
void thread__create(struct thread* this){
__thread_create(&this->id,null,this->handle,null);
};
void thread__createWithArg(struct thread* this,void * arg){
__thread_create(&this->id,null,this->handle,arg);
};
void thread__wait(struct thread* this){
__thread_join(this->id,null);
};
struct mutex mutex(){
struct mutex ____BAH_COMPILER_VAR_19 = {};
____BAH_COMPILER_VAR_19.init = mutex__init;
____BAH_COMPILER_VAR_19.lock = mutex__lock;
____BAH_COMPILER_VAR_19.unlock = mutex__unlock;
____BAH_COMPILER_VAR_19.destroy = mutex__destroy;
struct mutex m =  ____BAH_COMPILER_VAR_19;
m.init((struct mutex*)&m);
struct mutex ____BAH_COMPILER_VAR_20 = m;
return ____BAH_COMPILER_VAR_20;
};
struct queueNode {
long int key;
void * data;
struct queueNode* next;
};
struct queue {
long int length;
struct queueNode* head;
void(*insert)(struct queue* this,void * data);
void(*delete)(struct queue* this,long int key);
void *(*get)(struct queue* this,long int key);
void(*set)(struct queue* this,long int key,void * data);
void *(*pop)(struct queue* this);
void(*clear)(struct queue* this);
};
void queue__insert(struct queue* this,void * data){
struct queueNode* ____BAH_COMPILER_VAR_21 = memoryAlloc(sizeof(struct queueNode));
____BAH_COMPILER_VAR_21->data= null;
____BAH_COMPILER_VAR_21->next= null;
struct queueNode* node =  ____BAH_COMPILER_VAR_21;
node->key =  this->length;
node->data =  data;
node->next =  this->head;
this->length =  this->length + 1;
this->head =  node;
};
void queue__delete(struct queue* this,long int key){
if ((this->length==0)) {
return;
}
struct queueNode* current =  this->head;
struct queueNode* previous= null;
while ((current->key!=key)) {
if ((current->next==null)) {
return;
}
previous =  current;
current =  current->next;
};
if ((current==this->head)) {
this->head =  current->next;
}
else {
previous->next =  current->next;
}
this->length =  this->length - 1;
};
void * queue__get(struct queue* this,long int key){
long int z =  0;
void * zp =  (void *)z;
if ((this->length==0)) {
void * ____BAH_COMPILER_VAR_24 = zp;
return ____BAH_COMPILER_VAR_24;
}
struct queueNode* ptr =  this->head;
while ((ptr->key!=key)) {
if ((ptr->next==null)) {
void * ____BAH_COMPILER_VAR_25 = zp;
return ____BAH_COMPILER_VAR_25;
}
ptr =  ptr->next;
};
void * data =  ptr->data;
void * ____BAH_COMPILER_VAR_26 = data;
return ____BAH_COMPILER_VAR_26;
};
void queue__set(struct queue* this,long int key,void * data){
this->delete((struct queue*)this,key);
struct queueNode* ____BAH_COMPILER_VAR_27 = memoryAlloc(sizeof(struct queueNode));
____BAH_COMPILER_VAR_27->data= null;
____BAH_COMPILER_VAR_27->next= null;
struct queueNode* node =  ____BAH_COMPILER_VAR_27;
node->key =  key;
node->data =  data;
node->next =  this->head;
this->length =  this->length + 1;
this->head =  node;
};
void * queue__pop(struct queue* this){
long int lastIndex =  this->length - 1;
void * data =  this->get((struct queue*)this,lastIndex);
this->delete((struct queue*)this,lastIndex);
void * ____BAH_COMPILER_VAR_28 = data;
return ____BAH_COMPILER_VAR_28;
};
void queue__clear(struct queue* this){
this->head =  (void *)0;
this->length =  0;
};
struct channel {
pthread_mutex_t m_mut;
pthread_cond_t w_cond;
pthread_cond_t r_cond;
long int w_waitting;
long int r_waitting;
struct queue* queue;
long int cap;
void(*send)(struct channel* this,void * data);
void(*sendAny)(struct channel* this,void * data,long int len);
void *(*receive)(struct channel* this);
void(*destroy)(struct channel* this);
long int(*len)(struct channel* this);
};
void channel__send(struct channel* this,void * data){
pthread_mutex_lock(&this->m_mut);
if ((this->cap!=-1)) {
while ((this->queue->length==this->cap)) {
this->w_waitting =  this->w_waitting+1;
pthread_cond_wait(&this->w_cond,&this->m_mut);
this->w_waitting =  this->w_waitting-1;
};
}
this->queue->insert((struct queue*)this->queue,data);
if ((this->r_waitting>0)) {
pthread_cond_signal(&this->r_cond);
}
pthread_mutex_unlock(&this->m_mut);
};
void channel__sendAny(struct channel* this,void * data,long int len){
pthread_mutex_lock(&this->m_mut);
if ((this->cap!=-1)) {
while ((this->queue->length==this->cap)) {
this->w_waitting =  this->w_waitting+1;
pthread_cond_wait(&this->w_cond,&this->m_mut);
this->w_waitting =  this->w_waitting-1;
};
}
void * p =  memoryAlloc(len);
memcpy(p,data,len);
this->queue->insert((struct queue*)this->queue,p);
if ((this->r_waitting>0)) {
pthread_cond_signal(&this->r_cond);
}
pthread_mutex_unlock(&this->m_mut);
};
void * channel__receive(struct channel* this){
pthread_mutex_lock(&this->m_mut);
while ((this->queue->length==0)) {
this->r_waitting =  this->r_waitting+1;
pthread_cond_wait(&this->r_cond,&this->m_mut);
this->r_waitting =  this->r_waitting-1;
};
void * data =  this->queue->pop((struct queue*)this->queue);
if ((this->w_waitting>0)) {
pthread_cond_signal(&this->w_cond);
}
pthread_mutex_unlock(&this->m_mut);
void * ____BAH_COMPILER_VAR_29 = data;
return ____BAH_COMPILER_VAR_29;
};
void channel__destroy(struct channel* this){
pthread_mutex_destroy(&this->m_mut);
pthread_cond_destroy(&this->w_cond);
pthread_cond_destroy(&this->r_cond);
};
long int channel__len(struct channel* this){
long int l =  this->queue->length;
long int ____BAH_COMPILER_VAR_30 = l;
return ____BAH_COMPILER_VAR_30;
};
struct channel* channel(){
struct channel* ____BAH_COMPILER_VAR_31 = memoryAlloc(sizeof(struct channel));
____BAH_COMPILER_VAR_31->w_waitting = 0;
____BAH_COMPILER_VAR_31->r_waitting = 0;
____BAH_COMPILER_VAR_31->queue= null;
____BAH_COMPILER_VAR_31->cap = -1;
____BAH_COMPILER_VAR_31->send = channel__send;
____BAH_COMPILER_VAR_31->sendAny = channel__sendAny;
____BAH_COMPILER_VAR_31->receive = channel__receive;
____BAH_COMPILER_VAR_31->destroy = channel__destroy;
____BAH_COMPILER_VAR_31->len = channel__len;
struct channel* c =  ____BAH_COMPILER_VAR_31;
pthread_mutex_init(&c->m_mut,0);
pthread_cond_init(&c->w_cond,0);
pthread_cond_init(&c->r_cond,0);
struct queue* ____BAH_COMPILER_VAR_32 = memoryAlloc(sizeof(struct queue));
____BAH_COMPILER_VAR_32->length = 0;
____BAH_COMPILER_VAR_32->head= null;
____BAH_COMPILER_VAR_32->insert = queue__insert;
____BAH_COMPILER_VAR_32->delete = queue__delete;
____BAH_COMPILER_VAR_32->get = queue__get;
____BAH_COMPILER_VAR_32->set = queue__set;
____BAH_COMPILER_VAR_32->pop = queue__pop;
____BAH_COMPILER_VAR_32->clear = queue__clear;
c->queue =  ____BAH_COMPILER_VAR_32;
struct channel* ____BAH_COMPILER_VAR_33 = c;
return ____BAH_COMPILER_VAR_33;
};
void setChanCap(void * c,long int cap){
struct channel* cp =  c;
cp->cap =  cap;
};
struct channel * __BAH_panic_chan;
void __Bah_common_panic(char * e){
if (strlen(e)) {
print(e);
print("\n");
cleanShutDown();
}
};
#define panic __Bah_common_panic
void __BAH_panic(char * e,char * line){
if ((__BAH_panic_chan!=null)) {
__BAH_panic_chan->send(__BAH_panic_chan, e);
return;
}
char * ____BAH_COMPILER_VAR_35 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("panic (");
long int strLen_1 = strlen(line);
long int strLen_2 = strlen("): ");
long int strLen_3 = strlen(e);
long int strLen_4 = strlen("\n");
;                            
                        ____BAH_COMPILER_VAR_35 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2 + strLen_3 + strLen_4);
                        
                        strncpy(____BAH_COMPILER_VAR_35+currStrOff, "panic (", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_35+currStrOff, line, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_35+currStrOff, "): ", strLen_2);
                        currStrOff += strLen_2;
                        
                        strncpy(____BAH_COMPILER_VAR_35+currStrOff, e, strLen_3);
                        currStrOff += strLen_3;
                        
                        strncpy(____BAH_COMPILER_VAR_35+currStrOff, "\n", strLen_4);
                        currStrOff += strLen_4;
                        
                    }
                    print(____BAH_COMPILER_VAR_35);
cleanShutDown();
};
int recover(char ** s){
__BAH_panic_chan = channel();
char * err =  (char *)__BAH_panic_chan->receive(__BAH_panic_chan);
*s =  err;
int ____BAH_COMPILER_VAR_36 = true;
return ____BAH_COMPILER_VAR_36;
};
__BAH_ARR_TYPE_char strAsArr(char * s);
char * __Bah_safe_string(char * s){
if (((void *)s==null)) {
char * ____BAH_COMPILER_VAR_37 = "(nil)";
return ____BAH_COMPILER_VAR_37;
}
if ((strlen(s)>50)) {
s =  __STR(s);
array(char)* a =  strAsArr(s);

{
long nLength = 47;
if (a->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(a->data, (nLength+50)*sizeof(char));
a->data = newPtr;
}
a->data[47] =  46;
a->length = nLength+1;
} else {
a->data[47] =  46;
}
};

{
long nLength = 48;
if (a->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(a->data, (nLength+50)*sizeof(char));
a->data = newPtr;
}
a->data[48] =  46;
a->length = nLength+1;
} else {
a->data[48] =  46;
}
};

{
long nLength = 49;
if (a->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(a->data, (nLength+50)*sizeof(char));
a->data = newPtr;
}
a->data[49] =  46;
a->length = nLength+1;
} else {
a->data[49] =  46;
}
};

{
long nLength = 50;
if (a->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(a->data, (nLength+50)*sizeof(char));
a->data = newPtr;
}
a->data[50] =  (char)0;
a->length = nLength+1;
} else {
a->data[50] =  (char)0;
}
};
}
char * ____BAH_COMPILER_VAR_38 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("\"");
long int strLen_1 = strlen(s);
long int strLen_2 = strlen("\"");
;                            
                        ____BAH_COMPILER_VAR_38 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2);
                        
                        strncpy(____BAH_COMPILER_VAR_38+currStrOff, "\"", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_38+currStrOff, s, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_38+currStrOff, "\"", strLen_2);
                        currStrOff += strLen_2;
                        
                    }
                    char * ____BAH_COMPILER_VAR_39 = ____BAH_COMPILER_VAR_38;
return ____BAH_COMPILER_VAR_39;
};
#include <stdlib.h>
#include <stdio.h>
#include <dirent.h>
#include <string.h>
#include <math.h>
void strCatOffset(char * dest,long int destLen,char * src,long int srcLen){
memcpy(noCheck( dest + destLen ),src,srcLen);
};
char cpstringCharAt(char * s,long int i){
char c =  (char)0;
noCheck( c = s [ i ] );
char ____BAH_COMPILER_VAR_40 = c;
return ____BAH_COMPILER_VAR_40;
};
char * charToString(char c){
char * s =  memoryAlloc(2);
strncpy(s,(char *)&c,1);
char * ____BAH_COMPILER_VAR_41 = s;
return ____BAH_COMPILER_VAR_41;
};
long int isUpper(char c){
if ((c>(char)64)) {
if ((c<(char)91)) {
long int ____BAH_COMPILER_VAR_42 = 1;
return ____BAH_COMPILER_VAR_42;
}
}
long int ____BAH_COMPILER_VAR_43 = 0;
return ____BAH_COMPILER_VAR_43;
};
long int isLower(char c){
if ((c>(char)96)) {
if ((c<(char)123)) {
long int ____BAH_COMPILER_VAR_44 = 1;
return ____BAH_COMPILER_VAR_44;
}
}
long int ____BAH_COMPILER_VAR_45 = 0;
return ____BAH_COMPILER_VAR_45;
};
long int isLetter(char s){
if (isUpper(s)) {
long int ____BAH_COMPILER_VAR_46 = 1;
return ____BAH_COMPILER_VAR_46;
}
if (isLower(s)) {
long int ____BAH_COMPILER_VAR_47 = 1;
return ____BAH_COMPILER_VAR_47;
}
long int ____BAH_COMPILER_VAR_48 = 0;
return ____BAH_COMPILER_VAR_48;
};
long int isNumber(char c){
if ((c>(char)47)) {
if ((c<(char)58)) {
long int ____BAH_COMPILER_VAR_49 = 1;
return ____BAH_COMPILER_VAR_49;
}
}
long int ____BAH_COMPILER_VAR_50 = 0;
return ____BAH_COMPILER_VAR_50;
};
long int isAlphaNumeric(char s){
if (isLetter(s)) {
long int ____BAH_COMPILER_VAR_51 = 1;
return ____BAH_COMPILER_VAR_51;
}
if (isNumber(s)) {
long int ____BAH_COMPILER_VAR_52 = 1;
return ____BAH_COMPILER_VAR_52;
}
long int ____BAH_COMPILER_VAR_53 = 0;
return ____BAH_COMPILER_VAR_53;
};
long int isSpace(char c){
if ((c==(char)32)) {
long int ____BAH_COMPILER_VAR_54 = 1;
return ____BAH_COMPILER_VAR_54;
}
if ((c==(char)9)) {
long int ____BAH_COMPILER_VAR_55 = 1;
return ____BAH_COMPILER_VAR_55;
}
if ((c==(char)10)) {
long int ____BAH_COMPILER_VAR_56 = 1;
return ____BAH_COMPILER_VAR_56;
}
if ((c==(char)11)) {
long int ____BAH_COMPILER_VAR_57 = 1;
return ____BAH_COMPILER_VAR_57;
}
if ((c==(char)13)) {
long int ____BAH_COMPILER_VAR_58 = 1;
return ____BAH_COMPILER_VAR_58;
}
long int ____BAH_COMPILER_VAR_59 = 0;
return ____BAH_COMPILER_VAR_59;
};
char * arrAsStr(__BAH_ARR_TYPE_char arr);
void println(char * s);
struct string {
char * content;
long int length;
void(*set)(struct string* this,char * s);
void(*append)(struct string* this,char * s);
void(*prepend)(struct string* this,char * s);
char(*charAt)(struct string* this,long int i);
long int(*compare)(struct string* this,char * s);
char *(*str)(struct string* this);
void(*replace)(struct string* this,char * nd,char * rl);
long int(*count)(struct string* this,char * need);
long int(*hasPrefix)(struct string* this,char * need);
long int(*hasSuffix)(struct string* this,char * need);
void(*trim)(struct string* this);
void(*trimLeft)(struct string* this,long int s);
void(*trimRight)(struct string* this,long int s);
struct string(*add)(struct string* this,struct string s2);
};
void string__set(struct string* this,char * s){
this->length =  strlen(s);
this->content =  (char *)memoryAlloc(this->length + 1);
strncpy(this->content,s,this->length);
};
void string__append(struct string* this,char * s){
long int sl =  strlen(s);
long int nl =  sl + this->length;
void * nc =  memoryRealloc(this->content,nl + 1);
if ((nc==null)) {
__BAH_panic("Error appending to string, possibly due to memory shortage.","/opt/bah/string.bah:133");
}
this->content =  nc;
strCatOffset(this->content,this->length,s,sl);
this->length =  nl;
};
void string__prepend(struct string* this,char * s){
long int sl =  strlen(s);
long int nl =  this->length + sl;
char * tmpS =  this->content;
void * nc =  memoryAlloc(nl + 1);
if ((nc==null)) {
__BAH_panic("Error appending to string, possibly due to memory shortage.","/opt/bah/string.bah:147");
}
this->content =  nc;
strncpy(this->content,s,sl);
strCatOffset(this->content,sl,tmpS,this->length);
destroy(tmpS);
this->length =  nl;
};
char string__charAt(struct string* this,long int i){
char c =  (char)0;
if ((i<this->length)) {
noCheck( c = this -> content [ i ] );
char ____BAH_COMPILER_VAR_60 = c;
return ____BAH_COMPILER_VAR_60;
}
char ____BAH_COMPILER_VAR_61 = c;
return ____BAH_COMPILER_VAR_61;
};
long int string__compare(struct string* this,char * s){
long int r =  strcmp(this->content,s);
if ((r==0)) {
long int ____BAH_COMPILER_VAR_62 = 1;
return ____BAH_COMPILER_VAR_62;
}
long int ____BAH_COMPILER_VAR_63 = 0;
return ____BAH_COMPILER_VAR_63;
};
char * string__str(struct string* this){
char * s =  this->content;
char * ____BAH_COMPILER_VAR_64 = s;
return ____BAH_COMPILER_VAR_64;
};
void string__replace(struct string* this,char * nd,char * rl){
struct string ____BAH_COMPILER_VAR_65 = {};
____BAH_COMPILER_VAR_65.content= null;
____BAH_COMPILER_VAR_65.set = string__set;
____BAH_COMPILER_VAR_65.append = string__append;
____BAH_COMPILER_VAR_65.prepend = string__prepend;
____BAH_COMPILER_VAR_65.charAt = string__charAt;
____BAH_COMPILER_VAR_65.compare = string__compare;
____BAH_COMPILER_VAR_65.str = string__str;
____BAH_COMPILER_VAR_65.replace = string__replace;
struct string needle =  ____BAH_COMPILER_VAR_65;
needle.set((struct string*)&needle,nd);
struct string ____BAH_COMPILER_VAR_66 = {};
____BAH_COMPILER_VAR_66.content= null;
____BAH_COMPILER_VAR_66.set = string__set;
____BAH_COMPILER_VAR_66.append = string__append;
____BAH_COMPILER_VAR_66.prepend = string__prepend;
____BAH_COMPILER_VAR_66.charAt = string__charAt;
____BAH_COMPILER_VAR_66.compare = string__compare;
____BAH_COMPILER_VAR_66.str = string__str;
____BAH_COMPILER_VAR_66.replace = string__replace;
struct string repl =  ____BAH_COMPILER_VAR_66;
repl.set((struct string*)&repl,rl);
long int i =  0;
long int si =  0;
long int replcBuffSart =  0;
long int replcBuffLength =  0;
array(char)* buff = memoryAlloc(sizeof(array(char)));

buff->length = 0;
buff->elemSize = sizeof(char);
while ((i<this->length)) {
char c =  this->charAt((struct string*)this,i);
char rc =  needle.charAt((struct string*)&needle,si);
if ((c==rc)) {
si =  si + 1;
if ((replcBuffLength==0)) {
replcBuffSart =  i;
}
replcBuffLength =  replcBuffLength + 1;
}
else {
if ((replcBuffLength>0)) {
si =  0;
long int j =  0;
while ((j<replcBuffLength)) {

{
long nLength = len(buff);
if (buff->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(buff->data, (nLength+50)*sizeof(char));
buff->data = newPtr;
}
buff->data[len(buff)] =  this->charAt((struct string*)this,j + replcBuffSart);
buff->length = nLength+1;
} else {
buff->data[len(buff)] =  this->charAt((struct string*)this,j + replcBuffSart);
}
};
j =  j + 1;
};
replcBuffLength =  0;
}

{
long nLength = len(buff);
if (buff->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(buff->data, (nLength+50)*sizeof(char));
buff->data = newPtr;
}
buff->data[len(buff)] =  c;
buff->length = nLength+1;
} else {
buff->data[len(buff)] =  c;
}
};
}
if ((si==needle.length)) {
replcBuffLength =  0;
long int ii =  0;
while ((ii<repl.length)) {
long int a =  ii;

{
long nLength = len(buff);
if (buff->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(buff->data, (nLength+50)*sizeof(char));
buff->data = newPtr;
}
buff->data[len(buff)] =  repl.charAt((struct string*)&repl,ii);
buff->length = nLength+1;
} else {
buff->data[len(buff)] =  repl.charAt((struct string*)&repl,ii);
}
};
ii =  ii + 1;
};
si =  0;
}
i =  i + 1;
};
char * r =  arrAsStr(buff);
if ((replcBuffLength>0)) {
array(char)* replbuffStr = memoryAlloc(sizeof(array(char)));

replbuffStr->length = 0;
replbuffStr->elemSize = sizeof(char);
allocateArray(replbuffStr,replcBuffLength + 1);
long int j =  0;
while ((j<replcBuffLength)) {

{
long nLength = j;
if (replbuffStr->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(replbuffStr->data, (nLength+50)*sizeof(char));
replbuffStr->data = newPtr;
}
replbuffStr->data[j] =  this->charAt((struct string*)this,j + replcBuffSart);
replbuffStr->length = nLength+1;
} else {
replbuffStr->data[j] =  this->charAt((struct string*)this,j + replcBuffSart);
}
};
j =  j + 1;
};
char * ____BAH_COMPILER_VAR_67 =arrAsStr(replbuffStr);char * ____BAH_COMPILER_VAR_68 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen(r);
long int strLen_1 = strlen(____BAH_COMPILER_VAR_67);
;                            
                        ____BAH_COMPILER_VAR_68 = memoryAllocSTR(1 + strLen_0 + strLen_1);
                        
                        strncpy(____BAH_COMPILER_VAR_68+currStrOff, r, strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_68+currStrOff, ____BAH_COMPILER_VAR_67, strLen_1);
                        currStrOff += strLen_1;
                        
                    }
                    r =  ____BAH_COMPILER_VAR_68;
}
if (((void *)r!=null)) {
this->set((struct string*)this,r);
}
};
long int string__count(struct string* this,char * need){
long int i =  0;
long int count =  0;
struct string ____BAH_COMPILER_VAR_69 = {};
____BAH_COMPILER_VAR_69.content= null;
____BAH_COMPILER_VAR_69.set = string__set;
____BAH_COMPILER_VAR_69.append = string__append;
____BAH_COMPILER_VAR_69.prepend = string__prepend;
____BAH_COMPILER_VAR_69.charAt = string__charAt;
____BAH_COMPILER_VAR_69.compare = string__compare;
____BAH_COMPILER_VAR_69.str = string__str;
____BAH_COMPILER_VAR_69.replace = string__replace;
____BAH_COMPILER_VAR_69.count = string__count;
struct string needle =  ____BAH_COMPILER_VAR_69;
needle.set((struct string*)&needle,need);
long int countIndex =  0;
while ((i<this->length)) {
char c =  this->charAt((struct string*)this,i);
char sc =  needle.charAt((struct string*)&needle,countIndex);
if ((c==sc)) {
countIndex =  countIndex + 1;
}
else {
countIndex =  0;
}
if ((countIndex==needle.length)) {
count =  count + 1;
countIndex =  0;
}
i =  i + 1;
};
long int ____BAH_COMPILER_VAR_70 = count;
return ____BAH_COMPILER_VAR_70;
};
long int string__hasPrefix(struct string* this,char * need){
long int i =  0;
long int nl =  strlen(need);
if ((this->length<nl)) {
long int ____BAH_COMPILER_VAR_71 = 0;
return ____BAH_COMPILER_VAR_71;
}
while ((i<nl)) {
char c =  this->charAt((struct string*)this,i);
char sc =  cpstringCharAt(need,i);
if ((c!=sc)) {
long int ____BAH_COMPILER_VAR_72 = 0;
return ____BAH_COMPILER_VAR_72;
}
i =  i + 1;
};
long int ____BAH_COMPILER_VAR_73 = 1;
return ____BAH_COMPILER_VAR_73;
};
long int string__hasSuffix(struct string* this,char * need){
long int nl =  strlen(need);
if ((this->length<nl)) {
long int ____BAH_COMPILER_VAR_74 = 0;
return ____BAH_COMPILER_VAR_74;
}
long int i =  this->length - nl;
long int needleIndex =  0;
while ((i<this->length)) {
char c =  this->charAt((struct string*)this,i);
char sc =  cpstringCharAt(need,needleIndex);
if ((c!=sc)) {
long int ____BAH_COMPILER_VAR_75 = 0;
return ____BAH_COMPILER_VAR_75;
}
needleIndex =  needleIndex + 1;
i =  i + 1;
};
long int ____BAH_COMPILER_VAR_76 = 1;
return ____BAH_COMPILER_VAR_76;
};
void string__trim(struct string* this){
if ((this->length==0)) {
return;
}
char fc =  this->charAt((struct string*)this,0);
if ((isSpace(fc)==0)) {
return;
}
long int i =  0;
while ((i<this->length)) {
char c =  this->charAt((struct string*)this,i);
if ((isSpace(c)==0)) {
break;
}
i =  i + 1;
};
if ((i>0)) {
this->length =  this->length - i;
char * tmpS =  memoryAlloc(this->length + 1);
memcpy(tmpS,noCheck( this->content + i ),this->length + 1);
this->content =  tmpS;
}
};
void string__trimLeft(struct string* this,long int s){
long int nSize =  this->length - s;
void * tmpS =  memoryAlloc(nSize);
memcpy(tmpS,noCheck( this->content + s ),nSize);
this->content =  tmpS;
this->length =  nSize;
};
void string__trimRight(struct string* this,long int s){
long int nSize =  this->length - s;
void * tmpS =  memoryAlloc(nSize);
memcpy(tmpS,this->content,nSize);
this->content =  tmpS;
this->length =  nSize;
};
struct string string__add(struct string* this,struct string s2){
struct string ____BAH_COMPILER_VAR_79 = {};
____BAH_COMPILER_VAR_79.content= null;
____BAH_COMPILER_VAR_79.set = string__set;
____BAH_COMPILER_VAR_79.append = string__append;
____BAH_COMPILER_VAR_79.prepend = string__prepend;
____BAH_COMPILER_VAR_79.charAt = string__charAt;
____BAH_COMPILER_VAR_79.compare = string__compare;
____BAH_COMPILER_VAR_79.str = string__str;
____BAH_COMPILER_VAR_79.replace = string__replace;
____BAH_COMPILER_VAR_79.count = string__count;
____BAH_COMPILER_VAR_79.hasPrefix = string__hasPrefix;
____BAH_COMPILER_VAR_79.hasSuffix = string__hasSuffix;
____BAH_COMPILER_VAR_79.trim = string__trim;
____BAH_COMPILER_VAR_79.trimLeft = string__trimLeft;
____BAH_COMPILER_VAR_79.trimRight = string__trimRight;
____BAH_COMPILER_VAR_79.add = string__add;
struct string r =  ____BAH_COMPILER_VAR_79;
r.length =  this->length + s2.length;
r.content =  memoryAlloc(r.length + 1);
strncpy(r.content,this->content,this->length);
strCatOffset(r.content,this->length,s2.content,s2.length);
struct string ____BAH_COMPILER_VAR_80 = r;
return ____BAH_COMPILER_VAR_80;
};
struct string string(char * s){
struct string ____BAH_COMPILER_VAR_81 = {};
____BAH_COMPILER_VAR_81.content= null;
____BAH_COMPILER_VAR_81.set = string__set;
____BAH_COMPILER_VAR_81.append = string__append;
____BAH_COMPILER_VAR_81.prepend = string__prepend;
____BAH_COMPILER_VAR_81.charAt = string__charAt;
____BAH_COMPILER_VAR_81.compare = string__compare;
____BAH_COMPILER_VAR_81.str = string__str;
____BAH_COMPILER_VAR_81.replace = string__replace;
____BAH_COMPILER_VAR_81.count = string__count;
____BAH_COMPILER_VAR_81.hasPrefix = string__hasPrefix;
____BAH_COMPILER_VAR_81.hasSuffix = string__hasSuffix;
____BAH_COMPILER_VAR_81.trim = string__trim;
____BAH_COMPILER_VAR_81.trimLeft = string__trimLeft;
____BAH_COMPILER_VAR_81.trimRight = string__trimRight;
____BAH_COMPILER_VAR_81.add = string__add;
struct string a =  ____BAH_COMPILER_VAR_81;
a.set((struct string*)&a,s);
struct string ____BAH_COMPILER_VAR_82 = a;
return ____BAH_COMPILER_VAR_82;
};
char * arrToStr(__BAH_ARR_TYPE_char arr){
long int strLen =  len(arr);
char * str =  memoryAlloc(strLen + 1);
noCheck( memcpy ( str , arr -> data , strLen ) );
char * ____BAH_COMPILER_VAR_83 = str;
return ____BAH_COMPILER_VAR_83;
};
__BAH_ARR_TYPE_char strToArr(char * str){
long int strLen =  strlen(str);
array(char)* arr = memoryAlloc(sizeof(array(char)));

arr->length = 0;
arr->elemSize = sizeof(char);
noCheck( arr -> data = memoryAlloc ( strLen + 1 ) );
noCheck( memcpy ( arr -> data , str , strLen ) );
noCheck( arr -> length = strLen );
array(char)* ____BAH_COMPILER_VAR_84 = arr;
return ____BAH_COMPILER_VAR_84;
};
char * arrAsStr(__BAH_ARR_TYPE_char arr){
char * ____BAH_COMPILER_VAR_85 = noCheck( arr -> data );
return ____BAH_COMPILER_VAR_85;
};
__BAH_ARR_TYPE_char strAsArr(char * str){
long int l =  strlen(str);
array(char)* arr = memoryAlloc(sizeof(array(char)));

arr->length = 0;
arr->elemSize = sizeof(char);
noCheck( arr -> length = l );
noCheck( arr -> data = str );
array(char)* ____BAH_COMPILER_VAR_86 = arr;
return ____BAH_COMPILER_VAR_86;
};
char * intToStr(long int i){
if ((i==0)) {
char * ____BAH_COMPILER_VAR_87 = "0";
return ____BAH_COMPILER_VAR_87;
}
array(char)* s = memoryAlloc(sizeof(array(char)));

s->length = 0;
s->elemSize = sizeof(char);
int subZero =  (i<0);
if ((subZero==true)) {
i =  0 - i;
}
for (; (i!=0); i =  i / 10) {
long int conv =  i % 10;
conv =  conv + 48;

{
long nLength = len(s);
if (s->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(s->data, (nLength+50)*sizeof(char));
s->data = newPtr;
}
s->data[len(s)] =  (char)conv;
s->length = nLength+1;
} else {
s->data[len(s)] =  (char)conv;
}
};
};
if ((subZero==true)) {

{
long nLength = len(s);
if (s->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(s->data, (nLength+50)*sizeof(char));
s->data = newPtr;
}
s->data[len(s)] =  45;
s->length = nLength+1;
} else {
s->data[len(s)] =  45;
}
};
}
long int ls =  len(s);
i =  0;
for (; (i<ls / 2); i =  i+1) {
long int ii =  ls - i-1;

                if (s->length <= i) {
                    printf("array (/opt/bah/string.bah:442): s[%d] with length %d\n", i, s->length);
                    exit(1);
                };
                char osi =  s->data[i];

                if (s->length <= ii) {
                    printf("array (/opt/bah/string.bah:443): s[%d] with length %d\n", ii, s->length);
                    exit(1);
                };
                
{
long nLength = i;
if (s->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(s->data, (nLength+50)*sizeof(char));
s->data = newPtr;
}
s->data[i] =  s->data[ii];
s->length = nLength+1;
} else {
s->data[i] =  s->data[ii];
}
};

{
long nLength = ii;
if (s->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(s->data, (nLength+50)*sizeof(char));
s->data = newPtr;
}
s->data[ii] =  osi;
s->length = nLength+1;
} else {
s->data[ii] =  osi;
}
};
};

{
long nLength = len(s);
if (s->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(s->data, (nLength+50)*sizeof(char));
s->data = newPtr;
}
s->data[len(s)] =  (char)0;
s->length = nLength+1;
} else {
s->data[len(s)] =  (char)0;
}
};
char * ____BAH_COMPILER_VAR_88 = arrAsStr(s);
return ____BAH_COMPILER_VAR_88;
};
struct string intToString(long int i){
char * ____BAH_COMPILER_VAR_89 =intToStr(i);struct string r =  string(____BAH_COMPILER_VAR_89);
struct string ____BAH_COMPILER_VAR_90 = r;
return ____BAH_COMPILER_VAR_90;
};
char * floatToStr(double f){
char * buff =  memoryAlloc(50);
sprintf(buff,"%lf",f);
char * ____BAH_COMPILER_VAR_91 = buff;
return ____BAH_COMPILER_VAR_91;
};
long int strToInt(char * s){
long int ____BAH_COMPILER_VAR_92 = atol(s);
return ____BAH_COMPILER_VAR_92;
};
double strToFloat(char * s){
double ____BAH_COMPILER_VAR_93 = strtod(s,null);
return ____BAH_COMPILER_VAR_93;
};
long int stringToInt(struct string s){
long int i =  atol(s.content);
long int ____BAH_COMPILER_VAR_94 = i;
return ____BAH_COMPILER_VAR_94;
};
typedef array(struct string)* __BAH_ARR_TYPE_string;
__BAH_ARR_TYPE_string splitString(struct string s,char * sp){
struct string sep =  string(sp);
array(struct string)* res = memoryAlloc(sizeof(array(struct string)));

res->length = 0;
res->elemSize = sizeof(struct string);
struct string sepBuffer =  string("");
long int sepIndex =  0;
long int i =  0;
struct string replcBuff =  string("");
array(char)* tmpString = memoryAlloc(sizeof(array(char)));

tmpString->length = 0;
tmpString->elemSize = sizeof(char);
while ((i<s.length)) {
char c =  s.charAt((struct string*)&s,i);
char sepc =  sep.charAt((struct string*)&sep,sepIndex);
if ((c==sepc)) {
sepIndex =  sepIndex + 1;
char * ____BAH_COMPILER_VAR_95 =charToString(c);replcBuff.append((struct string*)&replcBuff,____BAH_COMPILER_VAR_95);
}
else {
if ((sepIndex>0)) {
sepIndex =  0;
char * ____BAH_COMPILER_VAR_96 =charToString(c);replcBuff.append((struct string*)&replcBuff,____BAH_COMPILER_VAR_96);
long int ii =  0;
while ((ii<replcBuff.length)) {

{
long nLength = len(tmpString);
if (tmpString->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(tmpString->data, (nLength+50)*sizeof(char));
tmpString->data = newPtr;
}
tmpString->data[len(tmpString)] =  replcBuff.charAt((struct string*)&replcBuff,ii);
tmpString->length = nLength+1;
} else {
tmpString->data[len(tmpString)] =  replcBuff.charAt((struct string*)&replcBuff,ii);
}
};
ii =  ii + 1;
};
replcBuff.set((struct string*)&replcBuff,"");
}
else {

{
long nLength = len(tmpString);
if (tmpString->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(tmpString->data, (nLength+50)*sizeof(char));
tmpString->data = newPtr;
}
tmpString->data[len(tmpString)] =  c;
tmpString->length = nLength+1;
} else {
tmpString->data[len(tmpString)] =  c;
}
};
}
}
if ((sepIndex==sep.length)) {
replcBuff.set((struct string*)&replcBuff,"");
struct string* ____BAH_COMPILER_VAR_97 = memoryAlloc(sizeof(struct string));
____BAH_COMPILER_VAR_97->content= null;
____BAH_COMPILER_VAR_97->set = string__set;
____BAH_COMPILER_VAR_97->append = string__append;
____BAH_COMPILER_VAR_97->prepend = string__prepend;
____BAH_COMPILER_VAR_97->charAt = string__charAt;
____BAH_COMPILER_VAR_97->compare = string__compare;
____BAH_COMPILER_VAR_97->str = string__str;
____BAH_COMPILER_VAR_97->replace = string__replace;
____BAH_COMPILER_VAR_97->count = string__count;
____BAH_COMPILER_VAR_97->hasPrefix = string__hasPrefix;
____BAH_COMPILER_VAR_97->hasSuffix = string__hasSuffix;
____BAH_COMPILER_VAR_97->trim = string__trim;
____BAH_COMPILER_VAR_97->trimLeft = string__trimLeft;
____BAH_COMPILER_VAR_97->trimRight = string__trimRight;
____BAH_COMPILER_VAR_97->add = string__add;
struct string* elem =  ____BAH_COMPILER_VAR_97;
char * ____BAH_COMPILER_VAR_98 =arrToStr(tmpString);elem->set((struct string*)elem,____BAH_COMPILER_VAR_98);
long int lenRes =  len(res);

{
long nLength = lenRes;
if (res->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(res->data, (nLength+50)*sizeof(struct string));
res->data = newPtr;
}
res->data[lenRes] =  *elem;
res->length = nLength+1;
} else {
res->data[lenRes] =  *elem;
}
};
clear(tmpString);
sepIndex =  0;
}
i =  i + 1;
};
if ((replcBuff.length>0)) {
long int ii =  0;
while ((ii<replcBuff.length)) {

{
long nLength = len(tmpString);
if (tmpString->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(tmpString->data, (nLength+50)*sizeof(char));
tmpString->data = newPtr;
}
tmpString->data[len(tmpString)] =  replcBuff.charAt((struct string*)&replcBuff,ii);
tmpString->length = nLength+1;
} else {
tmpString->data[len(tmpString)] =  replcBuff.charAt((struct string*)&replcBuff,ii);
}
};
ii =  ii + 1;
};
}
if ((len(tmpString)>0)) {
struct string* ____BAH_COMPILER_VAR_99 = memoryAlloc(sizeof(struct string));
____BAH_COMPILER_VAR_99->content= null;
____BAH_COMPILER_VAR_99->set = string__set;
____BAH_COMPILER_VAR_99->append = string__append;
____BAH_COMPILER_VAR_99->prepend = string__prepend;
____BAH_COMPILER_VAR_99->charAt = string__charAt;
____BAH_COMPILER_VAR_99->compare = string__compare;
____BAH_COMPILER_VAR_99->str = string__str;
____BAH_COMPILER_VAR_99->replace = string__replace;
____BAH_COMPILER_VAR_99->count = string__count;
____BAH_COMPILER_VAR_99->hasPrefix = string__hasPrefix;
____BAH_COMPILER_VAR_99->hasSuffix = string__hasSuffix;
____BAH_COMPILER_VAR_99->trim = string__trim;
____BAH_COMPILER_VAR_99->trimLeft = string__trimLeft;
____BAH_COMPILER_VAR_99->trimRight = string__trimRight;
____BAH_COMPILER_VAR_99->add = string__add;
struct string* elem =  ____BAH_COMPILER_VAR_99;
char * ____BAH_COMPILER_VAR_100 =arrToStr(tmpString);elem->set((struct string*)elem,____BAH_COMPILER_VAR_100);
long int lenRes =  len(res);

{
long nLength = lenRes;
if (res->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(res->data, (nLength+50)*sizeof(struct string));
res->data = newPtr;
}
res->data[lenRes] =  *elem;
res->length = nLength+1;
} else {
res->data[lenRes] =  *elem;
}
};
}
array(struct string)* ____BAH_COMPILER_VAR_101 = res;
return ____BAH_COMPILER_VAR_101;
};
struct string joinString(__BAH_ARR_TYPE_string a,char * sep){
long int i =  0;
struct string s =  string("");
long int max =  len(a) - 1;
while ((i<len(a))) {

                if (a->length <= i) {
                    printf("array (/opt/bah/string.bah:555): a[%d] with length %d\n", i, a->length);
                    exit(1);
                };
                struct string e =  a->data[i];
if ((e.length==0)) {
i =  i + 1;
continue;
}
char * ____BAH_COMPILER_VAR_102 =e.str((struct string*)&e);struct string tmpS =  string(____BAH_COMPILER_VAR_102);
if ((i!=max)) {
tmpS.append((struct string*)&tmpS,sep);
}
char * ____BAH_COMPILER_VAR_103 =tmpS.str((struct string*)&tmpS);s.append((struct string*)&s,____BAH_COMPILER_VAR_103);
i =  i + 1;
};
struct string ____BAH_COMPILER_VAR_104 = s;
return ____BAH_COMPILER_VAR_104;
};
char * splitStringBefore(struct string s,char * sp){
struct string sep =  string(sp);
if ((sep.length>=s.length)) {
char * ____BAH_COMPILER_VAR_105 = "";
return ____BAH_COMPILER_VAR_105;
}
long int sepIndex =  0;
long int foundIndex =  0;
long int i =  0;
while ((i<s.length)) {
char c =  s.charAt((struct string*)&s,i);
char sc =  sep.charAt((struct string*)&sep,sepIndex);
if ((c==sc)) {
if ((sepIndex==0)) {
foundIndex =  i - 1;
}
sepIndex =  sepIndex + 1;
if ((sepIndex==sep.length)) {
long int max =  s.length - foundIndex - 1;
s.trimRight((struct string*)&s,max);
char * ____BAH_COMPILER_VAR_106 = s.str((struct string*)&s);
return ____BAH_COMPILER_VAR_106;
}
}
else {
foundIndex =  0;
sepIndex =  0;
}
i =  i + 1;
};
char * ____BAH_COMPILER_VAR_107 = "";
return ____BAH_COMPILER_VAR_107;
};
struct string toLower(struct string s){
array(char)* ns = memoryAlloc(sizeof(array(char)));

ns->length = 0;
ns->elemSize = sizeof(char);
long int i =  0;
while ((i<s.length)) {
char c =  s.charAt((struct string*)&s,i);
if (isUpper(c)) {
c =  c + (char)32;
}

{
long nLength = len(ns);
if (ns->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(ns->data, (nLength+50)*sizeof(char));
ns->data = newPtr;
}
ns->data[len(ns)] =  c;
ns->length = nLength+1;
} else {
ns->data[len(ns)] =  c;
}
};
i =  i + 1;
};
char * ____BAH_COMPILER_VAR_108 =arrToStr(ns);struct string ____BAH_COMPILER_VAR_109 = string(____BAH_COMPILER_VAR_108);
return ____BAH_COMPILER_VAR_109;
};
int strHasPrefix(char * s,char * need){
long int i =  0;
long int nl =  strlen(need);
long int sl =  strlen(s);
if ((sl<nl)) {
int ____BAH_COMPILER_VAR_110 = false;
return ____BAH_COMPILER_VAR_110;
}
while ((i<nl)) {
if ((cpstringCharAt(s,i)!=cpstringCharAt(need,i))) {
int ____BAH_COMPILER_VAR_111 = false;
return ____BAH_COMPILER_VAR_111;
}
i =  i + 1;
};
int ____BAH_COMPILER_VAR_112 = true;
return ____BAH_COMPILER_VAR_112;
};
int strHasSuffix(char * s,char * need){
long int sl =  strlen(s);
long int nl =  strlen(need);
if ((nl>sl)) {
int ____BAH_COMPILER_VAR_113 = false;
return ____BAH_COMPILER_VAR_113;
}
long int i =  sl - nl;
while ((i<sl)) {
if ((cpstringCharAt(s,i)!=cpstringCharAt(need,i))) {
int ____BAH_COMPILER_VAR_114 = false;
return ____BAH_COMPILER_VAR_114;
}
i =  i + 1;
};
int ____BAH_COMPILER_VAR_115 = true;
return ____BAH_COMPILER_VAR_115;
};
void strTrimLeft(char ** s,long int i){
long int ls =  strlen(*s);
char * ns =  memoryAlloc(ls - i + 1);
memcpy(ns,noCheck( *s + i ),ls - i);
*s =  ns;
};
void strTrimRight(char ** s,long int i){
long int ls =  strlen(*s);
char * ns =  memoryAlloc(ls - i + 1);
memcpy(ns,*s,ls - i);
*s =  ns;
};
void strTrim(char ** s){
long int l =  strlen(*s);
long int i =  0;
while ((i<l)) {
char c =  cpstringCharAt(*s,i);
if ((isSpace(c)==0)) {
break;
}
i =  i + 1;
};
*s =  noCheck( *s + i );
};
long int strCount(char * src,char * needle){
long int i =  0;
long int count =  0;
long int countIndex =  0;
long int sl =  strlen(src);
long int nl =  strlen(needle);
while ((i<sl)) {
char c =  cpstringCharAt(src,i);
char sc =  cpstringCharAt(needle,countIndex);
if ((c==sc)) {
countIndex =  countIndex + 1;
}
else {
countIndex =  0;
}
if ((countIndex==nl)) {
count =  count + 1;
countIndex =  0;
}
i =  i + 1;
};
long int ____BAH_COMPILER_VAR_116 = count;
return ____BAH_COMPILER_VAR_116;
};
char * stdinput(){
char * buffer =  memoryAlloc(1025);
struct string response =  string("");
long int nDataLength =  read((void *)0,buffer,1024);
if ((nDataLength<1024)) {
response.append((struct string*)&response,buffer);
}
else {
while ((nDataLength>0)) {
response.append((struct string*)&response,buffer);
if ((nDataLength<1024)) {
long int trimAmm =  1024 - nDataLength;
response.trimRight((struct string*)&response,trimAmm);
break;
}
else {
nDataLength =  read((void *)0,buffer,1024);
}
};
}
response.trimRight((struct string*)&response,1);
char * ____BAH_COMPILER_VAR_117 = response.str((struct string*)&response);
return ____BAH_COMPILER_VAR_117;
};
void println(char * s){
char * ____BAH_COMPILER_VAR_118 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen(s);
long int strLen_1 = strlen("\n");
;                            
                        ____BAH_COMPILER_VAR_118 = memoryAllocSTR(1 + strLen_0 + strLen_1);
                        
                        strncpy(____BAH_COMPILER_VAR_118+currStrOff, s, strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_118+currStrOff, "\n", strLen_1);
                        currStrOff += strLen_1;
                        
                    }
                    write((void *)1,____BAH_COMPILER_VAR_118,strlen(s) + 1);
};
struct fileStream {
FILE* handle;
long int(*isValid)(struct fileStream* this);
void(*open)(struct fileStream* this,char * path,char * mode);
void(*close)(struct fileStream* this);
long int(*getPos)(struct fileStream* this);
void(*setPos)(struct fileStream* this,long int i);
long int(*getSize)(struct fileStream* this);
void(*rewind)(struct fileStream* this);
char(*getChar)(struct fileStream* this);
void(*setChar)(struct fileStream* this,char c);
void(*createFile)(struct fileStream* this,char * path);
long int(*writeFile)(struct fileStream* this,char * content);
void(*writePtr)(struct fileStream* this,void * a,long int s);
long int(*readPtr)(struct fileStream* this,void * a,long int s);
char *(*readContent)(struct fileStream* this);
array(char)*(*readBytes)(struct fileStream* this);
void(*writeBytes)(struct fileStream* this,array(char)* d);
};
long int fileStream__isValid(struct fileStream* this){
if ((this->handle==null)) {
long int ____BAH_COMPILER_VAR_119 = 0;
return ____BAH_COMPILER_VAR_119;
}
long int ____BAH_COMPILER_VAR_120 = 1;
return ____BAH_COMPILER_VAR_120;
};
void fileStream__open(struct fileStream* this,char * path,char * mode){
this->handle =  fopen(path,mode);
};
void fileStream__close(struct fileStream* this){
if ((this->isValid((struct fileStream*)this)==0)) {
return;
}
fclose(this->handle);
};
long int fileStream__getPos(struct fileStream* this){
if ((this->isValid((struct fileStream*)this)==0)) {
long int ____BAH_COMPILER_VAR_122 = 0;
return ____BAH_COMPILER_VAR_122;
}
long int ____BAH_COMPILER_VAR_123 = ftell(this->handle);
return ____BAH_COMPILER_VAR_123;
};
void fileStream__setPos(struct fileStream* this,long int i){
if ((this->isValid((struct fileStream*)this)==0)) {
return;
}
fseek(this->handle,i,0);
};
long int fileStream__getSize(struct fileStream* this){
if ((this->isValid((struct fileStream*)this)==0)) {
long int ____BAH_COMPILER_VAR_125 = -1;
return ____BAH_COMPILER_VAR_125;
}
long int oldPos =  this->getPos((struct fileStream*)this);
fseek(this->handle,0,2);
long int size =  ftell(this->handle);
this->setPos((struct fileStream*)this,oldPos);
long int ____BAH_COMPILER_VAR_126 = size;
return ____BAH_COMPILER_VAR_126;
};
void fileStream__rewind(struct fileStream* this){
rewind(this->handle);
};
char fileStream__getChar(struct fileStream* this){
char c =  getc(this->handle);
char ____BAH_COMPILER_VAR_127 = c;
return ____BAH_COMPILER_VAR_127;
};
void fileStream__setChar(struct fileStream* this,char c){
fputc(c,this->handle);
};
void fileStream__createFile(struct fileStream* this,char * path){
this->open((struct fileStream*)this,path,"w");
this->close((struct fileStream*)this);
};
long int fileStream__writeFile(struct fileStream* this,char * content){
if ((this->isValid((struct fileStream*)this)==0)) {
long int ____BAH_COMPILER_VAR_128 = -1;
return ____BAH_COMPILER_VAR_128;
}
fputs(content,this->handle);
long int ____BAH_COMPILER_VAR_129 = 1;
return ____BAH_COMPILER_VAR_129;
};
void fileStream__writePtr(struct fileStream* this,void * a,long int s){
fwrite(a,s,1,this->handle);
};
long int fileStream__readPtr(struct fileStream* this,void * a,long int s){
long int ____BAH_COMPILER_VAR_130 = fread(a,s,1,this->handle);
return ____BAH_COMPILER_VAR_130;
};
char * fileStream__readContent(struct fileStream* this){
if ((this->isValid((struct fileStream*)this)==0)) {
char * ____BAH_COMPILER_VAR_131 = "invalid";
return ____BAH_COMPILER_VAR_131;
}
long int sz =  this->getSize((struct fileStream*)this);
char * r =  memoryAlloc(sz + 1);
long int l =  fread(r,1,sz,this->handle);
if ((sz!=l)) {
array(char)* rarr =  strAsArr(r);

{
long nLength = l;
if (rarr->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(rarr->data, (nLength+50)*sizeof(char));
rarr->data = newPtr;
}
rarr->data[l] =  (char)0;
rarr->length = nLength+1;
} else {
rarr->data[l] =  (char)0;
}
};
}
char * ____BAH_COMPILER_VAR_132 = r;
return ____BAH_COMPILER_VAR_132;
};
__BAH_ARR_TYPE_char fileStream__readBytes(struct fileStream* this){
array(char)* r = memoryAlloc(sizeof(array(char)));

r->length = 0;
r->elemSize = sizeof(char);
allocateArray(r,this->getSize((struct fileStream*)this));
this->readPtr((struct fileStream*)this,noCheck( r -> data ),len(r));
array(char)* ____BAH_COMPILER_VAR_133 = r;
return ____BAH_COMPILER_VAR_133;
};
void fileStream__writeBytes(struct fileStream* this,__BAH_ARR_TYPE_char d){
this->writePtr((struct fileStream*)this,noCheck( d -> data ),len(d));
};
struct fileMap {
long int handle;
long int size;
void * p;
char *(*open)(struct fileMap* this,char * fileName);
long int(*isValid)(struct fileMap* this);
void(*close)(struct fileMap* this);
};
char * fileMap__open(struct fileMap* this,char * fileName){
this->handle =  open(fileName,noCheck( O_RDWR ),noCheck( S_IRUSR | S_IWUSR ));
struct stat ____BAH_COMPILER_VAR_134 = {};
struct stat sb =  ____BAH_COMPILER_VAR_134;
fstat(this->handle,&sb);
this->size =  sb.st_size;
this->p =  mmap(0,sb.st_size,noCheck( PROT_READ | PROT_WRITE ),noCheck( MAP_SHARED ),this->handle,0);
char * ____BAH_COMPILER_VAR_135 = this->p;
return ____BAH_COMPILER_VAR_135;
};
long int fileMap__isValid(struct fileMap* this){
if ((this->handle<0)) {
long int ____BAH_COMPILER_VAR_136 = 0;
return ____BAH_COMPILER_VAR_136;
}
long int ____BAH_COMPILER_VAR_137 = 1;
return ____BAH_COMPILER_VAR_137;
};
void fileMap__close(struct fileMap* this){
if ((this->handle==-1)) {
return;
}
munmap(this->p,this->size);
close(this->handle);
};
__BAH_ARR_TYPE_cpstring listFiles(char * dir){
array(char *)* files = memoryAlloc(sizeof(array(char *)));

files->length = 0;
files->elemSize = sizeof(char *);
DIR* d =  opendir(dir);
struct dirent* file =  readdir(d);
while ((file!=null)) {
long int lf =  len(files);
if ((strcmp(file->d_name,".")==0)) {
file =  readdir(d);
continue;
}
if ((strcmp(file->d_name,"..")==0)) {
file =  readdir(d);
continue;
}

{
long nLength = lf;
if (files->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(files->data, (nLength+50)*sizeof(char *));
files->data = newPtr;
}
files->data[lf] =  __STR(file->d_name);
files->length = nLength+1;
} else {
files->data[lf] =  __STR(file->d_name);
}
};
file =  readdir(d);
};
closedir(d);
array(char *)* ____BAH_COMPILER_VAR_139 = files;
return ____BAH_COMPILER_VAR_139;
};
long int fileExists(char * path){
long int is =  access(path,0);
if ((is==0)) {
long int ____BAH_COMPILER_VAR_140 = 1;
return ____BAH_COMPILER_VAR_140;
}
long int ____BAH_COMPILER_VAR_141 = 0;
return ____BAH_COMPILER_VAR_141;
};
int removeFile(char * name){
if ((remove(name)==0)) {
int ____BAH_COMPILER_VAR_142 = true;
return ____BAH_COMPILER_VAR_142;
}
int ____BAH_COMPILER_VAR_143 = false;
return ____BAH_COMPILER_VAR_143;
};
long int getLastModified(char * name){
struct stat attr;
stat(name,&attr);
long int ____BAH_COMPILER_VAR_144 = attr.st_ctime;
return ____BAH_COMPILER_VAR_144;
};
void delete(void * a,long int i){
array(void *)* arr = memoryAlloc(sizeof(array(void *)));

arr->length = 0;
arr->elemSize = sizeof(void *);
arr =  a;
long int length =  len(arr);
if (((i>=length)||(i<0))) {
char * ____BAH_COMPILER_VAR_145 =intToStr(i);char * ____BAH_COMPILER_VAR_146 =intToStr(length);char * ____BAH_COMPILER_VAR_147 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("delete: cannot delete array element [");
long int strLen_1 = strlen(____BAH_COMPILER_VAR_145);
long int strLen_2 = strlen("] of array with length: ");
long int strLen_3 = strlen(____BAH_COMPILER_VAR_146);
long int strLen_4 = strlen(".");
;                            
                        ____BAH_COMPILER_VAR_147 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2 + strLen_3 + strLen_4);
                        
                        strncpy(____BAH_COMPILER_VAR_147+currStrOff, "delete: cannot delete array element [", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_147+currStrOff, ____BAH_COMPILER_VAR_145, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_147+currStrOff, "] of array with length: ", strLen_2);
                        currStrOff += strLen_2;
                        
                        strncpy(____BAH_COMPILER_VAR_147+currStrOff, ____BAH_COMPILER_VAR_146, strLen_3);
                        currStrOff += strLen_3;
                        
                        strncpy(____BAH_COMPILER_VAR_147+currStrOff, ".", strLen_4);
                        currStrOff += strLen_4;
                        
                    }
                    __BAH_panic(____BAH_COMPILER_VAR_147,"/opt/bah/builtin.bah:155");
}
long int elemSize =  noCheck( arr -> elemSize );
char* data =  noCheck( arr -> data );
void * destOffset =  elemSize * i;
i =  i+1;
void * offset =  elemSize * i;
char* src =  (long int)data + (long int)offset;
char* dest =  (long int)data + (long int)destOffset;
long int rightNB =  length - (i-1);
memmove(dest,src,rightNB * elemSize);
noCheck( arr -> length = length - 1 );
};
long int __bah_strcmp(char * a,char * b){
if (((void *)a==null)) {
a =  "";
}
if (((void *)b==null)) {
b =  "";
}
long int ____BAH_COMPILER_VAR_148 = strcmp(a,b);
return ____BAH_COMPILER_VAR_148;
};
#define strcmp __bah_strcmp
long int __bah_strlen(char * s){
if (((void *)s==null)) {
long int ____BAH_COMPILER_VAR_149 = 0;
return ____BAH_COMPILER_VAR_149;
}
long int ____BAH_COMPILER_VAR_150 = strlen(s);
return ____BAH_COMPILER_VAR_150;
};
#define strlen __bah_strlen
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/bio.h>
#include <sys/select.h>
#include <sys/time.h>
#include <poll.h>
#include <net/if.h>
struct command {
char * command;
int error;
long int status;
FILE* handle;
char *(*run)(struct command* this);
array(char)*(*runBytes)(struct command* this);
};
char * command__run(struct command* this);
__BAH_ARR_TYPE_char command__runBytes(struct command* this);
struct command command(char * s);
long int exec(char * s,__BAH_ARR_TYPE_cpstring args);
extern struct mutex __httpDNSmutex;
struct response_buffer {
char * data;
long int len;
char *(*str)(struct response_buffer* this);
array(char)*(*arr)(struct response_buffer* this);
void(*append)(struct response_buffer* this,char * buff,long int s);
};
char * response_buffer__str(struct response_buffer* this);
__BAH_ARR_TYPE_char response_buffer__arr(struct response_buffer* this);
void response_buffer__append(struct response_buffer* this,char * buff,long int s);
struct http_socket {
long int sockfd;
long int timeout;
int(*isOpened)(struct http_socket* this);
int(*open)(struct http_socket* this);
int(*setInterface)(struct http_socket* this,char * s);
int(*terminate)(struct http_socket* this);
int(*close)(struct http_socket* this);
int(*reach)(struct http_socket* this,char * host,long int port);
int(*listen)(struct http_socket* this,long int port);
long int(*accept)(struct http_socket* this);
int(*send)(struct http_socket* this,char * s);
int(*sendBytes)(struct http_socket* this,array(char)* bytes);
struct response_buffer(*receiveBuff)(struct http_socket* this);
char *(*receive)(struct http_socket* this);
array(char)*(*receiveBytes)(struct http_socket* this);
};
int http_socket__isOpened(struct http_socket* this);
int http_socket__open(struct http_socket* this);
int http_socket__setInterface(struct http_socket* this,char * s);
int http_socket__terminate(struct http_socket* this);
int http_socket__close(struct http_socket* this);
int http_socket__reach(struct http_socket* this,char * host,long int port);
int http_socket__listen(struct http_socket* this,long int port);
long int http_socket__accept(struct http_socket* this);
int http_socket__send(struct http_socket* this,char * s);
int http_socket__sendBytes(struct http_socket* this,__BAH_ARR_TYPE_char bytes);
struct response_buffer http_socket__receiveBuff(struct http_socket* this);
char * http_socket__receive(struct http_socket* this);
__BAH_ARR_TYPE_char http_socket__receiveBytes(struct http_socket* this);
int isSocket(struct http_socket s);
struct http_url {
struct string path;
struct string host;
struct string proto;
struct string port;
};
struct http_url* parseUrl(char * cps);
extern array(char)* __HTTP_urlSafeChars;
char * urlEncode(char * s);
char * urlDecode(char * encoded);
void sigchld_handler(long int signo);
void __Bah_http_handle_client(void * s,long int cli);
typedef long int http_serverError;
#define HTTP_SERVER_NO_ERROR (http_serverError)0
#define HTTP_SERVER_SOCKET_ERROR (http_serverError)1
#define HTTP_SERVER_BIND_ERROR (http_serverError)2
#define HTTP_SERVER_LISTEN_ERROR (http_serverError)3
extern array(struct http_socket)* globalHTTPsockets;
void http_quit_handler(long int signo);
void http_broken_pipe(long int signo);
struct http_server {
long int port;
long int running;
struct http_socket socket;
http_serverError error;
char * linux_interface;
void (*handle)(struct http_server*,long int);
void (*done)(struct http_server*);
void(*stop)(struct http_server* this);
void(*listenAndServe)(struct http_server* this);
};
void http_server__stop(struct http_server* this);
void http_server__listenAndServe(struct http_server* this);
void __Bah_http_handle_client(void * sp,long int cli);
void http_send(long int connfd,char * s);
char * http_receive(long int connfd);
#define HTTP_OK 200
#define HTTP_NOT_FOUND 404
#define HTTP_FORBIDDEN 400
#define HTTP_ERROR 500
#define HTTP_REDIRECT 301
#define HTTP_PARTIAL_CONTENT 206
struct http_transport {
struct http_socket socket;
array(struct string*)* headers;
long int code;
struct string* body;
array(char)* file;
struct http_url* url;
char * method;
char * path;
void(*setHeader)(struct http_transport* this,char * name,char * value);
char *(*getHeader)(struct http_transport* this,char * name);
void(*write)(struct http_transport* this,char * content);
};
void http_transport__setHeader(struct http_transport* this,char * name,char * value);
char * http_transport__getHeader(struct http_transport* this,char * name);
void http_transport__write(struct http_transport* this,char * content);
struct http_response {
struct http_socket socket;
array(struct string*)* headers;
long int code;
struct string* body;
array(char)* file;
struct http_url* url;
char * method;
char * path;
void(*setHeader)(struct http_transport* this,char * name,char * value);
char *(*getHeader)(struct http_transport* this,char * name);
void(*write)(struct http_transport* this,char * content);
int headersSent;
void(*send)(struct http_response* this);
int(*flush)(struct http_response* this,array(char)* bytes);
};
void http_response__send(struct http_response* this);
int http_response__flush(struct http_response* this,__BAH_ARR_TYPE_char bytes);
struct http_response http_response(long int connfd);
struct http_response* makeRespFromBody(struct response_buffer response);
struct response_buffer makeRawHttpsRequest(char * host,char * message,long int timeout);
struct http_request {
struct http_socket socket;
array(struct string*)* headers;
long int code;
struct string* body;
array(char)* file;
struct http_url* url;
char * method;
char * path;
void(*setHeader)(struct http_transport* this,char * name,char * value);
char *(*getHeader)(struct http_transport* this,char * name);
void(*write)(struct http_transport* this,char * content);
char * request;
array(struct string)* form;
long int timeout;
struct http_response*(*send)(struct http_request* this);
int(*parseForm)(struct http_request* this);
char *(*getFormValue)(struct http_request* this,char * name);
char *(*getCookie)(struct http_request* this,char * name);
char *(*getIP)(struct http_request* this);
};
struct http_response* http_request__send(struct http_request* this);
int http_request__parseForm(struct http_request* this);
char * http_request__getFormValue(struct http_request* this,char * name);
char * http_request__getCookie(struct http_request* this,char * name);
char * http_request__getIP(struct http_request* this);
struct http_request http_request(long int connfd);
struct http_response get(char * url);
struct http_response post(char * url,__BAH_ARR_TYPE_cpstring args);
long int isPortAvailable(long int port);
#include <stddef.h>
struct reflectElement {
long int size;
char * type;
char * name;
int isArray;
struct reflectElement* arrayElem;
int isStruct;
array(struct reflectElement)* structLayout;
long int offset;
void * value;
void *(*calculateOffset)(struct reflectElement* this,void * origin);
};
void * reflectElement__calculateOffset(struct reflectElement* this,void * origin);
typedef array(struct reflectElement)* __BAH_ARR_TYPE_reflectElement;
struct reflectElement __reflect(void * v,long int s,char * t,char * n,int isArr,struct reflectElement* ae,int isStruct,__BAH_ARR_TYPE_reflectElement sl,long int offset);
#define JSON_TYPE_STRING 0
#define JSON_TYPE_INT 1
#define JSON_TYPE_FLOAT 2
#define JSON_TYPE_ARRAY 3
#define JSON_TYPE_MAP 4
char * toJson(struct reflectElement e);
void json_scan_inner(void * this,struct reflectElement e,int isMember);
struct jsonElement {
long int type;
char * key;
char * content;
array(struct jsonElement*)* children;
struct jsonElement*(*map)(struct jsonElement* this,char * key);
char *(*str)(struct jsonElement* this);
void(*scan)(struct jsonElement* this,struct reflectElement e);
};
struct jsonElement* jsonElement__map(struct jsonElement* this,char * key);
char * jsonElement__str(struct jsonElement* this);
void jsonElement__scan(struct jsonElement* this,struct reflectElement e);
void json_scan_inner(void * thisp,struct reflectElement e,int isMember);
struct jsonElement* parseJson(char * s);
char * jsonEscapeStr(char * s);
char * toJson__inner(struct reflectElement e,int isMember,long int tabs);
char * toJson(struct reflectElement e);
#include <stdlib.h>
char * absPath(char * path){
char * p =  realpath(path,null);
char * ____BAH_COMPILER_VAR_151 = p;
return ____BAH_COMPILER_VAR_151;
};
char * getCurrentPath(){
char * cwd =  memoryAlloc(4096);
getcwd(cwd,4096);
char * ____BAH_COMPILER_VAR_152 = cwd;
return ____BAH_COMPILER_VAR_152;
};
int isInside(char * basePath,char * subPath){
char * abs1 =  absPath(basePath);
char * abs2 =  absPath(subPath);
int ____BAH_COMPILER_VAR_153 = (strHasPrefix(subPath,basePath)==true);
return ____BAH_COMPILER_VAR_153;
};
void setCurrentPath(char * s){
chdir(s);
};
#include <time.h>
#define TIME_MS 1000000
#define TIME_S 1000000000
#define TIME_MIN 60000000000
struct time {
long int timestamp;
void(*now)(struct time* this);
char *(*format)(struct time* this,char * a);
long int(*since)(struct time* this);
};
void time__now(struct time* this){
this->timestamp =  time(0);
};
char * time__format(struct time* this,char * a){
long int lt =  localtime(&this->timestamp);
char * date =  memoryAlloc(1024);
strftime(date,1024,a,lt);
char * ____BAH_COMPILER_VAR_154 = date;
return ____BAH_COMPILER_VAR_154;
};
long int time__since(struct time* this){
long int nt =  time(0);
long int r =  nt - this->timestamp;
long int ____BAH_COMPILER_VAR_155 = r;
return ____BAH_COMPILER_VAR_155;
};
long int getTimeUnix(){
struct timespec ____BAH_COMPILER_VAR_156 = {};
struct timespec ts =  ____BAH_COMPILER_VAR_156;
timespec_get(&ts,noCheck( TIME_UTC ));
long int s =  ts.tv_sec * 1000000000 + ts.tv_nsec;
long int ____BAH_COMPILER_VAR_157 = s;
return ____BAH_COMPILER_VAR_157;
};
struct javel_security {
long int timeout;
int(*test)(struct javel_security* this,struct http_request req);
};
int javel_security__test(struct javel_security* this,struct http_request req){
int ____BAH_COMPILER_VAR_158 = true;
return ____BAH_COMPILER_VAR_158;
};
struct javel_route {
char * path;
char * base;
void (*handle)(struct javel_route*,struct http_request,struct http_response);
void (*error)(struct javel_route*,long int,struct http_request,struct http_response);
struct javel_security security;
void(*use)(struct javel_route* this,struct http_request req,struct http_response resp);
long int(*match)(struct javel_route* this,char * path);
};
void javel_route__use(struct javel_route* this,struct http_request req,struct http_response resp){
if ((this->security.timeout>0)) {
if ((this->security.test((struct javel_security*)&this->security,req)==false)) {
if ((this->error!=null)) {
this->error((struct javel_route*)this,400,req,resp);
}
else {
char * ____BAH_COMPILER_VAR_159 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("Error: 400 accessing '");
long int strLen_1 = strlen(req.path);
long int strLen_2 = strlen("' and unconfigured javel error for route '");
long int strLen_3 = strlen(this->path);
long int strLen_4 = strlen("'.");
;                            
                        ____BAH_COMPILER_VAR_159 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2 + strLen_3 + strLen_4);
                        
                        strncpy(____BAH_COMPILER_VAR_159+currStrOff, "Error: 400 accessing '", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_159+currStrOff, req.path, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_159+currStrOff, "' and unconfigured javel error for route '", strLen_2);
                        currStrOff += strLen_2;
                        
                        strncpy(____BAH_COMPILER_VAR_159+currStrOff, this->path, strLen_3);
                        currStrOff += strLen_3;
                        
                        strncpy(____BAH_COMPILER_VAR_159+currStrOff, "'.", strLen_4);
                        currStrOff += strLen_4;
                        
                    }
                    resp.write((struct http_transport*)&resp,____BAH_COMPILER_VAR_159);
}
return;
}
}
else {
this->handle((struct javel_route*)this,req,resp);
}
};
long int javel_route__match(struct javel_route* this,char * path){
if ((strcmp(path, this->path) == 0)) {
long int ____BAH_COMPILER_VAR_161 = strlen(this->path);
return ____BAH_COMPILER_VAR_161;
}
struct string ps =  string(path);
struct string tps =  string(this->path);
if ((tps.hasSuffix((struct string*)&tps,"/")&&ps.hasPrefix((struct string*)&ps,this->path))) {
long int ____BAH_COMPILER_VAR_162 = strlen(this->path);
return ____BAH_COMPILER_VAR_162;
}
long int ____BAH_COMPILER_VAR_163 = 0;
return ____BAH_COMPILER_VAR_163;
};
void * __javel_global_ptr;
void __javel_handler(struct http_server* s,long int connfd);
struct javel {
struct http_server* s;
array(struct javel_route)* routes;
long int port;
void(*launch)(struct javel* this);
};
void javel__launch(struct javel* this){
__javel_global_ptr =  this;
struct http_server* ____BAH_COMPILER_VAR_164 = memoryAlloc(sizeof(struct http_server));
____BAH_COMPILER_VAR_164->running = 1;
____BAH_COMPILER_VAR_164->error = HTTP_SERVER_NO_ERROR;
____BAH_COMPILER_VAR_164->linux_interface = "";
____BAH_COMPILER_VAR_164->stop = http_server__stop;
____BAH_COMPILER_VAR_164->listenAndServe = http_server__listenAndServe;
____BAH_COMPILER_VAR_164->port = this->port;
this->s =  ____BAH_COMPILER_VAR_164;
this->s->handle =  __javel_handler;
this->s->listenAndServe((struct http_server*)this->s);
};
void __javel_internal_route(struct http_request req,struct http_response resp);
void __javel_handler(struct http_server* s,long int connfd){
struct http_request req =  http_request(connfd);
struct http_response resp =  http_response(connfd);
struct javel* jav =  __javel_global_ptr;
struct javel_route ____BAH_COMPILER_VAR_165 = {};
____BAH_COMPILER_VAR_165.path = "";
____BAH_COMPILER_VAR_165.base = "";
____BAH_COMPILER_VAR_165.handle = null;
____BAH_COMPILER_VAR_165.error = null;
____BAH_COMPILER_VAR_165.use = javel_route__use;
____BAH_COMPILER_VAR_165.match = javel_route__match;
struct javel_route bestRoute =  ____BAH_COMPILER_VAR_165;
long int bestScore =  0;
if (strHasPrefix(req.path,"/__javel/")) {
__javel_internal_route(req,resp);
return;
}
long int i =  0;
for (; (i<len(jav->routes)); i =  i+1) {

                if (jav->routes->length <= i) {
                    printf("array (/home/alois/Documents/github/javel/javel.bah:96): jav->routes[%d] with length %d\n", i, jav->routes->length);
                    exit(1);
                };
                struct javel_route route =  jav->routes->data[i];
long int score =  route.match((struct javel_route*)&route,req.path);
if ((score>bestScore)) {
bestScore =  score;
bestRoute =  route;
}
};
if ((bestRoute.handle!=null)) {
bestRoute.use((struct javel_route*)&bestRoute,req,resp);
}
else {
resp.write((struct http_transport*)&resp,"Error: unconfigured javel route.");
resp.send((struct http_response*)&resp);
}
};
char * javel_parsePath(char * path,struct http_response resp){
struct string p =  string(path);
if (p.hasSuffix((struct string*)&p,"/")) {
p.append((struct string*)&p,"index.html");
}
else if ((p.count((struct string*)&p,".")==0)) {
p.append((struct string*)&p,".html");
}
if (p.hasSuffix((struct string*)&p,".html")) {
resp.setHeader((struct http_transport*)&resp,"content-type","text/html");
}
else if (p.hasSuffix((struct string*)&p,".css")) {
resp.setHeader((struct http_transport*)&resp,"content-type","text/css");
}
else if (p.hasSuffix((struct string*)&p,".js")) {
resp.setHeader((struct http_transport*)&resp,"content-type","text/javascript");
}
else if (p.hasSuffix((struct string*)&p,".json")) {
resp.setHeader((struct http_transport*)&resp,"content-type","application/json");
}
else if (p.hasSuffix((struct string*)&p,".png")) {
resp.setHeader((struct http_transport*)&resp,"content-type","image/png");
}
else if (p.hasSuffix((struct string*)&p,".jpeg")) {
resp.setHeader((struct http_transport*)&resp,"content-type","image/jpeg");
}
else if (p.hasSuffix((struct string*)&p,".mov")) {
resp.setHeader((struct http_transport*)&resp,"content-type","video/mov");
}
else if (p.hasSuffix((struct string*)&p,".mp4")) {
resp.setHeader((struct http_transport*)&resp,"content-type","video/mp4");
}
char * ____BAH_COMPILER_VAR_167 = p.str((struct string*)&p);
return ____BAH_COMPILER_VAR_167;
};
#define __javel_js_runtime "\n<script>\njavel = {\n    load: (e, url, params)=>{\n        let elem\n        if (e instanceof HTMLElement) {\n            elem = e\n        } else {\n            elem = document.querySelector(e)\n        }\n        fetch(url, params).then(r=>{\n            r.text().then(t=>{\n                elem.innerHTML = t\n            })\n        })\n        evt = new EventSource(\"/__javel/load/\"+url)\n    },\n    onload: (callback)=> {\n        window.addEventListener('load', callback)\n    }\n};\n\nwindow.onload = ()=> {\n    javelModules = document.querySelectorAll(\"javel\")\n    for (i in javelModules) {\n        m = javelModules[i]\n        if (!(m instanceof HTMLElement)) {\n            continue\n        }\n        javel.load(m, m.getAttribute(\"src\"))\n    }\n}\n\n</script>\n"
#define JAVEL_BUFFER_SIZE 4096
void javel_default_route_error(struct javel_route* route,long int code,struct http_request req,struct http_response resp){
char * ____BAH_COMPILER_VAR_168 =intToStr(code);char * ____BAH_COMPILER_VAR_169 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("Error: ");
long int strLen_1 = strlen(____BAH_COMPILER_VAR_168);
long int strLen_2 = strlen(" accessing '");
long int strLen_3 = strlen(req.path);
long int strLen_4 = strlen("' and unconfigured javel error for route '");
long int strLen_5 = strlen(route->path);
long int strLen_6 = strlen("'");
;                            
                        ____BAH_COMPILER_VAR_169 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2 + strLen_3 + strLen_4 + strLen_5 + strLen_6);
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, "Error: ", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, ____BAH_COMPILER_VAR_168, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, " accessing '", strLen_2);
                        currStrOff += strLen_2;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, req.path, strLen_3);
                        currStrOff += strLen_3;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, "' and unconfigured javel error for route '", strLen_4);
                        currStrOff += strLen_4;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, route->path, strLen_5);
                        currStrOff += strLen_5;
                        
                        strncpy(____BAH_COMPILER_VAR_169+currStrOff, "'", strLen_6);
                        currStrOff += strLen_6;
                        
                    }
                    resp.write((struct http_transport*)&resp,____BAH_COMPILER_VAR_169);
resp.code =  code;
resp.send((struct http_response*)&resp);
};
void javel_serveFile(struct javel_route* route,struct http_request req,struct http_response resp){
struct fileStream ____BAH_COMPILER_VAR_170 = {};
____BAH_COMPILER_VAR_170.handle= null;
____BAH_COMPILER_VAR_170.isValid = fileStream__isValid;
____BAH_COMPILER_VAR_170.open = fileStream__open;
____BAH_COMPILER_VAR_170.close = fileStream__close;
____BAH_COMPILER_VAR_170.getPos = fileStream__getPos;
____BAH_COMPILER_VAR_170.setPos = fileStream__setPos;
____BAH_COMPILER_VAR_170.getSize = fileStream__getSize;
____BAH_COMPILER_VAR_170.rewind = fileStream__rewind;
____BAH_COMPILER_VAR_170.getChar = fileStream__getChar;
____BAH_COMPILER_VAR_170.setChar = fileStream__setChar;
____BAH_COMPILER_VAR_170.createFile = fileStream__createFile;
____BAH_COMPILER_VAR_170.writeFile = fileStream__writeFile;
____BAH_COMPILER_VAR_170.writePtr = fileStream__writePtr;
____BAH_COMPILER_VAR_170.readPtr = fileStream__readPtr;
____BAH_COMPILER_VAR_170.readContent = fileStream__readContent;
____BAH_COMPILER_VAR_170.readBytes = fileStream__readBytes;
____BAH_COMPILER_VAR_170.writeBytes = fileStream__writeBytes;
struct fileStream fs =  ____BAH_COMPILER_VAR_170;
char * ____BAH_COMPILER_VAR_171 =javel_parsePath(req.path,resp);char * ____BAH_COMPILER_VAR_172 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen(route->base);
long int strLen_1 = strlen("/");
long int strLen_2 = strlen(____BAH_COMPILER_VAR_171);
;                            
                        ____BAH_COMPILER_VAR_172 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2);
                        
                        strncpy(____BAH_COMPILER_VAR_172+currStrOff, route->base, strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_172+currStrOff, "/", strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_172+currStrOff, ____BAH_COMPILER_VAR_171, strLen_2);
                        currStrOff += strLen_2;
                        
                    }
                    char * p =  ____BAH_COMPILER_VAR_172;
fs.open((struct fileStream*)&fs,p,"r");
long int l =  fs.getSize((struct fileStream*)&fs);
if (((isInside(route->base,p)==false)||(fs.isValid((struct fileStream*)&fs)==0))) {
fs.close((struct fileStream*)&fs);
if ((route->error!=null)) {
route->error((struct javel_route*)route,404,req,resp);
}
else {
javel_default_route_error(route,404,req,resp);
}
return;
}
array(char)* r = memoryAlloc(sizeof(array(char)));

r->length = 0;
r->elemSize = sizeof(char);
allocateArray(r,JAVEL_BUFFER_SIZE);
char * ____BAH_COMPILER_VAR_174 =req.getHeader((struct http_transport*)&req,"range");struct string startStr =  string(____BAH_COMPILER_VAR_174);
long int start =  0;
if ((startStr.length!=0)) {
startStr.trimLeft((struct string*)&startStr,6);
startStr.trimRight((struct string*)&startStr,1);
char * ____BAH_COMPILER_VAR_175 =startStr.str((struct string*)&startStr);start =  strToInt(____BAH_COMPILER_VAR_175);
resp.setHeader((struct http_transport*)&resp,"accept-range","bytes");
char * ____BAH_COMPILER_VAR_176 =intToStr(start);char * ____BAH_COMPILER_VAR_177 =intToStr(l-1);char * ____BAH_COMPILER_VAR_178 =intToStr(l);char * ____BAH_COMPILER_VAR_179 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("bytes ");
long int strLen_1 = strlen(____BAH_COMPILER_VAR_176);
long int strLen_2 = strlen("-");
long int strLen_3 = strlen(____BAH_COMPILER_VAR_177);
long int strLen_4 = strlen("/");
long int strLen_5 = strlen(____BAH_COMPILER_VAR_178);
;                            
                        ____BAH_COMPILER_VAR_179 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2 + strLen_3 + strLen_4 + strLen_5);
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, "bytes ", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, ____BAH_COMPILER_VAR_176, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, "-", strLen_2);
                        currStrOff += strLen_2;
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, ____BAH_COMPILER_VAR_177, strLen_3);
                        currStrOff += strLen_3;
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, "/", strLen_4);
                        currStrOff += strLen_4;
                        
                        strncpy(____BAH_COMPILER_VAR_179+currStrOff, ____BAH_COMPILER_VAR_178, strLen_5);
                        currStrOff += strLen_5;
                        
                    }
                    resp.setHeader((struct http_transport*)&resp,"content-range",____BAH_COMPILER_VAR_179);
resp.code =  HTTP_PARTIAL_CONTENT;
fs.setPos((struct fileStream*)&fs,start);
}
char * ____BAH_COMPILER_VAR_180 =intToStr(l - start);resp.setHeader((struct http_transport*)&resp,"content-length",____BAH_COMPILER_VAR_180);
resp.write((struct http_transport*)&resp,"");
resp.send((struct http_response*)&resp);
while ((fs.getPos((struct fileStream*)&fs)<l)) {
long int i =  0;
while (((i<JAVEL_BUFFER_SIZE)&&(start + i<l))) {

{
long nLength = i;
if (r->length < nLength+1) {
if ((nLength+1) % 50 == 0 || nLength == 0) {
void * newPtr = memoryRealloc(r->data, (nLength+50)*sizeof(char));
r->data = newPtr;
}
r->data[i] =  fs.getChar((struct fileStream*)&fs);
r->length = nLength+1;
} else {
r->data[i] =  fs.getChar((struct fileStream*)&fs);
}
};
i =  i + 1;
};
start =  start + i;
if ((i<JAVEL_BUFFER_SIZE)) {
noCheck( r -> length = i );
}
resp.flush((struct http_response*)&resp,r);
};
fs.close((struct fileStream*)&fs);
};
void javel_serveHTML(struct javel_route* route,struct http_request req,struct http_response resp){
struct fileStream ____BAH_COMPILER_VAR_181 = {};
____BAH_COMPILER_VAR_181.handle= null;
____BAH_COMPILER_VAR_181.isValid = fileStream__isValid;
____BAH_COMPILER_VAR_181.open = fileStream__open;
____BAH_COMPILER_VAR_181.close = fileStream__close;
____BAH_COMPILER_VAR_181.getPos = fileStream__getPos;
____BAH_COMPILER_VAR_181.setPos = fileStream__setPos;
____BAH_COMPILER_VAR_181.getSize = fileStream__getSize;
____BAH_COMPILER_VAR_181.rewind = fileStream__rewind;
____BAH_COMPILER_VAR_181.getChar = fileStream__getChar;
____BAH_COMPILER_VAR_181.setChar = fileStream__setChar;
____BAH_COMPILER_VAR_181.createFile = fileStream__createFile;
____BAH_COMPILER_VAR_181.writeFile = fileStream__writeFile;
____BAH_COMPILER_VAR_181.writePtr = fileStream__writePtr;
____BAH_COMPILER_VAR_181.readPtr = fileStream__readPtr;
____BAH_COMPILER_VAR_181.readContent = fileStream__readContent;
____BAH_COMPILER_VAR_181.readBytes = fileStream__readBytes;
____BAH_COMPILER_VAR_181.writeBytes = fileStream__writeBytes;
struct fileStream fs =  ____BAH_COMPILER_VAR_181;
char * ____BAH_COMPILER_VAR_182 =javel_parsePath(req.path,resp);char * ____BAH_COMPILER_VAR_183 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen(route->base);
long int strLen_1 = strlen("/");
long int strLen_2 = strlen(____BAH_COMPILER_VAR_182);
;                            
                        ____BAH_COMPILER_VAR_183 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2);
                        
                        strncpy(____BAH_COMPILER_VAR_183+currStrOff, route->base, strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_183+currStrOff, "/", strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_183+currStrOff, ____BAH_COMPILER_VAR_182, strLen_2);
                        currStrOff += strLen_2;
                        
                    }
                    char * p =  ____BAH_COMPILER_VAR_183;
fs.open((struct fileStream*)&fs,p,"r");
long int l =  fs.getSize((struct fileStream*)&fs);
if (((isInside(route->base,p)==false)||(fs.isValid((struct fileStream*)&fs)==0))) {
fs.close((struct fileStream*)&fs);
if ((route->error!=null)) {
route->error((struct javel_route*)route,404,req,resp);
}
else {
javel_default_route_error(route,404,req,resp);
}
return;
}
char * cont =  fs.readContent((struct fileStream*)&fs);
char * ____BAH_COMPILER_VAR_185 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen(__javel_js_runtime);
long int strLen_1 = strlen(cont);
;                            
                        ____BAH_COMPILER_VAR_185 = memoryAllocSTR(1 + strLen_0 + strLen_1);
                        
                        strncpy(____BAH_COMPILER_VAR_185+currStrOff, __javel_js_runtime, strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_185+currStrOff, cont, strLen_1);
                        currStrOff += strLen_1;
                        
                    }
                    resp.write((struct http_transport*)&resp,____BAH_COMPILER_VAR_185);
fs.close((struct fileStream*)&fs);
resp.send((struct http_response*)&resp);
};
struct javel_eventStream {
struct http_response response;
int sentHeader;
int(*send)(struct javel_eventStream* this,struct reflectElement e);
};
int javel_eventStream__send(struct javel_eventStream* this,struct reflectElement e){
if ((this->sentHeader==false)) {
this->response.setHeader((struct http_transport*)&this->response,"content-type","text/event-stream");
this->response.write((struct http_transport*)&this->response,"\n\n");
this->response.send((struct http_response*)&this->response);
this->sentHeader =  true;
}
char * ____BAH_COMPILER_VAR_186 =toJson(e);struct string j =  string(____BAH_COMPILER_VAR_186);
j.replace((struct string*)&j,"\n"," ");
char * ____BAH_COMPILER_VAR_187 =j.str((struct string*)&j);char * ____BAH_COMPILER_VAR_188 =null;
                    {
                        long int currStrOff = 0;
                        long int strLen_0 = strlen("data: ");
long int strLen_1 = strlen(____BAH_COMPILER_VAR_187);
long int strLen_2 = strlen("\n\n");
;                            
                        ____BAH_COMPILER_VAR_188 = memoryAllocSTR(1 + strLen_0 + strLen_1 + strLen_2);
                        
                        strncpy(____BAH_COMPILER_VAR_188+currStrOff, "data: ", strLen_0);
                        currStrOff += strLen_0;
                        
                        strncpy(____BAH_COMPILER_VAR_188+currStrOff, ____BAH_COMPILER_VAR_187, strLen_1);
                        currStrOff += strLen_1;
                        
                        strncpy(____BAH_COMPILER_VAR_188+currStrOff, "\n\n", strLen_2);
                        currStrOff += strLen_2;
                        
                    }
                    array(char)* ____BAH_COMPILER_VAR_189 =strToArr(____BAH_COMPILER_VAR_188);int ____BAH_COMPILER_VAR_190 = this->response.flush((struct http_response*)&this->response,____BAH_COMPILER_VAR_189);
return ____BAH_COMPILER_VAR_190;
};
struct javel_jsonForm {
struct http_request request;
struct http_response response;
struct jsonElement* form;
int(*parseForm)(struct javel_jsonForm* this);
void(*scan)(struct javel_jsonForm* this,struct reflectElement e);
void(*send)(struct javel_jsonForm* this,struct reflectElement e);
};
int javel_jsonForm__parseForm(struct javel_jsonForm* this){
if ((strcmp(this->request.method, "POST") != 0)) {
int ____BAH_COMPILER_VAR_191 = false;
return ____BAH_COMPILER_VAR_191;
}
char * ct =  this->request.getHeader((struct http_transport*)&this->request,"content-type");
if ((strcmp(ct, "application/json") != 0)) {
int ____BAH_COMPILER_VAR_192 = false;
return ____BAH_COMPILER_VAR_192;
}
char * ____BAH_COMPILER_VAR_193 =this->request.body->str((struct string*)this->request.body);this->form =  parseJson(____BAH_COMPILER_VAR_193);
int ____BAH_COMPILER_VAR_194 = (this->form!=null);
return ____BAH_COMPILER_VAR_194;
};
void javel_jsonForm__scan(struct javel_jsonForm* this,struct reflectElement e){
if ((this->parseForm((struct javel_jsonForm*)this)==false)) {
return;
}
this->form->scan((struct jsonElement*)this->form,e);
};
void javel_jsonForm__send(struct javel_jsonForm* this,struct reflectElement e){
char * j =  toJson(e);
this->response.setHeader((struct http_transport*)&this->response,"content-type","application/json");
this->response.write((struct http_transport*)&this->response,j);
this->response.send((struct http_response*)&this->response);
};
void __javel_internal_route(struct http_request req,struct http_response resp){
if (strHasPrefix(req.path,"/__javel/load/")) {
struct javel_eventStream ____BAH_COMPILER_VAR_196 = {};
____BAH_COMPILER_VAR_196.sentHeader = false;
____BAH_COMPILER_VAR_196.send = javel_eventStream__send;
____BAH_COMPILER_VAR_196.response = resp;
struct javel_eventStream evts =  ____BAH_COMPILER_VAR_196;
struct javel* jav =  __javel_global_ptr;
struct javel_route ____BAH_COMPILER_VAR_197 = {};
____BAH_COMPILER_VAR_197.path = "";
____BAH_COMPILER_VAR_197.base = "";
____BAH_COMPILER_VAR_197.handle = null;
____BAH_COMPILER_VAR_197.error = null;
____BAH_COMPILER_VAR_197.use = javel_route__use;
____BAH_COMPILER_VAR_197.match = javel_route__match;
struct javel_route bestRoute =  ____BAH_COMPILER_VAR_197;
long int bestScore =  0;
struct string p =  string(req.path);
p.trimLeft((struct string*)&p,strlen("/__javel/load"));
long int i =  0;
for (; (i<len(jav->routes)); i =  i+1) {

                if (jav->routes->length <= i) {
                    printf("array (/home/alois/Documents/github/javel/javel.bah:161): jav->routes[%d] with length %d\n", i, jav->routes->length);
                    exit(1);
                };
                struct javel_route route =  jav->routes->data[i];
char * ____BAH_COMPILER_VAR_198 =p.str((struct string*)&p);long int score =  route.match((struct javel_route*)&route,____BAH_COMPILER_VAR_198);
if ((score>bestScore)) {
bestScore =  score;
bestRoute =  route;
}
};
if ((bestRoute.handle!=null)) {
if (((bestRoute.handle==javel_serveFile)||(bestRoute.handle==javel_serveHTML))) {
println("ok");
}
}
}
};
long int main(__BAH_ARR_TYPE_cpstring args){
struct javel ____BAH_COMPILER_VAR_199 = {};
____BAH_COMPILER_VAR_199.s= null;
____BAH_COMPILER_VAR_199.routes = memoryAlloc(sizeof(array(struct javel_route)));
            ____BAH_COMPILER_VAR_199.routes->length = 0;
            ____BAH_COMPILER_VAR_199.routes->elemSize = sizeof(struct javel_route);
            ____BAH_COMPILER_VAR_199.launch = javel__launch;
____BAH_COMPILER_VAR_199.port = 8080;
struct javel j =  ____BAH_COMPILER_VAR_199;
struct javel_route ____BAH_COMPILER_VAR_200 = {};
____BAH_COMPILER_VAR_200.path = "";
____BAH_COMPILER_VAR_200.base = "";
____BAH_COMPILER_VAR_200.handle = null;
____BAH_COMPILER_VAR_200.error = null;
____BAH_COMPILER_VAR_200.use = javel_route__use;
____BAH_COMPILER_VAR_200.match = javel_route__match;
____BAH_COMPILER_VAR_200.path = "/static/";
____BAH_COMPILER_VAR_200.base = "pages";
____BAH_COMPILER_VAR_200.handle = javel_serveFile;
struct javel_route ____BAH_COMPILER_VAR_201 = {};
____BAH_COMPILER_VAR_201.path = "";
____BAH_COMPILER_VAR_201.base = "";
____BAH_COMPILER_VAR_201.handle = null;
____BAH_COMPILER_VAR_201.error = null;
____BAH_COMPILER_VAR_201.use = javel_route__use;
____BAH_COMPILER_VAR_201.match = javel_route__match;
____BAH_COMPILER_VAR_201.path = "/";
____BAH_COMPILER_VAR_201.base = "pages";
____BAH_COMPILER_VAR_201.handle = javel_serveHTML;
j.routes = memoryAlloc(sizeof(array(struct javel_route)));

j.routes->length = 2;
j.routes->elemSize = sizeof(struct javel_route);
j.routes->data = memoryAlloc(sizeof(struct javel_route) * 50);j.routes->data[0] = ____BAH_COMPILER_VAR_200;
j.routes->data[1] = ____BAH_COMPILER_VAR_201;
j.launch((struct javel*)&j);
long int ____BAH_COMPILER_VAR_202 = 0;
return ____BAH_COMPILER_VAR_202;
};

    void __BAH_init() {

        __BAH_panic_chan =  null;
__BAH_initaoptabahahttpbbah();
__BAH_initaoptabahajsonbbah();
__javel_global_ptr =  null;


    };
    