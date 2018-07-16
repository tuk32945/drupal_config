<?php
// $config_directories['sync'] = dirname(DRUPAL_ROOT) . '/drupal_config/sync/klein.unidrupal.local';
// $config_directories['sync'] = dirname(DRUPAL_ROOT) . '/drupal_config/sync/default_genesis_config_base';
// $config['config_split.config_split.dev_disable_admin_uis']['folder'] = dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/dev_disable_admin_uis';
// $config['config_split.config_split.prod_unidrupal_syslog_tweak']['folder'] = dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/prod_unidrupal_syslog_tweak';
// $config['config_split.config_split.prod_enable_tu_modules']['folder'] = dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/prod_enable_tu_modules';

$config_splits = array(
  'config_split.config_split.dev_disable_admin_uis' => array(
      'folder' => dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/dev_disable_admin_uis'
  ),
  'config_split.config_split.prod__syslog_tweak' => array(
      'folder' => dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/prod_syslog_tweak'
  ),
  'config_split.config_split.prod_enable_tu_modules' => array(
      'folder' => dirname(DRUPAL_ROOT) . '/drupal_config/split/origin/prod_enable_tu_modules'
  ),
);
