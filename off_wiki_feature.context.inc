<?php
/**
 * @file
 * off_wiki_feature.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function off_wiki_feature_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'group_wiki';
  $context->description = 'Show wiki block(s) on groups/group content.';
  $context->tag = '';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        '_any_' => '_any_',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-wiki_list-group_block' => array(
          'module' => 'views',
          'delta' => 'wiki_list-group_block',
          'region' => 'sidebar_second',
          'weight' => '10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show wiki block(s) on groups/group content.');
  $export['group_wiki'] = $context;

  return $export;
}
