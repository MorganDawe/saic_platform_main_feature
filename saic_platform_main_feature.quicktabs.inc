<?php
/**
 * @file
 * saic_platform_main_feature.quicktabs.inc
 */

/**
 * Implements hook_quicktabs_default_quicktabs().
 */
function saic_platform_main_feature_quicktabs_default_quicktabs() {
  $export = array();

  $quicktabs = new stdClass();
  $quicktabs->disabled = FALSE; /* Edit this to true to make a default quicktabs disabled initially */
  $quicktabs->api_version = 1;
  $quicktabs->machine_name = 'promoted_tabs';
  $quicktabs->ajax = 0;
  $quicktabs->hide_empty_tabs = FALSE;
  $quicktabs->default_tab = 0;
  $quicktabs->title = 'Promoted Tabs';
  $quicktabs->tabs = array(
    0 => array(
      'vid' => 'promoted_tab_view',
      'display' => 'block',
      'args' => '',
      'use_title' => TRUE,
      'title' => 'Featured',
      'weight' => '-100',
      'type' => 'view',
    ),
    1 => array(
      'vid' => 'promoted_tab_view',
      'display' => 'block_1',
      'args' => '',
      'use_title' => 0,
      'title' => 'SAIC Publications',
      'weight' => '-99',
      'type' => 'view',
    ),
    2 => array(
      'vid' => 'promoted_tab_view',
      'display' => 'block_2',
      'args' => '',
      'use_title' => 0,
      'title' => 'Roger Brown',
      'weight' => '-98',
      'type' => 'view',
    ),
    3 => array(
      'vid' => 'promoted_tab_view',
      'display' => 'block_3',
      'args' => '',
      'use_title' => 0,
      'title' => 'Recently Added',
      'weight' => '-97',
      'type' => 'view',
    ),
    4 => array(
      'vid' => 'promoted_tab_view',
      'display' => 'block_4',
      'args' => '',
      'use_title' => 0,
      'title' => 'Newly Added',
      'weight' => '-96',
      'type' => 'view',
    ),
  );
  $quicktabs->renderer = 'ui_tabs';
  $quicktabs->style = 'default';
  $quicktabs->options = array(
    'history' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Featured');
  t('Newly Added');
  t('Promoted Tabs');
  t('Recently Added');
  t('Roger Brown');
  t('SAIC Publications');

  $export['promoted_tabs'] = $quicktabs;

  return $export;
}
