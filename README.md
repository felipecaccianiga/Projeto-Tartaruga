# Projeto-Tartaruga

<b> Felipe Camargo TIA: 41920503 <br>
Mauricio Mourão TIA: 41908074 </b>

<p> Inicialmente iríamos usar WSL, mas como não ficou bem claro nossa resolução decidimos por usar uma Máquina Virtual. Usamos Linux (Ubuntu) na VMWare Workstation e como forma de paralelização usamos a estratégia pthreads.
Toda a parte do código contendo threads foi retirada das aulas.
</p>

Para compilar e executar o código:
<ol>

<li> Primeiro passo (Compilar): <br>
  
```
sudo gcc -g -Wall -o prog prog.c -lpthread
```
 <li> Segundo passo (Executar): <br>
   
```  
./prog
```
   
<li> Se tudo der certo, a saída do código será assim: <br>
  
![saídaTartaruga](https://user-images.githubusercontent.com/56848726/141028449-f05602fe-61fb-4728-aa8c-a2359ae5bd7c.png)
  

