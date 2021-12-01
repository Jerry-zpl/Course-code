getwd()
setwd("C:/Users/DELL/Desktop/experiment")
getwd()

install.packages('arules')
library('arules') 

a=read.transactions("basket.txt",sep="\t")
a

inspect(a[1:5])
summary(a)

itemFrequencyPlot(a,support = 0.1)

apriori(a)
a.rules<-apriori(a)

summary(a.rules)
inspect(a.rules)

inspect(head(a.rules,by='lift'))

