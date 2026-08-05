# 📌 ISSUES_ROADMAP.md - Mapeamento de Macro-Ideias para Issues do GitHub

Este arquivo organiza as **Macro-Ideias** do projeto **WYD Chronicles** em **Micro-Tarefas** bem definidas. Cada micro-tarefa pode ser aberta diretamente como uma **Issue** no repositório GitHub (`https://github.com/ggscavazza/wyd_chronicles.git`).

---

## 🎯 MACRO 1: Identidade, Lore & Documentação
- [ ] **[Issue #1.1]** Finalizar texto da Lore "O Eclipse dos Quatro Selos" para publicar no site.
- [ ] **[Issue #1.2]** Criar templates de Banner/Logo para o WYD Chronicles (Redes Sociais e Launcher).
- [ ] **[Issue #1.3]** Criar Guia de Regras do Servidor e Antifraude (IP/HWID unique tracking).

## 🛡️ MACRO 2: Balanceamento da Fase 1 (Cap de Conteúdo Arch/Andaluz)
- [ ] **[Issue #2.1]** Editar `ItemList.csv` para restringir a composição/uso de montarias superiores (manter ativo até Andaluz).
- [ ] **[Issue #2.2]** Ajustar taxas de experiência e drops da Fase 1 (`ExpConf.ini` e `droplist.txt`).
- [ ] **[Issue #2.3]** Configurar limite de refinação máxima para +9 e desativar composições de itens Celestes.
- [ ] **[Issue #2.4]** Criar script em C/C++ ou gatilho em DataServer para contar jogadores únicos (IP/HWID) no Lv 400.
- [ ] **[Issue #17]** Implementar sistema de Auto-Agrupamento (Autostack 120x) no Inventário e Mapeamento de Itens Agrupáveis vs Não-Agrupáveis.

## ⚔️ MACRO 3: Eventos & Quests Customizadas
- [ ] **[Issue #3.1]** Desenvolver NPC "Guardião do Selo" (`Quests/guardiaoselo.c`) para entrega de itens do Evento Mundial.
- [ ] **[Issue #3.2]** Desenvolver o sistema de Missões Diárias (Bounty Quests) com recompensa em Moedas de Honra.
- [ ] **[Issue #3.3]** Criar o evento autoral "Invasão da Névoa" com spawn de Bosses globais programados.
- [ ] **[Issue #16]** Desenvolver a mecânica da Central da Guilda dos Aventureiros (Casinha Central de Armia & Troca de 10 Restos por 1 Poeira).

## 🚀 MACRO 4: Infraestrutura & VPS Linux
- [ ] **[Issue #4.1]** Testar deploy dos serviços no Ubuntu VPS via `setup_vps.sh` e `start_server.sh`.
- [ ] **[Issue #4.2]** Configurar backups automáticos do banco de dados MariaDB (`lok` e `log_db`).
- [ ] **[Issue #4.3]** Homologar launcher e execução do cliente no Linux via `play_linux.sh`.

## 📱 MACRO 5: Pesquisa & Protótipo Mobile (Android & iOS)
- [ ] **[Issue #5.1]** Documentar mapa de opcodes e estrutura de pacotes TCP do GameServer (Porta 8281).
- [ ] **[Issue #5.2]** Inicializar projeto protótipo Unity/Godot C# para autenticação no DataServer.
