/* ==============================================================================
 * WYD Chronicles - Script C do NPC Guardião do Selo
 * ==============================================================================
 * Localização: Armia (Centro / Fonte)
 * Função: Evento Mundial Coletivo (Issue #8).
 * O NPC recolhe o item "Selo das Almas" (ID 3443) dos jogadores. 
 * Recompensa: 1x Moeda de Honra (ID 3400) + XP
 * Progresso Coletivo: Cada doação é registrada para destravar os Checkpoints.
 * ============================================================================== */

QUEST18 NAME Guardiao_do_Selo
QUEST18 POSITION 2100 2100
QUEST18 BASE_SPEECH Saudações,_guerreiro._Traga-me_os_Selos_das_Almas_para_rompermos_as_barreiras_de_Kersef!

// Menu Principal
QUEST18 MENU-1 OPTION Entregar_1_Selo_das_Almas
QUEST18 MENU-2 OPTION Entregar_10_Selos_das_Almas

// ------------------------------------------------------------------------------
// Entrega Simples (1 Selo)
// ------------------------------------------------------------------------------
// Condição: Ter 1x Selo das Almas (ID 3443)
QUEST18 CONDITION-1 ITEM 3443 1
QUEST18 ACTION-1 SPEECH A_humanidade_agradece_sua_doacao!

// Lógica interna: 
// Remover 1x Selo das Almas (3443)
// Dar 1x Moeda de Honra (3400)
// Dar XP equivalente a um monstro médio
// O registro no contador global seria feito por triggers no DataServer ao realizar esta Quest.

// ------------------------------------------------------------------------------
// Entrega em Lote (10 Selos)
// ------------------------------------------------------------------------------
// Condição: Ter 10x Selos das Almas agrupados (ID 3443)
QUEST18 CONDITION-2 ITEM 3443 10
QUEST18 ACTION-2 SPEECH Excelente!_Os_Deuses_sorriem_para_voce!

// Lógica interna:
// Remover 10x Selos das Almas
// Dar 10x Moedas de Honra + Baú de Experiência (ID 3314 - Exemplo)
// Contabiliza +10 no ranking do Evento Mundial Coletivo.
