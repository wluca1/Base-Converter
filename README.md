<!DOCTYPE html>
<html lang="pt-br">
<head>
    <meta charset="UTF-8">
</head>
<body>
    <h1>Sorteador de Nomes em C</h1>
    <p>Este é um simples programa em C que fornece 2 opções de conversão - Decimal para uma Base à escolha do Usuário ou Base à escolha do Usuário para Decimal<
    <h2>Instruções</h2>
    <ol>
        <li>Para utilizar, basta executar o programa em um compilador C.</li>
        <li>Digite um Número cujo queira fazer a conversão.</li>
        <li>Digite uma Base cujo queira fazer a conversão.</li>
        <li>Escolha qual tipo de conversão você queira</li>
        <li>Então o programa imprimirá a conversão na tela</li>
    </ol>
    <h2>Estrutura do Código</h2>
    <p>O código é dividido em diferentes funções que são responsáveis por diferentes aspectos do programa.</p>
    <ul>
        <li>A função <code>conversao1()</code> é responsável por efetuar a conversão de Decimal para uma Base escolhida pelo usuário.</li>
        <li>A função <code>conversao2()</code> é responsável por efetuar a conversão de uma Base Escolhida pelo usuário para Decimal.</li>
    </ul>
    <p>No <code>main()</code>, é declarada a variável <code>n</code>, <code>b</code> e <code>opcao</code>, para o usuário por digitar o valor, a base e a qual conversão ele deseja fazer, as funções <code>conversao1</code> e  <code>conversao2</code> são chamadas a depender de sua escolha no Switch Case. Ao final do código ele imprime o que o usuário desejar.
