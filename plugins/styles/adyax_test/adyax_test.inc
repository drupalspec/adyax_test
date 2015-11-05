<?php

/**
 * @file
 * Definition of the adyax test panel style.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
	'adyax_test' => array(
		'title' => t('adyax test'),
		'description' => t('adyax test description'),
		'render pane' => 'adyax_test_render_pane',
		'render region' => 'adyax_test_render_region',
		'pane settings form' => 'adyax_test_settings_form',
		'hook theme' => array(
			'adyax_test_theme_pane' => array(
				'template' => 'adyax-test-pane',
				'path' => drupal_get_path('module', 'adyax_test') .
					'/plugins/styles/adyax_test',
				'variables' => array(
					'content' => NULL,
					'settings' => NULL,
				),
			),
			'adyax_test_theme_region' => array(
				'template' => 'adyax-test-region',
				'path' => drupal_get_path('module', 'adyax_test') .
					'/plugins/styles/adyax_test',
				'variables' => array(
					'content' => NULL,
					'settings' => NULL,
				),
			),
		),
	),
);

/**
 * Render callback for a single pane.
 */
function theme_adyax_test_render_pane($vars) {
	$settings = $vars['settings'];
	$content = $vars['content'];
	$render = theme('adyax_test_theme_pane',
		array('content' => $content, 'settings' => $settings));
	return $render;
}

/**
 * Render callback for a single region.
 */
function theme_adyax_test_render_region($vars) {
	$settings = $vars['settings'];  
	$render = '';
	
	$content = '';
	foreach ($vars['panes'] as $pane_id => $pane_output) {
		$content .= $pane_output;
	}  
	if (!empty($content)) {
		$render = theme('adyax_test_theme_region',
			array('content' => $content, 'settings' => $settings));
	}
	
	return $render;
}

/**
 * Settings form callback.
 */
function adyax_test_settings_form($style_settings) {
	$form = array();

	$form['border_width'] = array(
		'#type' => 'textfield',
		'#title' => t('Border having a predetermined width.'),
		'#size' => 4,
		'#maxlength' => 4,
		'#description' => t('Set the width of the border.'),
		'#required' => TRUE,
		'#default_value' => (isset($style_settings['border_width'])) ?
			$style_settings['border_width'] : '10',
	);

	return $form;
}