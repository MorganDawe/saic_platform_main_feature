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
  $strongarm->name = 'islandora_solr_limit_result_fields';
  $strongarm->value = 1;
  $export['islandora_solr_limit_result_fields'] = $strongarm;

  return $export;
}
