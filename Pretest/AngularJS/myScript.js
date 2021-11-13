// var app = angular.module("myApp", ["ngRoute"]);

// app.config(function($routeProvider) {
//     $routeProvider
//         .when("/", {
//             templateUrl: "test2.html"
//         })
//         .when("/Food", {
//             templateUrl: "Food.html"
//         })
//         .when("/addFood", {
//             templateUrl: "addFood.html"
//         })
//         .when("/g", {
//             templateUrl: "test2.html"
//         });
// });

// app.controller("myController", function($scope, $http) {

//     $http.get("Food.json").then(function(response) {
//         $scope.foodData = response.data;
//     });

//     $scope.addFood = function() {
//         $scope.foodData.push({
//             "id": $scope.id,
//             "name": $scope.name,
//             "price": $scope.price
//         });
//     }
// });