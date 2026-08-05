#!/usr/bin/env python3
# -*- coding: utf-8 -*-
# ==============================================================================
# WYD Chronicles - Script de Auditoria do Checkpoint 1 (Arch > 355)
# ==============================================================================
"""
Calcula o progresso oficial do Checkpoint 1:
- Requisito: Personagem Arch com nível > 355.
- Regra Antifraude: Permitido até 2 contas contabilizadas por HWID + IP.
- Meta do Checkpoint: 100 contas/jogadores únicos válidos.
"""

import sys

def calculate_checkpoint_progress(audited_records, target_goal=100):
    hwid_ip_map = {}
    
    for record in audited_records:
        account = record.get("account_name")
        hwid = record.get("hwid")
        ip = record.get("ip_address")
        level = record.get("level", 0)
        evolution = record.get("evolution", 0)
        
        # Filtrar apenas Archs com Nível > 355
        if level > 355 and evolution >= 1:
            key = f"{hwid}_{ip}"
            if key not in hwid_ip_map:
                hwid_ip_map[key] = set()
            hwid_ip_map[key].add(account)
            
    total_valid_count = 0
    for key, accounts in hwid_ip_map.items():
        # Limite antifraude de até 2 contas por HWID/IP
        valid_accounts_for_this_hwid = min(len(accounts), 2)
        total_valid_count += valid_accounts_for_this_hwid

    percentage = min(100.0, (total_valid_count / target_goal) * 100.0)
    
    return {
        "valid_arch_count": total_valid_count,
        "target_goal": target_goal,
        "progress_percentage": round(percentage, 2),
        "checkpoint_unlocked": total_valid_count >= target_goal
    }

if __name__ == "__main__":
    # Exemplo de teste da lógica:
    test_data = [
        {"account_name": "player1_acc1", "hwid": "HWID_AAA", "ip_address": "192.168.1.1", "level": 360, "evolution": 1},
        {"account_name": "player1_acc2", "hwid": "HWID_AAA", "ip_address": "192.168.1.1", "level": 370, "evolution": 1},
        {"account_name": "player1_acc3", "hwid": "HWID_AAA", "ip_address": "192.168.1.1", "level": 380, "evolution": 1}, # 3ª conta descartada
        {"account_name": "player2_acc1", "hwid": "HWID_BBB", "ip_address": "192.168.1.2", "level": 356, "evolution": 1},
    ]
    
    result = calculate_checkpoint_progress(test_data, target_goal=100)
    print(f"Progresso do Checkpoint 1: {result['valid_arch_count']} / {result['target_goal']} ({result['progress_percentage']}%)")
    print(f"Selo Desbloqueado: {result['checkpoint_unlocked']}")
