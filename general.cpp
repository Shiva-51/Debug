/* /\_/\
  (=・_・)　
  / >  \> ..........
*/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

//*find_by_order
//order_of_key
template <typename T> using ordered_set =
tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =
tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

//DEBUG
#ifndef ONLINE_JUDGE
#define debug(x...) cerr<<#x<<" = "; __print(x);cerr<<'\n';
#else
#define debug(x...)
#endif
//END

//Definitions
template<class T>void __print(T &n);
template<class T,class V>void __print(pair<T,V>p);
template<class T>void __print(vector<T>&l);
template<class T,class V>void __print(map<T,V>&d);
template<class T,class V>void __print(map<T,V,greater<T>>&d);
template<class T,class V>void __print(unordered_map<T,V>&d);
template<class T>void __print(set<T>&s);
template<class T>void __print(multiset<T>&s);
template<class T>void __print(ordered_set<T>&s);
template<class T>void __print(deque<T>&l);
template<class T>void __print(ordered_multiset<T>&s); //64-__bu..clzll() -> 1_set_bit

//Debug
template<class T>void __print(T &n){cerr<<n;}
template<class T,class V>void __print(pair<T,V>p){cerr<<"(";__print(p.first);cerr<<":";__print(p.second);cerr<<")";}
template<class T>void __print(vector<T>&l){cerr<<"[ ";for(T &i:l){__print(i);cerr<<" ";}cerr<<"]";}
template<class T,class V>void __print(map<T,V>&d){cerr<<"{ ";for(auto &i:d){__print(i);cerr<<" ";}cerr<<"}";}
template<class T,class V>void __print(unordered_map<T,V>&d){cerr<<"{ ";for(auto &i:d){__print(i);cerr<<" ";}cerr<<"}";}
template<class T>void __print(set<T>&s){cerr<<"( ";for(auto &i:s){__print(i);cerr<<" ";}cerr<<")";}
template<class T>void __print(unordered_set<T>&s){cerr<<"( ";for(auto &i:s){__print(i);cerr<<" ";}cerr<<")";}
template<class T>void __print(multiset<T>&s){cerr<<"( ";for(auto &i:s){__print(i);cerr<<" ";}cerr<<")";}
template<class T,class V>void __print(map<T,V,greater<T>>&d){cerr<<"{ ";for(auto &i:d){__print(i);cerr<<" ";}cerr<<"}";}
template<class T,class V>void __print(multimap<T,V>&d){cerr<<"{ ";for(auto &i:d){__print(i);cerr<<" ";}cerr<<"}";}
template<class T>void __print(ordered_set<T>&s){cerr<<"( ";for(auto &i:s){__print(i);cerr<<" ";}cerr<<")";}
template<class T>void __print(ordered_multiset<T>&s){cerr<<"( ";for(auto &i:s){__print(i);cerr<<" ";}cerr<<")";}
template<class T>void __print(deque<T>&l){cerr<<"[ ";for(T &i:l){__print(i);cerr<<" ";}cerr<<"]";}
template<typename T,typename... Types> void __print(T &var1,Types...var2){__print(var1);cerr<<", ";__print(var2...);}
/***************************************************************************************************************************************/
