<?php
/**
 * @file
 * saic_platform_content_types.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function saic_platform_content_types_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_image_default_styles().
 */
function saic_platform_content_types_image_default_styles() {
  $styles = array();

  // Exported image style: islandora_imagecache_image_style_large.
  $styles['islandora_imagecache_image_style_large'] = array(
    'label' => 'Islandora Imagecache Image Style Large Size',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 250,
          'height' => 250,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_medium.
  $styles['islandora_imagecache_image_style_medium'] = array(
    'label' => 'Islandora Imagecache Image Style Medium Size',
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 210,
          'height' => 210,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: islandora_imagecache_image_style_small.
  $styles['islandora_imagecache_image_style_small'] = array(
    'label' => 'Islandora Imagecache Image Style Small Size',
    'effects' => array(
      0 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 110,
          'height' => 110,
          'upscale' => 1,
        ),
        'weight' => 0,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function saic_platform_content_types_node_info() {
  $items = array(
    'image_block' => array(
      'name' => t('Image Block'),
      'base' => 'node_content',
      'description' => t('Images to be contained within blocks'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
