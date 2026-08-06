/* ==============================================================================
 * WYD Chronicles - Script C do Quadro de Missões (Bounty & Player Quests)
 * ==============================================================================
 * Localização: Casinha Central de Armia
 * Funções:
 * 1. Missões Diárias por Faixa de Nível (Armia, Erion, Azran, Dungeons, Submundo)
 * 2. Encomendas de Jogadores (Player-Driven Quests com Depósito de Gold)
 * ============================================================================== */

QUEST17 NAME Quadro_de_Missoes
QUEST17 POSITION 2125 2090
QUEST17 BASE_SPEECH Mural_da_Guilda_dos_Aventureiros._Escolha_seu_destino!

// Menu Principal
QUEST17 MENU-1 OPTION Missoes_Armia_(Lv_1~100)
QUEST17 MENU-2 OPTION Missoes_Erion_(Lv_101~200)
QUEST17 MENU-3 OPTION Missoes_Azran_(Lv_201~280)
QUEST17 MENU-4 OPTION Missoes_Dungeons_(Lv_281~350)
QUEST17 MENU-5 OPTION Missoes_Submundo_(Lv_351+)
QUEST17 MENU-6 OPTION Quadro_de_Encomendas_(Player_Quests)

// ------------------------------------------------------------------------------
// 1. Campo de Armia (Lv 1~100)
// ------------------------------------------------------------------------------
// Missão: 30 Javalis (ID Mob fictício: M_JAVALI)
QUEST17 CONDITION-1 LEVEL 1 100
QUEST17 ACTION-1 SPEECH Missao_Aceita:_Derrote_30_Javalis_e_retorne!

// Recompensas Armia:
// Javali: XP + 1 Moeda de Honra (ID 3400)
// Caçador Troll: XP + 10k Gold + 1 Honra
// Lobo: XP + 2 Honras + 2x Poção HP(G) (ID 404)

// ------------------------------------------------------------------------------
// 2. Campo de Erion (Lv 101~200)
// ------------------------------------------------------------------------------
QUEST17 CONDITION-2 LEVEL 101 200
QUEST17 ACTION-2 SPEECH Missao_Aceita:_Erion_precisa_de_limpeza!

// Recompensas Erion:
// Carbunkle: XP + 30k Gold + 2 Honras
// Gargula: XP + 3 Honras + Resto_Ori (ID 419)
// Lobo Negro: XP + 50k Gold + 5 Honras + Arma Classe D

// ------------------------------------------------------------------------------
// 3. Campo de Azran (Lv 201~280)
// ------------------------------------------------------------------------------
QUEST17 CONDITION-3 LEVEL 201 280
QUEST17 ACTION-3 SPEECH Missao_Aceita:_Sobreviva_as_areias_de_Azran!

// Recompensas Azran:
// Aqua_Golem: XP + 5 Honras + Pergaminho Portal
// Argos_Errante: XP + 100k Gold + 5 Honras + Resto_Lac (ID 420)
// Arc_Orc_Trooper: XP + 7 Honras + Arma Classe C

// ------------------------------------------------------------------------------
// 4. Dungeons P1 e P2 (Lv 281~350)
// ------------------------------------------------------------------------------
QUEST17 CONDITION-4 LEVEL 281 350
QUEST17 ACTION-4 SPEECH Missao_Aceita:_Explore_as_profundezas!

// Recompensas Dungeon:
// Lich_Vatama: XP + 10 Honras + Resto_Lac (ID 420)
// Aparicao: XP + 200k Gold + 10 Honras
// Gargula_de_Pedra: XP + 12 Honras + Arma Classe C
// Esqueleto: XP + 300k Gold + 15 Honras
// Assass._Tauron: XP + 15 Honras + Poeira_Ori (ID 412)
// Minotauro: XP + 20 Honras + Armadura Classe C/B

// ------------------------------------------------------------------------------
// 5. Submundo (Lv 351~400)
// ------------------------------------------------------------------------------
QUEST17 CONDITION-5 LEVEL 351 400
QUEST17 ACTION-5 SPEECH Missao_Aceita:_Enfrente_os_desafios_do_Submundo!

// Recompensas Submundo:
// Aranha_Inferno: XP + 20 Honras + Resto_Lac (ID 420)
// Bruxo_Amald: XP + 500k Gold + 20 Honras + Poeira_Lac (ID 413)
// Abyss_Demon: XP + 25 Honras + Bau_Aventureiro

// ------------------------------------------------------------------------------
// 6. Quadro de Encomendas (Player-Driven Quests)
// ------------------------------------------------------------------------------
QUEST17 CONDITION-6 LEVEL 1 400
QUEST17 ACTION-6 SPEECH Acesse_o_Mural_para_cadastrar_ou_aceitar_encomendas_de_outros_aventureiros!
// (Lógica complexa de retenção e depósito gerenciada via DataServer/Banco de Dados)
