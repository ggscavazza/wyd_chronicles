# Sistema de Missões e Encomendas (Bounty & Player Quests)

O Quadro de Missões, localizado na **Guilda dos Aventureiros (Armia)**, é um hub central para duas vertentes principais de gameplay: as **Missões Diárias (Bounty Quests)** e as **Encomendas de Jogadores (Player Quests)**. 

Este sistema foi idealizado na **Issue #9** para dinamizar a economia, valorizar o PVE em diferentes faixas de nível e criar uma interação orgânica entre jogadores.

---

## 📜 1. Missões Diárias (Bounty Quests)

As Missões Diárias incentivam os jogadores a visitarem os diversos mapas do jogo para caçar monstros específicos e coletar itens. Em troca, o jogador recebe **Experiência (XP)**, **Gold** e **Moedas de Honra**, além de itens surpresa (Poções, Armas, Restos e Poeiras) essenciais para a progressão.

O balanceamento das recompensas foi rigorosamente projetado para não desestabilizar a economia ou banalizar o uso de itens fortes.

### 🟢 Nível 1 ao 100 (Iniciante) - Campo de Armia
* **Javali**: XP + 1 Moeda de Honra
* **Caçador Troll**: XP + 10.000 Gold + 1 Moeda de Honra
* **Lobo**: XP + 2 Moedas de Honra + 2x Poção de HP (G)

### 🌿 Nível 101 ao 200 (Intermediário) - Campo de Erion
* **Carbunkle**: XP + 30.000 Gold + 2 Moedas de Honra
* **Gargula**: XP + 3 Moedas de Honra + Resto de Ori (1 a 3 un)
* **Lobo Negro**: XP + 50.000 Gold + 5 Moedas de Honra + Arma Classe D ou E aleatória (add baixo)

### 🏜️ Nível 201 ao 280 (Avançado) - Campo de Azran
* **Aqua_Golem**: XP + 5 Moedas de Honra + Pergaminho do Portal
* **Argos_Errante**: XP + 100.000 Gold + 5 Moedas de Honra + Resto de Lac (1 a 3 un)
* **Arc_Orc_Trooper**: XP + 7 Moedas de Honra + Armadura Classe C aleatória (add baixo)

### 🏛️ Nível 281 ao 320 (Avançado) - Dungeon Piso 1
* **Lich_Vatama**: XP + 10 Moedas de Honra + Resto de Lac (2 a 4 un)
* **Aparicao**: XP + 200.000 Gold + 10 Moedas de Honra
* **Gargula_de_Pedra**: XP + 12 Moedas de Honra + Arma Classe C aleatória (add médio)

### 🕸️ Nível 321 ao 350 (Elite) - Dungeon Piso 2
* **Esqueleto**: XP + 300.000 Gold + 15 Moedas de Honra
* **Assassino Tauron**: XP + 15 Moedas de Honra + 1x Poeira de Oriharukon (completa)
* **Minotauro**: XP + 20 Moedas de Honra + Armadura Classe C/B aleatória

### 🌑 Nível 351 ao 400 (Desafio Arch) - Submundo
* **Aranha_Inferno**: XP + 20 Moedas de Honra + Resto de Lac (3 un)
* **Bruxo_Amaldiçoado**: XP + 500.000 Gold + 20 Moedas de Honra + 1x Poeira de Lactolerium (completa)
* **Abyss_Demon**: XP + 25 Moedas de Honra + Baú de Aventureiro

---

## 🤝 2. Quadro de Encomendas de Jogadores (Player Quests)

O Quadro de Encomendas permite que jogadores utilizem seu Gold para terceirizar a obtenção de itens. É a ponte ideal entre jogadores focados na economia (compradores) e jogadores focados no PVE/Farm (aventureiros).

### Como funciona:

1. **Cadastro da Encomenda (Contratante)**
   - O **Jogador A** vai ao Mural de Missões e registra um pedido. Exemplo: *"Preciso de 10 Restos de Ori"*.
   - O sistema exige que o Jogador A defina a recompensa, por exemplo: `5.000.000 Gold`.
   - O valor de 5kk é **debitado do inventário do Jogador A** no ato do registro, ficando retido pelo sistema.
   - A missão é adicionada publicamente à lista do Quadro de Encomendas.

2. **Aceite da Encomenda (Aventureiro)**
   - O **Jogador B** vai ao Mural e visualiza as encomendas disponíveis.
   - Ele aceita a encomenda do Jogador A.
   - Ao completar o objetivo (coletar os 10 Restos de Ori), o Jogador B entrega os itens no Mural.

3. **Liquidação**
   - Os 10 Restos de Ori são transferidos (via correio/guarda-carga) para o Jogador A.
   - O depósito de `5.000.000 Gold` retido pelo sistema é transferido para o Jogador B.

### Benefícios:
* **Mercado Aquecido**: Quem tem dinheiro mas não tem tempo, pode comprar serviços. Quem tem tempo, pode vender seu "farm".
* **Segurança na Transação**: O sistema atua como custódia do Gold, garantindo que não haverá calotes entre os jogadores.

---

> [!NOTE]
> A parte técnica e o script C do NPC encontram-se em `Release/GameServer/Quests/quadro_missoes.c`. A lógica de retenção de moedas no Quadro de Encomendas requer uma comunicação específica com o DataServer ou o Banco de Dados.
