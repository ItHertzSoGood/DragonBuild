//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//



@class NSData, UIWebView;

@interface PSWebContainerView : UIView <UIWebViewDelegate>
{
    UIWebView *_webView;
    NSData *_content;
}

@property(retain, nonatomic) NSData *content; // @synthesize content=_content;
@property(readonly, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
// - (void).cxx_destruct;
- (BOOL)uiWebView:(id)arg1 previewIsAllowedForPosition:(CGPoint)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (double)heightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setUserStyleSheet:(id)arg1;
- (id)init;

@end

