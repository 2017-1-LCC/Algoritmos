# Algoritmos

## Introdução ( Conceitos básicos de variável entrada e saída )

Iae galera vou tentar explicar aqui um pouco sobre algoritmos, o primeiro conceito é o de *variável*, que nada mais é do que um espaço na memória, mas como assim? tipo os algoritmos resolvem problemas e para isso eles passam por três etapas básicas.

* Entrada
* Saída
* Processamento

a entrada e saída é de fácil entendimento, imagina que você precisa criar um sistema para autenticar um usuário por exemplo: o facebook, agora você é um funcionário do facebook e precisa que o usuário seja cadastrado para entrar no site, primeira coisa que você precisa é mostrar uma saída como por exemplo:
````
escreva(“digite seu login : ”)
escreva(“digite sua senha: “)
````
para que o usuário entenda que ele o que ele precisa fazer, é claro que no facebook não é o comando *escreva* que faz isso, mas todas as linguagens tem algum comando para mostrar uma saída, é fundamental fazer isso, exemplo:
* java
````java
System.out.println(“Digite sua senha”)
````
* c
````c
printf(“Digite sua senha: “)
````
* phyton
````phyton
print(“Digite sua senha: “)
````
* php
````php
<?php echo “<p>Digite sua senha: </p> ?>
````
* portugol
````
escreva(“Digite sua senha: “)
````
independente da linguagem vamos ter que mostrar algo na tela, seja para solicitar alguma ação do usuário como por exemplo digitar sua senha ou seu e-mail ou seu CPF, ou seja para mostrar um resultado como o valor da soma de dois números.
 Até aqui falamos sobre Saída, espero que tenha ficado claro que significa a saída, o próximo passo é receber as entradas do usuário, essas entradas são exatamente o que foi solicitado, como no exemplo anterior temos que colocar o email e senha
podemos fazer algo tipo: 
````
escreva("Digite seu login: ")
leia(login)
escreva("Digite sua senha: ")
leia(senha)
````
no primeiro passo mostramos uma saída digite seu login e logo após vamos "pegar" esse login, depois mostramos a mensagem digite sua senha e pegamos essa senha, até aqui estamos vendo entrada/saída e variável, as variáveis são *email* e *senha*
nesse momento já podemos fazer algoritmos simples para treinar, vou passar alguns aqui:

### 1 - faça um algortimo que lê nome e idade e mostra na tela depois.

### 2 - faça um algortimo que lê nome, email e senha e mostra na tela depois.

### 3 - faça um algortimo que lê três nomes de frutas e mostra na tela depois.

### 4 - faça um algortimo que lê três cores e mostra na tela depois.

*é muito importante fazer os exercícios por mais básicos que sejam, a repetição é muito boa para pegar a sinxate ( como se escreve o código )*

## Processamento 

O que pode ser entendido como processamento? um algortimo que soma pega duas notas e retorna uma média é um processamento?, não ele tem um processamento, que é justamente o momento que se se soma as duas notas e divide por 2 e se atribui o valor a uma nova variável
que podemos chamar de média, então o processamento seria algo tipo:

média = (primeira_nota + segunda_nota) / 2

nesse momento passamos por um processamento, esse processamento poderia fazer algo tipo, se a média for maior que 7 aprovado, se não reprovado, mas vamos deixar o *se senão* para um outro momento, o que precisamos entender aqui é o processamento e o quanto ele é importante, 
o processamento pode ser chamado de, regra de negócio, formula, o processamento é uma parte muito importante, tipo vc pode pegar as duas notas corretamente mas se na hora de fazer o processamento para encontrar a média vc não somar as duas notas e depois dividir por dois, vair dar erro
e o pior de tudo é que não vai acusar o erro com uma mensagem, tipo imagine que vc faça *média = primeira_nota + segunda_nota / 2* sem os parenteses isso vai dar errado porque primeiramente ele vai dividir a segunda nota por dois e depois somar com a primeira nota.

agora vamos treinar fazer processamento:

### 1 - faça um algortimo que lê duas notas mostra a média na tela depois.

### 2 - faça um algortimo que lê três notas mostra a média na tela depois.

iai foi fácil, conseguiu entender até aqui? é importante saber se você está conseguindo entender essa primeira parte de entrada , saída e processamento, se estiver com alguma dúvida é melhor revisar procurar outras fontes e sempre praticar...

## Estrutura de decisão ( se senão , if )

e *se* eu tivesse estudado pra prova?
e *se* eu ganhasse na mega sena?
o *se* ou *if* é aquele momento em que você quer decidir se vai pela esquerda ou direita, se toma mais uma ou vai pra casa, se é Botafogo ou Fluminense ( rs.. :D ), agora falando sério... usamos o *se* em muitos casos.. vamos voltar ao facebook
e agora que já temos o login e senha digitado pelo usuário, nosso programa vai autorizar ou não o acesso ao perfil.
````
escreva("Digite seu login: ")
leia(login)
escreva("Digite sua senha: ")
leia(senha)
se(login é válido E senha é válida)
    escreva("você pode acessar o sistema")
    senao
    escreva("você não pode acessar o sistema")
fimse
````

