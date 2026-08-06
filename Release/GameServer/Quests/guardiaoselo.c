/* ==============================================================================
 * WYD Chronicles - Script C do NPC Guardião do Selo
 * ==============================================================================
 * Localização: Centro do Deserto de Noatum (Praça dos 4 Pilares - Coords aprox: 3220 1700)
 * Função: Evento Mundial Coletivo (Issue #8).
 * O NPC recolhe 4 tipos de essências (Coragem, Sabedoria, Natureza, Precisão).
 * 
 * Recompensas:
 * - Individual: Gold + Item Aleatório (Ovo de Montaria da nova fase, Âmago, ou Refinação)
 * - Ranking: Top 10 contribuintes ganham item único personalizado.
 * ============================================================================== */

QUEST18 NAME Guardiao_do_Selo
QUEST18 POSITION 3220 1700
QUEST18 BASE_SPEECH As_forcas_da_natureza_precisam_de_equilibrio._Traga-me_as_Essencias_dos_Quatro_Caminhos!

// Menu Principal
QUEST18 MENU-1 OPTION Entregar_Essencia_da_Coragem
QUEST18 MENU-2 OPTION Entregar_Essencia_da_Sabedoria
QUEST18 MENU-3 OPTION Entregar_Essencia_da_Natureza
QUEST18 MENU-4 OPTION Entregar_Essencia_da_Precisao

// (IDs fictícios 4001, 4002, 4003, 4004 para as Essências que serão criadas/adicionadas)

// ------------------------------------------------------------------------------
// 1. Entrega Coragem
// ------------------------------------------------------------------------------
QUEST18 CONDITION-1 ITEM 4001 1
QUEST18 ACTION-1 SPEECH A_sua_coragem_alimenta_o_nosso_futuro!
// Remove Essência da Coragem
// Dá recompensa aleatória (Gold + Ovo/Amago/Refinação)
// Adiciona +1 no rank de doação da Coragem (Global Meta: 25k)

// ------------------------------------------------------------------------------
// 2. Entrega Sabedoria
// ------------------------------------------------------------------------------
QUEST18 CONDITION-2 ITEM 4002 1
QUEST18 ACTION-2 SPEECH A_sabedoria_ilumina_o_nosso_caminho!
// Remove Essência da Sabedoria
// Dá recompensa aleatória
// Adiciona +1 no rank de doação da Sabedoria (Global Meta: 25k)

// ------------------------------------------------------------------------------
// 3. Entrega Natureza
// ------------------------------------------------------------------------------
QUEST18 CONDITION-3 ITEM 4003 1
QUEST18 ACTION-3 SPEECH A_natureza_retoma_sua_forca_ancestral!
// Remove Essência da Natureza
// Dá recompensa aleatória
// Adiciona +1 no rank de doação da Natureza (Global Meta: 25k)

// ------------------------------------------------------------------------------
// 4. Entrega Precisão
// ------------------------------------------------------------------------------
QUEST18 CONDITION-4 ITEM 4004 1
QUEST18 ACTION-4 SPEECH A_precisao_da_sua_alma_rompera_este_selo!
// Remove Essência da Precisão
// Dá recompensa aleatória
// Adiciona +1 no rank de doação da Precisão (Global Meta: 25k)
