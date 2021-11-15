var app = angular.module("myApp", ["ngRoute"]);

app.config(function($routeProvider) {

    $routeProvider

        .when("/", {
            templateUrl: "Phophongcach.html"
        })
        .when("/Food", {
            templateUrl: "Food.html",

        })
        .when("/addFood", {
            templateUrl: "addFood.html",
            controller: "addCtrl"
        })
        .when("/about", {
            templateUrl: "aboutMe.html",

        });
});

app.controller("mainCtrl", function($scope, $http) {

    $http.get("Food.json").then(function(response) {
        $scope.foodData = response.data;
        return $scope.foodData;
    });
});

app.controller("addCtrl", function($scope) {

    $scope.addFood = function() {

        alert("Add new food successfully");
        $scope.foodData.push({
            "fID": $scope.fID,
            "name": $scope.name,
            "price": $scope.price
        });
        return foodData;
    };
});