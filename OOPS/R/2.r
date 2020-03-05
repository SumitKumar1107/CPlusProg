x<-1:10
 ifelse(x<5 | x>8,x,0)
 
 x <- c("what","is","truth") 
 if("Truth" %in% x){ 
   print("Truth is found the first time") 
 } else if ("truth" %in% x) { 
   print("truth is found the second time") 
 } else { 
   print("No truth found") 
 }
 
 
vec<-c(1,2,3,4,5)
for(val in vec)
{
  print(val)
}

v<-c("hello","while")
cnt<-2
while(cnt<7)
{
  print(v)
  cnt=cnt+1
}

color = "green"
switch(color,"red"={print("apple")},"yellow"={print("banana")},"green"={print("grapes")})

print(seq(32,44))
print(mean(25:82))
print(sum(1:5))



num = as.integer(readline(prompt= "enter a number"))

if(num<0){
  print("enter a positive number")
}else{
  sum<-0
}

while(num>0){
  sum=sum+num
  num=num-1
}
print(paste("the sum is",sum))