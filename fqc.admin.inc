<?php 
/**
 * @file fqc.admin.inc
 */
/**
 * @see system_settings_form
 */
function fqc_admin_structure($form, &$form_state) {
  $form['fqc_endpoints'] = array(
    '#type' => 'textarea',
    '#title' => t('Enter URLs for SPARQL endpoints'),
    '#description' => t('One endpoint per line. Note: If thes URLs point to '
      . "Drupal websites (1) enable the SPARQL Endpoint module and (2) the "
      . 'URL should look like this: http://mywebsite.com/!sparql.', 
      array('!sparql' => '<strong>sparql</strong>')),
    '#default_value' => variable_get('fqc_endpoints', NULL),
  );
  $form['fqc_refresh_data'] = array(
    '#type' => 'submit',
    '#value' => t('Refresh Data'),
    '#submit' => array('fqc_get_data'),
  );

  return system_settings_form($form);
}
