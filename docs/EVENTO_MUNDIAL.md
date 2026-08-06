# Eventos Mundiais Coletivos: Desbloqueando Checkpoints

O **WYD Chronicles** adota uma abordagem de liberação de conteúdo progressiva, chamada de "Checkpoints" ou "Fases".
Para que a comunidade avance de um capítulo para outro na história (e desbloqueie novos mapas, níveis, itens e montarias), é necessário um esforço coletivo.

## 🛡️ A Lore: O Guardião do Selo
Há eras, a terra de Kersef era mantida em equilíbrio perfeito por quatro Selos Ancestrais. Durante o Grande Eclipse, o primeiro selo se rompeu, despertando forças ocultas e aprisionando as relíquias lendárias e montarias supremas em dimensões esquecidas.

O **Guardião do Selo**, localizado no **Centro do Deserto de Noatum (na área com os 4 pilares nos cantos e 1 central)**, atua como o catalisador do esforço dos guerreiros para romper as barreiras de Kersef. Ele canaliza a energia de quatro **Essências** primordiais doadas pela população para enfraquecer o próximo selo que prende o novo conteúdo.

---

## 📈 Mecânica do Evento Mundial (Issue #8)

### 1. Os Itens Chave
Durante um período de Checkpoint, os monstros do servidor terão chance de dropar itens especiais do evento, fragmentados em quatro tipos:
- **Essência da Coragem**
- **Essência da Sabedoria**
- **Essência da Natureza**
- **Essência da Precisão**

### 2. A Entrega
Os jogadores devem levar essas Essências ao **NPC Guardião do Selo** em Noatum.

### 3. Recompensa Individual (Farm)
Ao entregar uma Essência, o jogador é imediatamente recompensado. Como incentivo para o *farm*, o Guardião oferece:
* **Gold**
* **Item Aleatório**: Pode ser um item de refinação, âmagos, ou um Ovo de Montaria pertinente à Fase que será desbloqueada.

### 4. Recompensa de Ranking (Top Contribuintes)
O evento recompensa os jogadores mais dedicados:
* Os **Top 10 Jogadores** que mais entregarem essências ganharão um **Item de Evento Único e Personalizado**, exclusivo daquela Fase/Checkpoint, imortalizando seus nomes na história do servidor.

### 5. A Meta Coletiva
Cada Essência doada ao Guardião é contabilizada globalmente. Para romper o Checkpoint (ex: para liberar a Fase 2), a comunidade precisará atingir metas individuais de cada pilar de Noatum:
- 25.000 Entregas de **Essência da Coragem**
- 25.000 Entregas de **Essência da Sabedoria**
- 25.000 Entregas de **Essência da Natureza**
- 25.000 Entregas de **Essência da Precisão**

Quando a meta total de **100.000 Essências** for atingida, os GMs oficializam o Checkpoint e lançam o patch de desbloqueio do próximo capítulo!

---

> [!NOTE]
> A implementação estrutural do NPC encontra-se no arquivo `Release/GameServer/Quests/guardiaoselo.c`. O ranking global utiliza contadores do DataServer acionados por esse script.
