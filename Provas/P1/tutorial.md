Tutorial TEP 02/2016 - Prova 01
===============================

Acerte a lata
-------------

**Categoria**: _Geometria Computacional_
**Tópico Principal**: _Distância entre ponto e segmento de reta_
**Dificuldade**: Médio

A ideia central deste problema é computar a distância entre um ponto _Q_
(onde está localizada a lata) e o segmento de reta formado pelos pontos L, P,
que marcam o lançamento e o ponto de parada.

Esta distância pode ser computada determinando o ponto _R_ da reta que passa
por _L, P_ que é o mais próximo possível de _Q_. Se este ponto estiver no 
segmento, a distância será _d = dist(Q, R)_; caso contrário, 
_d = min(dist(L, R), dist(L, P))_.

A classe abaixo representa uma reta e contém o método que computa o ponto _R_
mais próximo possível de _Q_.

```C++
class Line {
public:
    double a;
    double b;
    double c;

    Line(const Point& p, const Point& q)
    {
        a = p.y - q.y;
        b = q.x - p.x;
        c = p.x * q.y - p.y * q.x;
    }

    Point closest(const Point& Q) const 
    {
        auto m = a*a + b*b;
        auto x = (b*(b*Q.x - a*Q.y) - a*c)/m;
        auto y = (a*(-b*Q.x + a*Q.y) - b*c)/m;

        return Point(x, y);
    }
};
```

Já a classe abaixo representa um segmento, com um método que determina se um 
ponto _P_,
que pertence à reta que passa pelo segmento _AB_, está contido ou não no
segmento.

```C++
class Segment {
public:

    Point A, B;

    Segment(const Point& Av, const Point& Bv) : A(Av), B(Bv) {}

    bool contains(const Point& P) const
    {
        if (A.x == B.x)
            return min(A.y, B.y) <= P.y and P.y <= max(A.y, B.y);
        else
            return min(A.x, B.x) <= P.x and P.x <= max(A.x, B.x);
    }
};
```

Com estas informações, basta seguir os critérios de vitória e desempate 
listados no texto do problema.
Bom trabalho
------------

**Categoria**: _Geometria Computacional_
**Tópico Principal**: _Orientação de um ponto em relação a uma reta_
**Dificuldade**: Fácil

Neste problema, dado um ponto _R_ e uma reta _r_ que passa pelos pontos
_P_ e _Q_, é preciso determinar qual dos três casos abaixo é verdadeiro:

1. _R_ pertence a _r_;
1. _R_ está à esquerda de _r_, no sentido de _P_ a _Q_;
1. _R_ está à direita de _r_, no sentido de _P_ a _Q_.

Isto pode ser feito através do discriminante _D_, implementado abaixo:
```C++
int D(const Point& P, const Point& Q, const Point& R)
{
    return (P.x * Q.y + P.y * R.x + Q.x * R.y) - (R.x * Q.y + R.y * P.x + Q.x * P.y);
}
```

Assim, basta incrementar o contador de estacas desalinhas sempre que _D_ for
diferente de zero, e computador o custo final através de uma multiplicação
simples. Uma forma de evitar erros de arredondamento é trabalhar com valores
em centavos, fazendo a conversão apenas na hora da impressão.

Para ler o valor como centavos, basta fazer
```C++
int R, C;
scanf("%d,%d", &R, &C);
int cents = R*100 + C;
```

A impressão do custo pode ser feita através da expressão
```C++
printf("Custo: R$ %d,%02d\n", cost / 100, cost % 100);
```

Cães e Gatos
------------

**Categoria**: _Geometria Computacional_
**Tópico Principal**: _Vetores_
**Dificuldade**: Médio

Para cada um dos cães, a primeira providência é computar a distância entre o 
ponto _C_ onde sua corrente está presa e o gato (ponto _G_). Se esta distância 
_d_ for menor ou igual ao comprimento da _M_ corrente, o gato perderá uma de 
suas vidas.

Caso _d > M_, o cachoro correrá da direção do gato, até a onde
sua corrente permitir, ficando o mais próximo possível do felino. Em termos
geométricos, o cão ficará posicionado em um ponto _P_ da reta _CG_, ficando a 
uma distância _M_ de _C_.

Para encontrar _P_, basta computar o vetor _v_ que parte de _C_ a _G_ (_v = G - C_) e,
em seguida, o vetor unitário _u_ que tem mesma direção e sentido de _v_
(_u = v/|v|_).  Assim, P = C + u (adição e subtração de pontos: coordenada a coordenada).

Vale notar que, pela restrição da entrada, restará ao gato sempre ao menos uma
vida, e que a primeira comparação (entre _d_ e _M_) pode ser feita sem o
uso de ponto flutuante (compare _d²_ com _M²_).
Desenvolvendo a API
-------------------

**Categoria**: _Geometria Computacional_
**Tópico Principal**: _Rotações e escala_
**Dificuldade**: Fácil

O problema consiste em aplicar rotações e operações de escala em um dado ponto.
Ele se torna um pouco mais fácil do que o problema geral por dois motivos:

1. As rotações são feitas apenas em múltiplos de 90º;
1. As constantes de escala são potências positivas e negativas de 2.

Estes fatores permitem trabalhar com coordenadas inteiras _x, y_ e um fator
de zoom _k_, também inteiro. Rotacionar 90º, no sentido anti-horário, é 
equivalente a permutar as coordenadas do ponto, tomando o simétrico da 
primeira nova coordenada:
```C++
using ii = pair<long long, long long>;

ii rotate90(const ii& v)
{
    return ii(-v.y, v.x);
}
```

As operações de _zoom out_ e _zoom in_ equivalem a incrementos e decrementos
do fator _k_. As operações só precisam ser efetivamente realizadas no 
momento da impressão, tomando cuidado para não alterar os valores de 
_x, y_: use duas variáveis em ponto flutuante para as operações caso _k < 0_,
e use o operator `<<` caso _k > 0_.

O problema se tornaria mais difícil se removida a restrição do módulo das
coordenadas, mas a abordagem de acumular o fator de _zoom_ ainda seria 
válida.
