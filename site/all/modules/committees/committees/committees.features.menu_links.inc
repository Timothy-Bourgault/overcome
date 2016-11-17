<?php
/**
 * @file
 * committees.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function committees_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_committees:committees.
  $menu_links['main-menu_committees:committees'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'committees',
    'router_path' => 'committees',
    'link_title' => 'Committees',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_committees:committees',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: navigation_committee:node/add/committee.
  $menu_links['navigation_committee:node/add/committee'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/committee',
    'router_path' => 'node/add/committee',
    'link_title' => 'Committee',
    'options' => array(
      'attributes' => array(
        'title' => 'Groups of users within the organization',
      ),
      'identifier' => 'navigation_committee:node/add/committee',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Committee');
  t('Committees');

  return $menu_links;
}
