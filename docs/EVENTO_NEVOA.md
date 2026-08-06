# Evento Invasão da Névoa (World Boss)

A **Invasão da Névoa** é o evento de World Boss principal do WYD Chronicles. Desenvolvido para criar disputas em massa (GvG - Guild vs Guild e PvPvE), o evento atua como um catalisador para a economia de final de jogo e para o ranqueamento das guildas no servidor.

## 🌪️ Lore e Conceito
A Névoa é uma anomalia mágica, remanescente direto das energias descontroladas dos Selos Ancestrais que um dia protegeram Kersef. Quando o equilíbrio é perturbado, bolsões dessa névoa se formam nas planícies ao redor das cidades.
Dessa Névoa emerge o **Rei da Névoa**, um comandante abissal com HP colossal e uma horda de lacaios.

## ⚔️ Mecânica do Evento

1. **Avisos Globais:**
   - 10 minutos antes do evento iniciar, mensagens globais no servidor avisam: *"Uma névoa densa se aproxima dos portões de Erion..."*.
2. **O Spawn (Nascimento):**
   - O Boss `Rei_da_Nevoa` aparece com dezenas de `Lacaio_da_Nevoa`.
   - O sistema de spawn foi programado para acontecer em horários pré-determinados.
3. **Teleporte (NPC Arauto da Névoa):**
   - Em Armia, o NPC Arauto da Névoa é ativado e passa a teleportar os jogadores diretamente para o epicentro do combate (mediante um custo de Gold).
4. **O Combate:**
   - O mapa onde a invasão ocorre tem o PvP habilitado. As guildas deverão disputar quem causará mais dano e quem ficará vivo até o fim.
   - O Boss tem uma defesa altíssima e magias em área.

## 🎁 Recompensas (Loot Global)

Quando o Rei da Névoa é derrotado, as recompensas não vão direto para o inventário do grupo que deu o último hit. Em vez disso, é ativado o **Drop Livre (FFA - Free For All)**.
Centenas de itens valiosos caem no chão e qualquer jogador pode tentar coletar (estimulando o embate pós-morte do Boss).

Os Drops incluem:
- **Baú da Névoa**: Um contêiner que dá uma chance alta de obter Montarias raras (ex: Cygnus, Tigre de Fogo, dependendo do Checkpoint atual).
- **Âmagos Supremos**
- **Barras de Ouro (5kk, 10kk, 50kk)**
- **Armas Celestiais Aleatórias** (com slots de jóias).

---

> [!NOTE]
> A implementação técnica encontra-se atrelada aos scripts no `GameServer`: 
> 1. `NPCGener.txt` (Para configurar o horário, o boss e os lacaios).
> 2. `MobDropList.txt` (Ajustado para o alto volume de drop FFA).
> 3. `arauto_nevoa.c` (Opcional, NPC de teleporte).
