<?php
/**
 * @file
 * committees.features.inc
 */

/**
 * Implements hook_views_api().
 */
function committees_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function committees_node_info() {
  $items = array(
    'committee' => array(
      'name' => t('Committee'),
      'base' => 'node_content',
      'description' => t('Groups of users within the organization'),
      'has_title' => '1',
      'title_label' => t('Committee Name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
