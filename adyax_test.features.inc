<?php
/**
 * @file
 * adyax_test.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function adyax_test_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function adyax_test_node_info() {
  $items = array(
    'vimeo' => array(
      'name' => t('Vimeo'),
      'base' => 'node_content',
      'description' => t('Add vimeo thumbanil on website'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
