<?php
/**
 * @file
 * off_wiki_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function off_wiki_feature_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function off_wiki_feature_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function off_wiki_feature_node_info() {
  $items = array(
    'book' => array(
      'name' => t('Wiki'),
      'base' => 'node_content',
      'description' => t('<em>Wikis (Books)</em> have a built-in hierarchical navigation. Use for handbooks or tutorials.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
