<?php
/**
 * @file
 * committees.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function committees_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create committee content'.
  $permissions['create committee content'] = array(
    'name' => 'create committee content',
    'roles' => array(
      'Committee Chair' => 'Committee Chair',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any committee content'.
  $permissions['delete any committee content'] = array(
    'name' => 'delete any committee content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own committee content'.
  $permissions['delete own committee content'] = array(
    'name' => 'delete own committee content',
    'roles' => array(
      'Committee Chair' => 'Committee Chair',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any committee content'.
  $permissions['edit any committee content'] = array(
    'name' => 'edit any committee content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own committee content'.
  $permissions['edit own committee content'] = array(
    'name' => 'edit own committee content',
    'roles' => array(
      'Committee Chair' => 'Committee Chair',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
