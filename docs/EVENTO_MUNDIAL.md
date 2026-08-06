# Eventos Mundiais Coletivos: Desbloqueando Checkpoints

O **WYD Chronicles** adota uma abordagem de liberação de conteúdo progressiva, chamada de "Checkpoints" ou "Fases".
Para que a comunidade avance de um capítulo para outro na história (e desbloqueie novos mapas, níveis, itens e montarias), é necessário um esforço coletivo.

## 🛡️ A Lore: O Guardião do Selo
Há eras, a terra de Kersef era mantida em equilíbrio perfeito por quatro Selos Ancestrais. Durante o Grande Eclipse, o primeiro selo se rompeu, despertando forças ocultas e aprisionando as relíquias lendárias e montarias supremas em dimensões esquecidas.

O **Guardião do Selo**, localizado no centro de Armia, atua como o catalisador do esforço dos guerreiros para romper as barreiras de Kersef. Ele canaliza a energia das **Relíquias** e **Selos** doados pela população para enfraquecer o próximo selo que prende o novo conteúdo.

---

## 📈 Mecânica do Evento Mundial (Issue #8)

### 1. O Item Chave
Durante um período de Checkpoint, os monstros de vários mapas têm uma pequena chance de *dropar* o item **Selo das Almas** (ID 3443).

### 2. A Entrega
Os jogadores devem levar esses Selos ao **NPC Guardião do Selo** em Armia (coordenadas: `2100 2100`).
* O NPC aceita as entregas individualmente ou em lotes de 10 unidades.

### 3. Recompensa Individual (Farm)
Ao entregar os Selos, o jogador não sai de mãos vazias. Como incentivo para o *farm*, o Guardião recompensa o aventureiro com:
* Experiência
* **Moedas de Honra**
* **Baú de Experiência** (ex: Item Frango/Baú surpresa - ID 3314)

### 4. A Meta Coletiva
Cada Selo doado ao Guardião é contabilizado globalmente pelo servidor.
Exemplo prático:
- **Meta para liberar a Fase 2 (A Era dos Reinos)**: A comunidade precisa doar **50.000 Selos das Almas**.
- No site e no Discord oficial, haverá uma "Barra de Progresso" em tempo real exibindo a porcentagem coletada.

Quando a meta de 50.000 Selos é atingida e os outros pré-requisitos (como número de jogadores Arch level 400 únicos) também são batidos, os GMs oficializam o Checkpoint e lançam o patch de desbloqueio da Fase 2, liberando Kefra, Montarias como Cygnus, etc.

---

> [!NOTE]
> A implementação estrutural (NPC script) pode ser encontrada no arquivo `Release/GameServer/Quests/guardiaoselo.c`. O ranking global utiliza contadores do DataServer acionados por esse script.
