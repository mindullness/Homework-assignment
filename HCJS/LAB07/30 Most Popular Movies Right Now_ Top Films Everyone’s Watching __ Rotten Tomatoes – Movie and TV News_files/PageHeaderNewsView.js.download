define([
    "jquery",
    "globals",
    "underscore",
    "clamp"
], function($, RT, _) {
    _.templateSettings = {
        interpolate: /\<\@\=(.+?)\@\>/gim,
        evaluate: /\<\@(.+?)\@\>/gim
    };
    return {
        load: function(resourceId, require, load) {
            require([
                RT.StaticHost + "/js/app/App.js",
                "text!" + RT.StaticHost + "/templates/News.PageHeader.item.html",
                "text!" + RT.StaticHost + "/templates/PageHeader.cfp.item.html",
                "text!" + RT.StaticHost + "/templates/PageHeader.list.item.html"
            ], function(PageHeader,NewsItemTemplate, PageHeaderCFP, PageHeaderListItem) {
                PageHeader.module("PageHeaderView", function(PageHeaderView, PageHeader, Backbone, Marionette, $, _) {
                    PageHeaderView.NewsItem = Marionette.ItemView.extend({
                        template: _.template(NewsItemTemplate),
                        className: "newsContainerItem",
                        onRender: function() {
                            $clamp(this.$(".newsTitle").get(0), {clamp:2});
                        }
                    });
                    PageHeaderView.NewsPanel = Marionette.CollectionView.extend({
                        childView: PageHeaderView.NewsItem,
                        childViewOptions: {},
                        initialize: function(options) {
                            this.collection = options.collection;
                        }
                    });
                    PageHeaderView.CFPItem = Marionette.ItemView.extend({
                        template: _.template(PageHeaderCFP),
                        initialize: function(options) {
                            this.item = options.item;
                        },
                        serializeData: function() {
                            return this.item;
                        }
                    });
                    PageHeaderView.ListItem = Marionette.ItemView.extend({
                        template: _.template(PageHeaderListItem),
                        tagName: "tr",
                        className: "tv_show_tr tvTopListTitle",
                        initialize: function(options) {
                            this.item = options.item;
                        },
                        serializeData: function() {
                            return this.item;
                        },
                        onRender: function() {
                            this.$el.data("season-id", this.item.showId);
                        }
                    })
                });
                load(PageHeader.PageHeaderView);
            });
        }
    };
});