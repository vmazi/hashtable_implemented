#ifndef HASHTABLE_H_
#define HASHTABLE_H_

struct hashnode;//typedef for hashnode
struct hashtable;//typdef for hashtable
struct hashtable* root;//reference to root hashtable in program;
void destroy();//frees hashtable after use
struct hashtable* constructor(int size);//creates hashtable with (size) buckets
int rol(unsigned value, int places);//rotates bits from left to right
int hash(char const *input,int size);//calls ROL on key to generate hashtable index
int set(char* key, void* value);//insert value into hashtable, return 1 if succes, 0 if not;
void* get(char*key);//retrieves value with key
void* delete (char* key);//delets value with key returning unsigned reference to value or null if not found
float load();//returns number of items/max size, i.e. load factor

#endif // HASHTABLE_H_

