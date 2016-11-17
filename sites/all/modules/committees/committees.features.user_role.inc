<?php
/**
 * @file
 * committees.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function committees_user_default_roles() {
  $roles = array();

  // Exported role: Committee Chair.
  $roles['Committee Chair'] = array(
    'name' => 'Committee Chair',
    'weight' => 2,
  );

  return $roles;
}
