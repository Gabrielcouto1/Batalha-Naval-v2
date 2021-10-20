# Batalha Naval v2
### Trabalho 2 de Programação Procedimental. O programa segue orientações do professor e foi escrito inteiramente em C.

>Código escrito por Gabriel Couto de Freitas em 2021
>
>O programa opera um jogo simples de batalha naval com dois modos, PLAY e CORR, e com uma quantidade de T torpedos para atirar.
>
>Para informar qual modo de jogo e a quantidade de torpedos que serão utilizados, o usuário deve inserir essas informações no momento do lançamento da seguinte maneira:
>
>Tabela 1  |Ordem dos argumentos
>----------|--------------------             
>Maneira 1 |./exe -t n -m MD            
>Maneira 2 |./exe -m MD -t n
>
>Onde n recebe um valor inteiro e maior que 0
>E MD recebe CORR ou PLAY
>Quando no modo CORR,todas as naves serao mostradas na tela. É um modo utilizado para correção e desenvolvimento do programa.
>
>O oceano inicial aparece na tela.
>
<div align="center">
  <img height="250em" src="https://i.imgur.com/oXQ58Bj.png">
</div>
>Em seguida, o usuário deve digitar qual setor do oceano ele deseja atirar (ex:A1). Se ele digitar algum caractere inválido, isso é escrito na
>tela e o programa encerra. 
>
>Se ele atirar em algum setor ja atirado ele deve atirar novamente sem perder
>torpedo algum. Se ele acertar um submarino, a mensagem de acerto é escrita na tela e o oceano aparece
>novamente com um '*' no lugar que ele acertou. Em seguida mostra o que resta no seu inventário.
>
>Caso ele erre o tiro, aparece uma mensagem informando que ele afundou o torpedo no mar e um 'W' é escrito nesse setor do oceano.
<div align="center">
  <img height="280em" src="https://i.imgur.com/w1v0FT2.png">
</div>


>O programa encerra se: o usuario acabar com todos destruidores e submar''inos (escreve na tela que ele ganhou 
>o jogo) ou se o usuario nao tiver mais torpedos e ainda existir naves no oceano(escreve na tela que ele perdeu
>o jogo).
> 
>Se, ao compilar o programa o usuário inserir argumentos inválidos (vide tabela 1), o programa escreve na tela qual foi o erro de compilação e 
>mostra como deve ser feito.
