<?php
/**
 * @file
 * off_wiki_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function off_wiki_feature_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['book_explorer-book_explorer'] = array(
    'cache' => 5,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'book_explorer',
    'module' => 'book_explorer',
    'node_types' => array(),
    'pages' => 'node/*/talk
node/*/track
node/*/edit',
    'roles' => array(),
    'themes' => array(
      'custom_theme' => array(
        'region' => 'content_top',
        'status' => 1,
        'theme' => 'custom_theme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}