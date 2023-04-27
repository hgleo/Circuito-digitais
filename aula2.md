# Circuitos Codificadores e decodificadores

## - Codificação/Decodificação é o processo de converter um valor não binário, normalmente externo ao circuito em valor binário e vice e versa

## - Existem diferentes tipos de códigos binárias, com utilização mais adequada para algumas situações

## - Destes grupos se destacam os códigos BCD (Binary Coded Decimal), que representam os valores decimais  ( 0-9 ) em um conjunto de 4 bits, geralmente

## -  O BCD 8421 é sistema mais usual, pois corresponde ao que seria uma conversão simples de base. Os valroes 8,4,2,1 representam os "pesos" de cada bit associado

## - Existem outros BCD

### - BCD 7420: Apresenta o menor número de bits "1" possível, reduzindo o consumo de enerrgia

### - BCD 2421: Apresenta caráter auto-complementar, ou seja, a inversão de bits corresponde ao complemento de 9

### - BCD 5211: Idem

### DEC | 8421  | 5211 |  2421  | 7421

### 0   | 0000  | 0000 | 0000 |  0000  

### 1   | 0001  | 0001 | 0001 |  0001

### 2   | 0010  | 0011 | 0010 |  0010

### 3   | 0011  | 0101 | 0011 |  0011

### 4   | 0100  | 0111 | 0100 |  0100

### 5   | 0101  | 1000 | 1011 |  0101

### 6   | 0110  | 1010 | 1100 |  0110

### 7   | 0111  | 1100 | 1101 |  1000

### 8   | 1000  | 1110 | 1110 |  1001

### 9   | 1001  | 1111 | 1111 |  1010

## - Códigos de excesso

### - É um código binário, normalmente usando BCD 8421 como base, mas com um valor N somado a cada valor decimal original

### - O código excesso de 3 (XS-3) é feito incrementendo 3 a cada decimal. É auto-complementar

### XS-3

### Dec | Bin

### 0   | 0011

### 1   | 0100

### 2   | 0101

### 3   | 0110

### 4   | 0111

### 5   | 1000

### 6   | 1001

### 7   | 1010

### 8   | 1011

### 9   | 1100

## - Código Gray

## - É um código binário onde cada valor adjacente varia apenas 1 bit. Surgiu quando se usavam válvulas termiônicas e dispositivos eletromecânicos. Os contadoresgeravam ruídos e potências altas quando vários bits precisavam mudar simultaneamente. Atualmente é usado nos mapas de Karnaugh

### Gray

### Dec | Bn

### 0   | 0000

### 1   | 0001

### 2   | 0011

### 3   | 0010

### 4   | 0110

### 5   | 0111

### 6   | 0101

### 7   | 0100

### 8   | 1100

### 9   | 1101

### 10  | 1111

### 11  | 1110

### 12  | 1010

### 13  | 1011

### 14  | 1001

### 15  | 1000

## - Código de 2 entre 5

### - Sempre possui 2 Bits "4", mas utiliza 5 bits ao todo. Foi usado na época de circuitos com pouca confiabilidade

### Dc  | Bn

### 0   | 00011

### 1   | 00101

### 2   | 00110

### 3   | 01001

### 4   | 01010

### 5   | 01100

### 6   | 10001

### 7   | 10010

### 8   | 10100

### 9   | 11000

## - Código de Johnson

### - É usado no contador Jonhson e constitui-se de código binário e cíclico, cuja capacidade de codificação é 2N, sendo N o número de bits. Permite simplicidade na criação de contadores

### 0   00000

### 1   00001

### 2   00011

### 3   00111

### 4   01111

### 5   11111

### 6   11110

### 7   11100

### 8   11000

### 9   10000

### - Código 987654321: É um código binário que converte um decimal num conjunto de 10 bits, onde o valor 1 assume a posição correnpodente ao decimal

### 0 0000000001

### 1 0000000010

### 2 0000000100

### 3 0000001000

### 4 0000010000

### 5 0000100000

### 6 0001000000

### 7 0010000000

### 8 0100000000

### 9 1000000000
