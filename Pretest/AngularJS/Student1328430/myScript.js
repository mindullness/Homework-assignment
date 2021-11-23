var app = angular.module("myApp", ["ngRoute"]);

app.config(function($routeProvider) {

    $routeProvider

        .when("/", {
            templateUrl: "Phophongcach.html"
        })
        .when("/Flights", {
            templateUrl: "Flights.html",
        })
        .when("/addFlight", {
            templateUrl: "addFlight.html",
            controller: "addCtrl"
        })
        .when("/about", {
            templateUrl: "vj.html",

        });
});

app.controller("mainCtrl", function($scope, $http) {

    $http.get("flight.json").then(function(response) {
        $scope.flightData = response.data;
        console.log($scope.flightData)
    });

});

app.controller("addCtrl", function($scope) {

    $scope.addFlight = function() {

        alert("Add new flight successfully");
        $scope.flightData.push({
            "code": $scope.code,
            "from": $scope.from,
            "to": $scope.to,
            "time": $scope.time,
        });
        return flightData;
    };
});