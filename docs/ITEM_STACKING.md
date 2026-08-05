# 📦 Guia de Agrupamento de Itens (Autostack 120x) - WYD Chronicles

Este documento define o mapeamento oficial de comportamento de itens no inventário e baú para o **WYD Chronicles**, estabelecendo quais itens possuem **Auto-Agrupamento (Autostack até 120 unidades por slot/PAC)** sem necessidade de fada equipada.

---

## 📊 Classificação Oficial de Itens

| Categoria | Limite de Agrupamento | Descrição / Itens Incluídos |
| :--- | :---: | :--- |
| 🟢 **Consumíveis & Poções** | **120 unidades por slot (PAC)** | Poções de HP (P, M, G), Poções de Mana (P, M, G), Frangos, Poções de Buff, Elixires. |
| 🟢 **Matérias-Primas & Refinações** | **120 unidades por slot (PAC)** | Poeira de Oriharukon (P.O), Poeira de Lactolerium (P.L), Resto de Oriharukon, Resto de Lactolerium, Pedras de Refinação. |
| 🟢 **Âmagos de Montaria** | **120 unidades por slot (PAC)** | Âmago de Javali, Âmago de Lobo, Âmago de Urso, Âmago de Dente de Sabre, Âmago de Andaluz (N/B), Âmago de Leão, Âmago de Tigre. |
| 🟢 **Jóias & Pedras Preciosas** | **120 unidades por slot (PAC)** | Diamante, Coral, Garnet, Esmeralda, Pedra do Sábio, Pedras da Luz (Morte, Água, Sol, Terra). |
| 🟢 **Itens Consumíveis de Quests (XP)** | **120 unidades por slot (PAC)** | Envelopes da Muralha, Cartas de Experiência, Pergaminhos e Consumíveis de Quest que concedem XP ao utilizar. |
| 🟢 **Essências & Chaves** | **120 unidades por slot (PAC)** | Essências dos 4 Selos (Coragem, Sabedoria, Natureza, Precisão), Chaves de Dungeons, Moedas de Honra e Cupons de Eventos. |
| 🔴 **Ovos de Montaria** | **1 unidade por slot (Individual)** | Ovo de Javali, Ovo de Lobo, Ovo de Urso, Ovo de Andaluz, etc. *(Mantidos individuais para preservar a incubação)*. |
| 🔴 **Equipamentos & Armas** | **1 unidade por slot (Individual)** | Armas de todas as classes, Armaduras, Capacetes, Botas, Luvas, Escudos, Anéis, Colares, Orbes e Selos de Montaria equipados. |

---

## ⚙️ Especificação Técnica no `ItemList.csv`

No WYD, o agrupamento de itens é controlado pelas propriedades de atributo e volatilidade no `ItemList.csv`:

```csv
# Estrutura de Atributo de Agrupamento:
ID, Name, Mesh, Texture, Pos, Price, Unique, Coin, Extra, EF_VOLATILE, 120, EF_GRID, 0
```

1. **`EF_VOLATILE` (Efeito 38)** com valor `120`: Define o limite máximo do lote (PAC) como 120 unidades.
2. **Auto-Agrupamento Nativo**: O cliente e o GameServer processam a fusão automática de itens consumíveis ao dropar ou ao mover no inventário.

---

## 📌 Status da Issue #17
- **Documento de Agrupamento**: [docs/ITEM_STACKING.md](https://github.com/ggscavazza/wyd_chronicles/blob/main/docs/ITEM_STACKING.md)
- **Status**: Concluída e comitada no repositório.
