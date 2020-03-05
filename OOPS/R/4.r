
cat1=c(91.5,92.18,95.39,91.79,89.07,94.72,89.21)
cat2=c(89.18,90.95,93.21,97.19,97.04,91.07,92.75)
qqplot(cat1,cat2)
title("CATALYST")
par(mfrow=c(1,2))
qqnorm(cat1,main="Catalyst 1")
qqline(cat1)
qqnorm(cat2,main="Catalyst 2")
qqline(cat2)


Arizona=c(3,7,25,10,15,6,1,25,15,7)
Phoenix=c(48,44,40,38,33,21,20,12,1,18)
qqplot(Phoenix,Arizona)
par(mfrow=c(1,2))
qqnorm(Arizona,main="Arizona")
qqline(Arizona)
qqnorm(Phoenix,main="Phoenix")
qqline(Phoenix)

par(mfrow=c(1,2))

qqnorm(beaver2$temp[beaver2$activ==0],main="Inactive")
qqline(beaver2$temp[beaver2$activ==0])
qqnorm(beaver2$temp[beaver2$activ==1],main="Active")
qqline(beaver2$temp[beaver2$activ==1])


normal=c(3.89,4.75,6.33,4.75,7.21,5.78,5.80,5.20,6.64)
qqnorm(normal,main="Normal")
qqline(normal)