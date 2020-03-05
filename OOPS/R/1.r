color <-c('red','green','yellow')
print(color)
print(class(color))
var_x <- "hello"
var = c(0,1,2,3)
cat(var)

a=c(1,2,3,4)
b=a+5
print(b)
sqrt(a)

a<-c(1,2,3)
b<-c(10,11,12,13)
a+b

a=c(2,4,6,3,1,5)
b=sort(a,decreasing=TRUE)
print(b)

list1 <- list(c(2,5,3),21.3,"sin")
print(list1)

m=matrix(c('a','b','c','d','e','f'),nrow=2,ncol=3)
print(m)

a<-array(c('green','yellow'),dim=c(2,2,2))
print(a)

apple_colors <- c('green','green','yellow','red','red','red','green')
factor_apple <- factor(apple_colors)
print(factor_apple)
print(nlevels(factor_apple))

bmi <- data.frame(gender = c("male","male","female"),height=c(152,171.5,165),weight=c(81,93,78),age=c(42,38,26))
print(bmi)

dat<-data.frame(id=letters[1:10],x=1:10,y=11:20)
print(dat)

v<-c(2,5.5,6)
t<-c(8,3,4)
print(!v)
print(v%%t)
print(v%/%t)
print(v^t)
print(v>t)
print(v==t)
print(v!=t)

v1<- 8
v2<- 12
t<-1:10
print(v1%in%t)
print(v2%in%t)


cat("the class of var_x is",class(var_x),"\n")


myString <- "hello world"
print(myString)
cat(mystring)
{
  x <- readline(prompt="Enter first number :")
  y <- readline(prompt="Enter second number :")
  
  x <- as.integer(x)
  y <- as.integer(y)
  
  z = x + y
  w = x-y
  
  print(paste("Addition of two number is :",z))
  print(paste("subtraction of two number is :",w))
}

print(ls())
