/* ==============================================================================
 * WYD Chronicles - Script C do NPC Ferreiro Mestre (Central da Guilda de Armia)
 * ==============================================================================
 * Localização: Casinha Central de Armia
 * Funções:
 * 1. Trocar Restos (10 Restos + 1.000.000 Gold = 1 Poeira com 100% de Sucesso, suporte a Lotes/PACs)
 * 2. Refinar Arma
 * 3. Refinar Armadura
 * 4. Compor Anct
 * 5. Trocar Add Armadura
 * 6. Trocar Add Arma (Reservado para Fase Futura)
 * ============================================================================== */

QUEST16 NAME Ferreiro_Mestre
QUEST16 POSITION 2125 2095
QUEST16 BASE_SPEECH Bem-vindo_a_Central_da_Guilda_dos_Aventureiros!_Como_posso_ajudar?

// Menu de Opções
QUEST16 MENU-1 OPTION Trocar_Restos_de_Ori/Lac
QUEST16 MENU-2 OPTION Refinar_Arma
QUEST16 MENU-3 OPTION Refinar_Armadura
QUEST16 MENU-4 OPTION Compor_Item_Anct
QUEST16 MENU-5 OPTION Trocar_Adicional_Armadura
QUEST16 MENU-6 OPTION Trocar_Adicional_Arma_[Em_Breve]

// ------------------------------------------------------------------------------
// OPÇÃO 1: Trocar Restos de Oriharukon / Lactolerium
// Requisito: 10 Restos (ID 419 ou 420) + 1.000.000 Gold (1kk)
// Sucesso: 100% (Entrega ID 412 ou 413). Suporta lotes acumulados no PAC (ex: 120x)
// ------------------------------------------------------------------------------
QUEST16 CONDITION-1 ITEM 10 419
QUEST16 CONDITION-1 GOLD 1000000
QUEST16 CONDITION-1 SPEECH Voce_precisa_de_pelo_menos_10_Restos_de_Oriharukon_e_1.000.000_de_Gold.
QUEST16 REWARD-1 DELETEITEM 0 10 419 REMOVEGOLD 1000000 ITEM 1 412 SPEECH Sucesso!_10_Restos_de_Oriharukon_foram_convertidos_em_1_Poeira_de_Oriharukon.

QUEST16 CONDITION-2 ITEM 10 420
QUEST16 CONDITION-2 GOLD 1000000
QUEST16 CONDITION-2 SPEECH Voce_precisa_de_pelo_menos_10_Restos_de_Lactolerium_e_1.000.000_de_Gold.
QUEST16 REWARD-2 DELETEITEM 0 10 420 REMOVEGOLD 1000000 ITEM 1 413 SPEECH Sucesso!_10_Restos_de_Lactolerium_foram_convertidos_em_1_Poeira_de_Lactolerium.

// ------------------------------------------------------------------------------
// OPÇÕES 2 a 5: Redirecionamento para Refinações e Composições Anct
// ------------------------------------------------------------------------------
QUEST16 ACTION-2 REFINEOFFERT WEAPON SPEECH Insira_sua_Arma_e_as_Poeiras_necessarias_para_refinacao.
QUEST16 ACTION-3 REFINEOFFERT ARMOR SPEECH Insira_sua_Armadura_e_as_Poeiras_necessarias_para_refinacao.
QUEST16 ACTION-4 ANCTOFFERT SPEECH Insira_as_armas/armaduras_Anct_e_as_Pedras_para_composicao.
QUEST16 ACTION-5 ADDARMOROFFERT SPEECH Insira_a_Armadura_e_o_item_catalisador_para_troca_de_adicional.
QUEST16 ACTION-6 SPEECH Esta_funcionalidade_estará_disponível_em_breves_capítulos_do_servidor!
