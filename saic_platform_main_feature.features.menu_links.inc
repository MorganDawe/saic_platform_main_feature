<?php
/**
 * @file
 * saic_platform_main_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function saic_platform_main_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_home:<front>.
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 1,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: user-menu_advanced-search:node/9.
  $menu_links['user-menu_advanced-search:node/9'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/9',
    'router_path' => 'node/%',
    'link_title' => 'Advanced Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_advanced-search:node/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_collection:node/20.
  $menu_links['user-menu_collection:node/20'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/20',
    'router_path' => 'node/%',
    'link_title' => 'Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_collection:node/20',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_help:islandora.
  $menu_links['user-menu_help:islandora'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'islandora',
    'router_path' => 'islandora',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_help:islandora',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: user-menu_log-out:user/logout.
  $menu_links['user-menu_log-out:user/logout'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'identifier' => 'user-menu_log-out:user/logout',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: user-menu_login:user/login.
  $menu_links['user-menu_login:user/login'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Login',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_login:user/login',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: user-menu_research:node/22.
  $menu_links['user-menu_research:node/22'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/22',
    'router_path' => 'node/%',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_research:node/22',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_submit-content:node/21.
  $menu_links['user-menu_submit-content:node/21'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'node/21',
    'router_path' => 'node/%',
    'link_title' => 'Submit Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_submit-content:node/21',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: user-menu_user-account:user.
  $menu_links['user-menu_user-account:user'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'user',
    'router_path' => 'user',
    'link_title' => 'User account',
    'options' => array(
      'alter' => TRUE,
      'identifier' => 'user-menu_user-account:user',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Advanced Search');
  t('Collection');
  t('Help');
  t('Home');
  t('Log out');
  t('Login');
  t('Research');
  t('Submit Content');
  t('User account');

  return $menu_links;
}
