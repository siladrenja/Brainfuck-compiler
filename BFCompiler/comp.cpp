#include <iostream>
#include <vector>
int main(){
std::vector<char> reg(1);
unsigned long long ind = 0;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
do{
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]--;
}while(reg[ind]!=0);
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
std::cout<<reg[ind];
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
do{
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]--;
}while(reg[ind]!=0);
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
std::cout<<reg[ind];
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
std::cout<<reg[ind];
std::cout<<reg[ind];
reg[ind]++;
reg[ind]++;
reg[ind]++;
std::cout<<reg[ind];
do{
reg[ind]--;
}while(reg[ind]!=0);
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
do{
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]--;
}while(reg[ind]!=0);
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
std::cout<<reg[ind];
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
do{
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]--;
}while(reg[ind]!=0);
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]--;
std::cout<<reg[ind];
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
std::cout<<reg[ind];
reg[ind]++;
reg[ind]++;
reg[ind]++;
std::cout<<reg[ind];
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
std::cout<<reg[ind];
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
reg[ind]--;
std::cout<<reg[ind];
do{
reg[ind]--;
}while(reg[ind]!=0);
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
do{
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
ind++;
while(ind > reg.size()){
reg.push_back(0);}
reg[ind]--;
}while(reg[ind]!=0);
if(ind > 0){
ind--;
}else throw std::runtime_error("trying to access register before first register");
reg[ind]++;
std::cout<<reg[ind];
do{
reg[ind]--;
}while(reg[ind]!=0);
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
reg[ind]++;
std::cout<<reg[ind];
return 0;
}