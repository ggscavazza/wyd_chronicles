# 🏛️ Central da Guilda dos Aventureiros (Armia) - WYD Chronicles

Este documento descreve a infraestrutura física, a disposição dos NPCs e os menus interativos da **Central da Guilda dos Aventureiros**, localizada na casinha central da vila de Armia.

---

## 📍 Nomenclatura Oficial

* **Ordem Mundial / Guilda dos Aventureiros**: A guilda global da lore do servidor que acolhe todos os exploradores de Além-Véu.
* **Alianças entre Jogadores**: As guildas formadas por jogadores no jogo passam a ser denominadas **Clãs / Grupos**.

---

## 🗺️ Disposição dos NPCs na Casinha Central de Armia

| NPC | Função / Serviço | Coordenadas no Mapa |
| :--- | :--- | :---: |
| ⚒️ **Ferreiro Mestre** | Menu interativo de trocas de Restos, refinação +0 a +9, composições Anct e adicionais | `(2125, 2095)` |
| 📦 **Guarda de Carga** | Acesso ao Baú de Contas unificado | `(2123, 2093)` |
| 💎 **Loja Premium** | Compra de utilitários Cash (Frangos 7D, trajes e conveniências) | `(2127, 2093)` |
| 📜 **Registrador da Guilda** | Cadastro e status do jogador na ordem dos Aventureiros | `(2121, 2095)` |
| 🧪 **Alquimista da Guilda** | Criação de poções avançadas e catalisadores | `(2129, 2095)` |
| 🏛️ **NPC de Leilão / Mercado** | Ponto de negociação e leilão de itens entre jogadores | `(2125, 2098)` |
| 📋 **Mural / Quadro de Missões** | Âncoras físicas para o sistema de Missões Diárias e Encomendas de Jogadores *(Lógica programada na Issue #9)* | `(2125, 2090)` |

---

## ⚒️ Menu Interativo do Ferreiro Mestre (`ferreiro_mestre.c`)

Ao clicar no NPC **Ferreiro Mestre**, o jogador visualiza as seguintes opções de diálogo:

1. 🏺 **Trocar Restos de Ori/Lac**:
   - **Requisito**: 10 Restos de Oriharukon (ID 419) ou 10 Restos de Lactolerium (ID 420) + **1.000.000 Gold (1kk)** por transação.
   - **Sucesso**: **100% de Chance de Sucesso** (Entrega 1 Poeira de Ori ID 412 ou 1 Poeira de Lac ID 413).
   - **Processamento em Lotes (PACs)**: Suporta a troca de lotes de restos acumulados (ex: 120 restos + 1kk Gold = 12 Poeiras entregues de uma vez; dezenas incompletas como 63 restos consomem 60 restos, cobram 1kk e mantêm os 3 restos sobressalentes).
2. ⚔️ **Refinar Arma**: Direciona para a janela de refinação de armas (+0 a +9).
3. 🛡️ **Refinar Armadura**: Direciona para a janela de refinação de armaduras (+0 a +9).
4. 🌟 **Compor Item Anct**: Janela de composição para transformar armas/armaduras em Anciãs (Anct).
5. ✨ **Trocar Adicional Armadura**: Sistema de refatoração/alteração de adicionais em peças de armadura.
6. 🔒 **Trocar Adicional Arma**: *(Opção reservada para ser liberada em capítulos futuros do servidor)*.

---

## 📌 Status da Issue #16
- **Script C do Ferreiro Mestre**: [Release/GameServer/Quests/ferreiro_mestre.c](file:///d:/SERVIDOR%20WYD/MYTH/Release/GameServer/Quests/ferreiro_mestre.c)
- **Documento da Central**: [docs/GUILDA_AVENTUREIROS.md](https://github.com/ggscavazza/wyd_chronicles/blob/main/docs/GUILDA_AVENTUREIROS.md)
- **Status**: Concluída e comitada no repositório.
