# -*- coding: utf-8 -*-
"""
Created on Fri Sep 21 11:26:45 2018

@author: Roberto
"""

import networkx as nx 
import matplotlib.pyplot as plt
import numpy as np

kt=nx.karate_club_graph()
kt.node[0]["state"]=1
kt.node[33]["state"]=0

edge_list=list(kt.edges.data())
#Assigning values to nodes
for i in range(1,33):
    kt.node[i]["state"]=0.5

#Assigning weight to the edges
for i in range(0,len(edge_list)):
    edge_list[i][2]["weight"]=0.5
    

#old=kt
#beta=10
#dt=0.01
#diff_coeff=5    
##Adaptive diffusion algorithm
#for l in range(0,100):
#    old=nodes
#    for i in range(1,33):
#        for j in range():
#            kt.node[i]["state"]=old.node[i]["state"]+dt*diff_coeff*summ_diff[i]*edge_list[1][2]["weight"]
#        
    



plt.plot(2,2,1)
nx.draw(kt,node_size=50)
plt.title("spring layout")

    
#plt.plot(cum_distr(ba,n),linewidth=2.0)
#plt.xscale('log')
#plt.yscale("log")
#plt.xlabel('number of edges')
#plt.ylabel('number of nodes')
#plt.title('cumulative node degree distribution')
#plt.show()


        
#plt.hist(cum_distr(er,n),linewidth=2.0)
#plt.subplot(2, 2, 1)
#plt.xlabel('number of edges')
#plt.ylabel('number of nodes')
#plt.title('er cumulative node degree distribution')
#plt.hist(cum_distr(ws,n),linewidth=2.0)
#plt.subplot(2, 2, 2)
#plt.xlabel('number of edges')
#plt.ylabel('number of nodes')
#plt.title('cumulative node degree distribution')
#plt.hist(cum_distr(ba,n),linewidth=2.0)
#plt.subplot(2, 2, 3)
#plt.xlabel('number of edges')
#plt.ylabel('number of nodes')
#plt.title('cumulative node degree distribution')
#plt.show()

#plt.figure(figsize=(10,10))
#plt.subplot(2, 2, 1)
#nx.draw_circular(er,node_size=10)
#plt.subplot(2, 2, 2)
#nx.draw_circular(ws,node_size=10)
#plt.subplot(2, 2, 3)
#nx.draw_circular(ba,node_size=10)
#plt.show()