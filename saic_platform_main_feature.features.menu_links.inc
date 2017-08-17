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
  // Exported menu link: user-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f.
  $menu_links['user-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
    'router_path' => 'uuid',
    'link_title' => 'Advanced Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_advanced-search:uuid/node/c4f960eb-e02b-4b17-9ef3-ab0e5931ac0f',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: user-menu_collection:uuid/node/accbfa25-ab35-401f-87eb-50f90a351255.
  $menu_links['user-menu_collection:uuid/node/accbfa25-ab35-401f-87eb-50f90a351255'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/accbfa25-ab35-401f-87eb-50f90a351255',
    'router_path' => 'uuid',
    'link_title' => 'Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_collection:uuid/node/accbfa25-ab35-401f-87eb-50f90a351255',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: user-menu_help:uuid/node/5fdba21b-8a92-49bc-a97e-c10eb594c92a.
  $menu_links['user-menu_help:uuid/node/5fdba21b-8a92-49bc-a97e-c10eb594c92a'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/5fdba21b-8a92-49bc-a97e-c10eb594c92a',
    'router_path' => 'uuid',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_help:uuid/node/5fdba21b-8a92-49bc-a97e-c10eb594c92a',
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
  // Exported menu link: user-menu_research:uuid/node/8c9a1d3c-b1e4-41a1-b1e7-f8391353d90b.
  $menu_links['user-menu_research:uuid/node/8c9a1d3c-b1e4-41a1-b1e7-f8391353d90b'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/8c9a1d3c-b1e4-41a1-b1e7-f8391353d90b',
    'router_path' => 'uuid',
    'link_title' => 'Research',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_research:uuid/node/8c9a1d3c-b1e4-41a1-b1e7-f8391353d90b',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: user-menu_submit-content:uuid/node/4c2f685a-c41d-47b6-8923-371fa6d93d40.
  $menu_links['user-menu_submit-content:uuid/node/4c2f685a-c41d-47b6-8923-371fa6d93d40'] = array(
    'menu_name' => 'user-menu',
    'link_path' => 'uuid/node/4c2f685a-c41d-47b6-8923-371fa6d93d40',
    'router_path' => 'uuid',
    'link_title' => 'Submit Content',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'user-menu_submit-content:uuid/node/4c2f685a-c41d-47b6-8923-371fa6d93d40',
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
