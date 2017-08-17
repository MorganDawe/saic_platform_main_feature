<?php
/**
 * @file
 * saic_solr_config_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function saic_solr_config_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_result_limit_block_override';
  $strongarm->value = 0;
  $export['islandora_solr_collection_result_limit_block_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_sort';
  $strongarm->value = '';
  $export['islandora_solr_collection_sort'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_collection_sort_block_override';
  $strongarm->value = 1;
  $export['islandora_solr_collection_sort_block_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_limit_result_fields';
  $strongarm->value = 1;
  $export['islandora_solr_limit_result_fields'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display';
  $strongarm->value = 'default';
  $export['islandora_solr_primary_display'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_solr_primary_display_table';
  $strongarm->value = array(
    'weight' => array(
      'bookmark' => '0',
      'default' => '0',
      'grid' => '0',
      'table' => '0',
      'xquery' => '0',
    ),
    'default' => 'default',
    'enabled' => array(
      'bookmark' => 'bookmark',
      'grid' => 'grid',
      'table' => 'table',
      'default' => 'default',
      'xquery' => 0,
    ),
  );
  $export['islandora_solr_primary_display_table'] = $strongarm;

  return $export;
}
