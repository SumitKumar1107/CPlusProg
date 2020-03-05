data()
Temperature()
airquality
str(airquality)
Temperature <- airquality$Temp

hist(Temperature,main="maximum daily temperature at la guardia airport",
xlab="temperature in degree fahrenheit",xlim=c(50,100),col="darkmagenta",freq=FALSE)

hist(Temperature,freq=FALSE)

marks =c(75,89,66,52,90,68,83,94,77,60,38,47,87,65,97,49,65,70,73,81,85,77,83,56,63,79,69,82,84,70,62,75,29,88,74,37,81,76,74,63,69,73,91,
         87,76,58,63,60,71,82)
cwidth = seq(29,99,by=10)
cwidth
h=hist(marks,main="grade of 50 students",col="blue",breaks=cwidth)
text(h$mids,h$counts,labels=h$counts,adj=c(0.5,-0.5))
duration=cut(marks,cwidth,right=FALSE)
duration
freqdist=table(duration)
freqdist
cbind(freqdist)
hist(marks,col="blue",freq=FALSE)
par(new=TRUE)
plot(h$mids,freqdist,type='o',main="Frequency Curve")

cumfreq=c(0,cumsum(freqdist))
cumfreq
plot(cwidth,cumfreq,type='o')
lines(cwidth,cumfreq)

nic = c(1.09,1.92,2.31,1.79,2.28,1.74,1.47,1.97,0.85,1.24,1.58,2.03,1.70,
        2.17,2.55,2.11,1.86,1.9,1.68,1.51,1.64,0.72,1.69,1.85,1.82,1.79,2.46,1.88,
        2.08,1.67,1.37,1.93,1.4,1.64,2.09,1.75,1.63,2.37,1.75,1.69)
nic
h=boxplot(nic)

boxplot(nic,horizontal = TRUE)
title(main="nicotin content")
quantile(nic)
sk=(1.6375+1.9850-2*1.7700)/(1.9850-1.6375)
sk

lap=c(98,84,97,93,88,57,100,84,100,84,78,83,68,84,47,93,90,57,94,83)
lap
nlap=c(63,83,97,93,52,74,83,63,88,86,81,54,99,91,49,80,81,89,78,89,67,89,70)
nlap
l=boxplot(lap,horizontal = TRUE)
nl=boxplot(nlap,horizontal = TRUE)
l$out
nl$out
quantile(lap)

qqplot(beaver2$temp[beaver2$activ==1],beaver2$temp[beaver2$activ==0])
abline(a=0,b=1)

qqnorm(beaver2$temp[beaver2$activ==1],main="active")
qqline(beaver2$temp[beaver2$activ==1])


qqnorm(beaver2$temp[beaver2$activ==0],main="Inactive")
qqline(beaver2$temp[beaver2$activ==0])


x <- c(3.89,4.75,6.33,4.75,7.21,5.78,5.80,5.20,6.64)
qqnorm(x)
qqline(x)

p <- c(3,7,25,10,15,6,1,25,15,7)
a <- c(48,44,40,38,33,21,20,12,1,18)
qqplot(p,a)


c1 <-c(91.5,92.18,95.39,91.79,89.07,94.72,89.21)
c2 <-c(89.18,90.95,93.21,97.19,97.04,91.07,92.75)
qqplot(c1,c2)
abline(a=0,b=1)
