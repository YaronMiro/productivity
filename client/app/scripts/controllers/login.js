'use strict';

/**
 * @ngdoc function
 * @name clientApp.controller:LoginCtrl
 * @description
 * # LoginCtrl
 * Controller of the clientApp
 */
angular.module('clientApp')
  .controller('LoginCtrl', function ($scope, Auth, $state, Config, localStorageService) {

    // Will be FALSE during login GET period - will cause the login button to be
    // disabled.
    $scope.loginButtonEnabled = true;

    // Will be TRUE after failed login attempt.
    $scope.loginFailed = false;

    // Check if there's a login error message.
    $scope.loginErrorMessage = localStorageService.get('loginErrorMessage');
    // Reset message in local storage (Not to display the same message again).
    localStorageService.set('loginErrorMessage', '');

    /**
     * Login a given user.
     *
     * If everything goes well, change state to 'main'.
     *
     * @param user
     *   Object with the properties "username" and "password".
     */
    $scope.login = function(user) {
      $scope.loginButtonEnabled = false;
      Auth.login(user).then(function() {
        $state.go('homepage');
      }, function() {
        $scope.loginButtonEnabled = true;
        $scope.loginFailed = true;
      });
    };

    $scope.githubClientId = Config.githubClientId;

    $scope.githubPrivateAccess = false;
  });
