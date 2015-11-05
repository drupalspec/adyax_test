<?php drupal_add_css(drupal_get_path('module', 'adyax_test') . '/plugins/styles/adyax_test/adyax_test.css', array('group' => CSS_DEFAULT, 'every_page' => TRUE)); ?>
<div class="adyax-test-region" style="border-style: solid; border-color: red; border-width: <?php print (isset($settings['border_width'])) ? $settings['border_width'] : 'none'; ?>px">
  <?php print $content; ?>
</div>