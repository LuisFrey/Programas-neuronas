%% Solve Simple Classification Problem Using Perceptron
% This example shows how to use a perceptron to solve a simple 
% classification logical-OR problem.

% Copyright 2015 The MathWorks, Inc.

x = [0 0 0 0 1 1 1 1;...    %%entradas 1
     0 0 1 1 0 0 1 1;...    %%entradas 2
     0 1 0 1 0 1 0 1];      %%entradas 3
    
 
y = [0 0 0 0 0 0 0 1];    %%salidas

%Creación
net = perceptron;     %Se crea Red Perceptrón
%Entenamiento
net = train(net,x,y); %Se entrena Red Perceptrón
view(net)             % Se muestra capas entradas neuronas etc de la red

%Validación
yx = net(x);   


wb = formwb(net,net.b,net.iw,net.lw)   %Form bias and weights into single vector
[b,iw,lw] = separatewb(net,wb)  %separate wb en pesos y bias


%IMplementación
gensim(net)
