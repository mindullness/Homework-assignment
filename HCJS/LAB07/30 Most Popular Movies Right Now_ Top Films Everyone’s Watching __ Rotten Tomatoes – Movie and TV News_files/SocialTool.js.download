define([
    "jquery", "underscore", "marionette", "globals", "facebook"
], function($, _, Marionette, RT, FB) {
    return Marionette.ItemView.extend({
        attributes: function() {
            return {
                id: "social-tools",
                class: "social-tools"
            }
        },
        initialize: function(options) {
            this.facebookLikeId = 0;
            RT.fb_ready.done(this.onFbReady.bind(this));
            this.template = _.template(options.SocialToolTemplate);
            if (options.movieId) {
                this.forumLink = RT.ForumHost + "/forum/category/2/" + options.movieId;
            } else if (options.tvSeriesId) {
                this.forumLink = RT.ForumHost + "/forum/category/4/" + options.tvSeriesId;
            }
        },
        events: {
            "click .social-tools-facebook-like" : "fbLike_click",
            "click .social-tools-facebook-share" : "fbShare_click",
            "click .social-tools-twitter" : "newTwitterWindow",
            "click .social-tools-googleplus": "newGooglePlusWindow",
            "click .social-tools-pinterest": "newPinterestWindow",
            "click .social-tools-stumbleupon": "newStumbleUponWindow"
        },
        serializeData: function() {
            return { forumLink: this.forumLink };
        },
        onFbReady : function() {
            FB.api( 'me/og.likes', 'get', { object: document.URL }, this.facebookLikeResult.bind(this));
        },
        facebookLikeResult: function(response) {
            // Toggle Facebook like button
            if (response !== null && response.data !== undefined && response.data.length > 0) {
                this.$(".social-tools-facebook-like").addClass("liked");
                this.$(".fb_like").attr("src", RT.StaticHost+"/images/social/social_fb_liked.png");
                this.facebookLikeId = response.data[0].id;
            } else {
                this.$(".social-tools-facebook-like").removeClass("liked");
            }
        },
        fbLike_click : function(evt) {
            RT.Sharing.fbLike_click($(evt.currentTarget));
        },
        fbShare_click : function(url) {
            RT.Sharing.fbShare_click();
        },
        newTwitterWindow : function(){
            RT.Sharing.newTwitterWindow();
        },
        newPinterestWindow : function(){
            RT.Sharing.newPinterestWindow();
        },
        newGooglePlusWindow : function(){
            RT.Sharing.newGooglePlusWindow();
        },
        newStumbleUponWindow : function(){
            RT.Sharing.newStumbleUponWindow();
        }
    });
});