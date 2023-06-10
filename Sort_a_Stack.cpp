#include <bits/stdc++.h> 

void rec2(stack<int> &st,int num){
	if(st.empty()){st.push(num); return;}
	if(st.top()<=num){st.push(num); return;}

	int x=st.top();
	st.pop();
	rec2(st,num);
	st.push(x);
	return;
}
void rec(stack<int> &st){
	if(st.empty()) return;

	int num=st.top();
	st.pop();
	rec(st);
	if(st.empty() or st.top()<=num) st.push(num);
	else{
		rec2(st,num);
	}
}
void sortStack(stack<int> &stack)
{
	//https://www.codingninjas.com/codestudio/problems/sort-a-stack_8230787?challengeSlug=striver-sde-challenge&leftPanelTab=1
	rec(stack);
}