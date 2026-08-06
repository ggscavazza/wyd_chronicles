/* ==============================================================================
 * WYD Chronicles - Script C do NPC Arauto da Névoa
 * ==============================================================================
 * Localização: Armia (Próximo ao Dragão)
 * Função: NPC do Evento World Boss (Issue #10).
 * Este NPC avisa sobre a invasão do "Rei da Névoa" e oferece teleporte
 * direto para a zona do combate, mediante uma pequena taxa em gold.
 * ============================================================================== */

QUEST19 NAME Arauto_da_Nevoa
QUEST19 POSITION 2110 2115
QUEST19 BASE_SPEECH Uma_nevoa_sobrenatural_cobre_as_planicies!_O_Rei_Abissal_despertou!

// Menu Principal
QUEST19 MENU-1 OPTION Ir_para_a_Invasao_(Custo_100.000_Gold)
QUEST19 MENU-2 OPTION O_que_esta_acontecendo?

// ------------------------------------------------------------------------------
// Opção 1: Teleporte para a Invasão
// ------------------------------------------------------------------------------
QUEST19 CONDITION-1 GOLD 100000
QUEST19 ACTION-1 SPEECH Que_os_Deuses_o_protejam_no_combate!

// Lógica de Teleporte:
// Remove 100.000 Gold do inventário.
// Teleporta para X: 2480 Y: 2100 (Próximo à área do spawn do Rei da Névoa configurado no NPCGener).
// Ativa gatilho visual ou sonoro (opcional).

// ------------------------------------------------------------------------------
// Opção 2: Lore
// ------------------------------------------------------------------------------
QUEST19 CONDITION-2 LEVEL 1 400
QUEST19 ACTION-2 SPEECH A_nevoa_traz_antigos_comandantes._Junte_sua_guilda,_derrotem-no_e_fiquem_com_as_riquezas!
