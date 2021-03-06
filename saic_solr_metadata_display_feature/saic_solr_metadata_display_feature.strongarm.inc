<?php
/**
 * @file
 * saic_solr_metadata_display_feature.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function saic_solr_metadata_display_feature_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'islandora_metadata_display';
  $strongarm->value = 'islandora_solr_metadata';
  $export['islandora_metadata_display'] = $strongarm;

  return $export;
}
