//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ContentKit/NSObject-Protocol.h>

@class NSError, NSURLAuthenticationChallenge, WKNavigation, WKNavigationAction, WKNavigationResponse, WKWebView, WKWebpagePreferences;

@protocol WKNavigationDelegate <NSObject>

@optional
- (void)webViewWebContentProcessDidTerminate:(WKWebView *)arg1;
- (void)webView:(WKWebView *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)webView:(WKWebView *)arg1 didFailNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didFinishNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didCommitNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didFailProvisionalNavigation:(WKNavigation *)arg2 withError:(NSError *)arg3;
- (void)webView:(WKWebView *)arg1 didReceiveServerRedirectForProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 didStartProvisionalNavigation:(WKNavigation *)arg2;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationResponse:(WKNavigationResponse *)arg2 decisionHandler:(void (^)(long long))arg3;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 preferences:(WKWebpagePreferences *)arg3 decisionHandler:(void (^)(long long, WKWebpagePreferences *))arg4;
- (void)webView:(WKWebView *)arg1 decidePolicyForNavigationAction:(WKNavigationAction *)arg2 decisionHandler:(void (^)(long long))arg3;
@end

