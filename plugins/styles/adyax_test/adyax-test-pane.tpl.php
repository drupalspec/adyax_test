<?php drupal_add_css(drupal_get_path('module', 'adyax_test') . '/plugins/styles/adyax_test/adyax_test.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="adyax-test-pane" style="border-width: <?php print (isset($settings['border_width'])) ? $settings['border_width'] : 'none'; ?>px">
  <?php if (isset($content->title) and !empty($content->title)) : ?>
    <h3 class="pane-title"><?php print $content->title; ?></h3>
  <?php endif ?>
  <div class="pane-content">
    <?php print render($content->content); ?>
  </div>
</div>