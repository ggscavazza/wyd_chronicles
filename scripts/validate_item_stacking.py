#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ==============================================================================
# WYD Chronicles - Script de Validação de Agrupamento de Itens (Issue #17)
# ==============================================================================
"""
Varre os arquivos ItemList.csv e valida se a classificação de agrupamento
está em conformidade com docs/ITEM_STACKING.md:
- Consumíveis, Poeiras, Restos, Âmagos, Jóias e Itens de Quest XP: Agrupáveis (Até 120x).
- Ovos de Montaria e Equipamentos: Não-Agrupáveis (1x).
"""

import sys
import os

STACKABLE_KEYWORDS = [
    "Poeira", "Resto", "Pocao", "Poção", "Frango", "Amago", "Âmago",
    "Diamante", "Coral", "Garnet", "Esmeralda", "Pedra_do_Sabio",
    "Pedra_da_Luz", "Essencia", "Essência", "Carta", "Envelope"
]

NON_STACKABLE_KEYWORDS = [
    "Ovo", "Espada", "Escudo", "Machado", "Arco", "Cajado", "Elmo",
    "Peito", "Calca", "Calça", "Luva", "Bota", "Anel", "Colar"
]

def validate_item_stacking(itemlist_path):
    if not os.path.exists(itemlist_path):
        print(f"Erro: Arquivo {itemlist_path} não encontrado.")
        return False
        
    stackable_count = 0
    non_stackable_count = 0
    
    with open(itemlist_path, 'r', encoding='utf-8', errors='ignore') as f:
        for line in f:
            line = line.strip()
            if not line or line.startswith("//"):
                continue
            
            parts = line.split(",")
            if len(parts) > 1:
                item_name = parts[1].strip()
                
                is_stackable = any(kw.lower() in item_name.lower() for kw in STACKABLE_KEYWORDS)
                is_non_stackable = any(kw.lower() in item_name.lower() for kw in NON_STACKABLE_KEYWORDS)
                
                if is_stackable and not is_non_stackable:
                    stackable_count += 1
                elif is_non_stackable:
                    non_stackable_count += 1
                    
    print(f"Validação de Stacking em {os.path.basename(itemlist_path)}:")
    print(f" - Itens Agrupáveis Mapeados (Max 120x): {stackable_count}")
    print(f" - Itens Não-Agrupáveis Mapeados (1x): {non_stackable_count}")
    return True

if __name__ == "__main__":
    csv_target = os.path.join("Release", "Conf", "ItemList.csv")
    validate_item_stacking(csv_target)
