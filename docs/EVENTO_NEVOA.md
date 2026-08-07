# Evento Invasão da Névoa (World Boss)

A **Invasão da Névoa** é o evento de World Boss principal do WYD Chronicles. Desenvolvido para criar disputas em massa e engajar toda a comunidade, o evento atua como um catalisador para a economia de final de jogo e para a ascensão aos níveis Celestiais.

## 🌪️ Lore e Conceito
A Névoa é uma anomalia mágica, remanescente direto das energias descontroladas dos Selos Ancestrais que um dia protegeram Kersef. Quando o equilíbrio é perturbado, bolsões dessa névoa se formam aleatoriamente pelos mapas do jogo.
Dessa Névoa emerge o **Lich Crunt King**, um antigo comandante ressuscitado com poder incomensurável, disposto a aniquilar quem cruzar seu caminho.

## ⚔️ Mecânica do Evento

1. **O Spawn Dinâmico:**
   - O surgimento do **Lich Crunt King** é **aleatório** e ocorre apenas nos mapas abertos e principais (excluindo zonas que exigem entrada especial, como Pesadelo, Carta Duelo, Kefra, etc).
2. **Avisos Globais:**
   - O servidor anuncia globalmente: *"Uma névoa densa cobriu as terras e o Lich Crunt King despertou!"* (O mapa pode ou não ser revelado de imediato, forçando a busca ou uso do Arauto).
3. **Teleporte (NPC Arauto da Névoa):**
   - O NPC Arauto da Névoa passa a teleportar os jogadores diretamente para o epicentro do combate (mediante um custo de Gold).
4. **O Combate:**
   - O Boss tem uma defesa altíssima e magias mortais em área, forçando a colaboração, enquanto guildas adversárias podem lutar entre si.

## 🎁 Recompensas (Participação e Golpe Fatal)

Diferente de drops que caem no chão (FFA), o evento adota um sistema híbrido mais justo:

### Prêmio de Participação
- **Requisito:** Estar vivo e presente no mesmo mapa do boss no momento exato de sua morte.
- **Recompensa:** Todos recebem uma recompensa base direto no inventário (Ex: Caixa de XP, Gold, ou Pacote de Âmagos).

### Prêmio do Golpe Fatal (Last Hit)
- **Requisito:** Ser o jogador que deferiu o ataque final que matou o Lich Crunt King.
- **Recompensa Rara:** O jogador ganha um item **muito valioso** essencial para a progressão final (Celestial/Arch). 
- *Exemplos:* **Sephirot** (qualquer classe), **Pedra da Composição/Pedra Secreta** (Água, Vento, Terra, Fogo), Frango (buff PVE), ou **Ovo de Montaria Top** recém-desbloqueada.

---

> [!NOTE]
> A implementação técnica deste evento foge do simples script estático (`NPCGener.txt`), exigindo integração nas *sources* do GameServer via linguagem C++ para:
> 1. Sortear as coordenadas válidas do mapa.
> 2. Disparar a rotina de detecção de área (para premiar a participação de quem está perto).
> 3. Capturar a variável do atacante (Golpe Fatal) para enviar a recompensa de alto valor.
