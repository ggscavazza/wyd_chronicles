-- ==============================================================================
-- WYD Chronicles - Script SQL da Tabela de Auditoria do Checkpoint 1
-- Banco de Dados: wyd_chronicles / wyd_chronicles_log
-- ==============================================================================

CREATE TABLE IF NOT EXISTS `checkpoint_audit` (
  `id` INT(11) NOT NULL AUTO_INCREMENT,
  `account_name` VARCHAR(64) NOT NULL,
  `char_name` VARCHAR(64) NOT NULL,
  `hwid` VARCHAR(128) NOT NULL,
  `ip_address` VARCHAR(45) NOT NULL,
  `evolution` TINYINT(4) NOT NULL DEFAULT 1, -- 1 = Arch
  `level` INT(11) NOT NULL DEFAULT 356,       -- Requisito: Level > 355
  `created_at` DATETIME NOT NULL DEFAULT CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`),
  KEY `idx_hwid_ip` (`hwid`, `ip_address`),
  KEY `idx_level_evol` (`level`, `evolution`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

-- Query oficial de verificação de progresso (Máximo 2 contas por HWID/IP):
-- SELECT SUM(account_count) AS total_valid_archs FROM (
--     SELECT LEAST(COUNT(DISTINCT account_name), 2) AS account_count
--     FROM checkpoint_audit
--     WHERE level > 355 AND evolution >= 1
--     GROUP BY hwid, ip_address
-- ) AS audited_progress;
