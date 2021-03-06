<?php
/**
 * @file
 * lullablog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function lullablog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function lullablog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function lullablog_node_info() {
  $items = array(
    'lullablog' => array(
      'name' => t('Lullablog'),
      'base' => 'node_content',
      'description' => t('Lullablog'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
