# Projeto-Tartaruga

<b> PROJETO FINAL - TARTARUGA </b>
<br>

Felipe Camargo TIA: 41920503 <br>
Mauricio Mourão TIA: 41908074

<p> Inicialmente iríamos usar WSL, mas como não ficou bem claro nossa resolução decidimos por usar uma Máquina Virtual. Usamos Linux (Ubuntu) na VMWare Workstation e como forma de paralelização usamos a estratégia pthreads.
Toda a parte do código contendo threads foi retirada das aulas.
</p>

Para compilar e executar o código:
<ol>

<li> Primeiro passo: <br>
  
```
sudo gcc -g -Wall -o prog prog.c -lpthread
```
 <li> Segundo passo: <br>
   
```  
./prog
```
