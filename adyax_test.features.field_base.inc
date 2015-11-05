<?php
/**
 * @file
 * adyax_test.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function adyax_test_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_vimeo'.
  $field_bases['field_vimeo'] = array(
    'active' => 1,
    'cardinality' => 3,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_vimeo',
    'indexes' => array(
      'adyax_test_vimeo' => array(
        0 => 'adyax_test_vimeo',
      ),
    ),
    'locked' => 0,
    'module' => 'adyax_test',
    'settings' => array(
      'max_length' => 255,
    ),
    'translatable' => 0,
    'type' => 'adyax_test_vimeo',
  );

  return $field_bases;
}
