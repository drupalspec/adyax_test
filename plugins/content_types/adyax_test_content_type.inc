<?php

/**
 * @file
 * Describes plugin for test block content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array(
	'title' => t('Vimeo test'),
	'description' => t('Vimeo test'),
	'single' => TRUE,
	'render callback' => 'adyax_test_content_type_render',
	'category' => array(t('Vimeo test'), -9),
);

/**
 * Run-time rendering of the body of the block.
 */
function adyax_test_content_type_render($subtype, $conf, $args, $context) {
	$block = new stdClass();
	$nodes = db_select('node', 'n')
		->condition('n.status', 1)
		->fields('n', array('nid'))
		->range(0, 1)
		->condition('n.type', 'vimeo')
		->execute()
		->fetchCol();
	$block->content = '';
	$block->title = '';
	if (!empty($nodes)) {
		foreach ($nodes as $key => $value) {
			$block->content[] = node_view(node_load($value), 'full');
		}
	}
	else {
		$block->content.= t('Please create <a href="/node/add/vimeo">new node</a>');
	}
	return $block;
}