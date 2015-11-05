<?php
/**
 * @file
 * adyax_test.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function adyax_test_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-vimeo-field_vimeo'.
  $field_instances['node-vimeo-field_vimeo'] = array(
    'bundle' => 'vimeo',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'adyax_test',
        'settings' => array(),
        'type' => 'adyax_test_formatter',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_vimeo',
    'label' => 'Vimeo',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'adyax_test',
      'settings' => array(),
      'type' => 'vimeo_widget',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Vimeo');

  return $field_instances;
}
