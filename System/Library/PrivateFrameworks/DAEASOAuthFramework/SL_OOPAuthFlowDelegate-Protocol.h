//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableURLRequest, NSString, NSURL, NSURLRequest;

@protocol SL_OOPAuthFlowDelegate
- (void)webViewDidFinishLoadWithPageTitleSupplier:(void (^)(void (^)(NSString *)))arg1;
- (_Bool)shouldHideWebViewForLoadWithRequest:(NSURLRequest *)arg1;
- (NSMutableURLRequest *)requestForAuthURL:(NSURL *)arg1;
- (NSURL *)authURLForUsername:(NSString *)arg1;
- (void)setAuthFlowCompletion:(void (^)(_Bool, NSDictionary *, NSError *))arg1;
- (NSString *)initialRedirectURL;
@end
