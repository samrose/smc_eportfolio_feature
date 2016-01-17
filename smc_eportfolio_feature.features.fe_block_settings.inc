<?php
/**
 * @file
 * smc_eportfolio_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function smc_eportfolio_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['views-e_portfolio_comments-block'] = array(
    'cache' => -1,
    'delta' => 'e_portfolio_comments-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smc_base' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smc_base',
        'weight' => 0,
      ),
    ),
  );

  $export['views-e_portfolio_content-block'] = array(
    'cache' => -1,
    'delta' => 'e_portfolio_content-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'smc_base' => array(
        'region' => 'highlighted',
        'status' => 1,
        'theme' => 'smc_base',
        'weight' => 0,
      ),
    ),
  );

  return $export;
}
