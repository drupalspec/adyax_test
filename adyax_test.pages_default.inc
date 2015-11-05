<?php
/**
 * @file
 * adyax_test.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function adyax_test_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'vimeo_test';
  $page->task = 'page';
  $page->admin_title = 'Vimeo test';
  $page->admin_description = '';
  $page->path = 'test';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_vimeo_test__panel';
  $handler->task = 'page';
  $handler->subtask = 'vimeo_test';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'b0f5e4b8-3613-407f-8d5f-9e9792963b06';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-a290ce52-2ad3-4bc8-a19a-4e01eef524ea';
    $pane->panel = 'center';
    $pane->type = 'adyax_test_content_type';
    $pane->subtype = 'adyax_test_content_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a290ce52-2ad3-4bc8-a19a-4e01eef524ea';
    $display->content['new-a290ce52-2ad3-4bc8-a19a-4e01eef524ea'] = $pane;
    $display->panels['center'][0] = 'new-a290ce52-2ad3-4bc8-a19a-4e01eef524ea';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a290ce52-2ad3-4bc8-a19a-4e01eef524ea';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['vimeo_test'] = $page;

  return $pages;

}
