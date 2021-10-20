define(["jquery", "globals", "underscore"], function($, RT, _) {
    _.templateSettings = {
        interpolate: /\<\@\=(.+?)\@\>/gim,
        evaluate: /\<\@(.+?)\@\>/gim
    };
    return {
        load: function(resourceId, require, load) {
            require([
                RT.StaticHost + "/js/app/App.js"
            ], function(News) {
                News.module("Model", function(NewsModel,News,Backbone,Marionette,$,_) {
                    NewsModel.NewsItems = Backbone.Collection.extend({
                        model: Backbone.Model,
                        url: RT.EditorialHost + "/wp-json/",
                        initialize: function(options) {
                            if (options.hub) {
                                this.url += "posts/?type=rt-hub";
                            } else if (options.thirdPartyOnly) {
                                this.url += "posts/?type=non-rt-publication";
                            } else {
                                this.url += "articles/";
                                if (options.movieId) {
                                    this.url += "?filter[related-movie-id]=" + options.movieId;
                                } else if (options.seriesId) {
                                    this.url += "?filter[related-tv-series-id]=" + options.seriesId;
                                } else if (options.seasonId) {
                                    this.url += "?filter[related-tv-season-id]=" + options.seasonId;
                                } else if (options.episodeId) {
                                    this.url += "?filter[related-tv-episode-id]=" + options.episodeId;
                                } else if (options.celebrityId) {
                                    this.url += "?filter[related-celebrity-id]=" + options.celebrityId;
                                } else if (options.column) {
                                    this.url += "?filter[meta_query][included_columns]=" + options.column;
                                }
                            }
                            if (-1 !== this.url.indexOf("?")) {
                                this.url += "&";
                            } else {
                                this.url += "?";
                            }
                            if (options.limit) {
                                this.url += "filter[posts_per_page]=" + options.limit;
                            } else {
                                this.url += "filter[posts_per_page]=3";
                            }
                            if (options.excludeColumn) {
                                this.url += "&filter[meta_query][excluded_columns]=" + options.excludeColumn;
                            }
                        },
                        parse: function(response) {
                            for (var i = 0; i < response.length; ++i) {
                                var article = response[i];
                                if (article.featured_image && article.featured_image.source) {
                                    article.displayPhotoUrl = article.featured_image.source;
                                } else {
                                    article.displayPhotoUrl = RT.StaticHost + "/images/icons/rt-blankeditorial-v1.png";
                                }
                            }
                            return response;
                        }
                    });
                });
                load(News.Model);
            });
        }
    };
});