//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppleMediaServicesUI/NSObject-Protocol.h>

@class AMSUIWebSafariWebView, NSDictionary, NSString, NSURL;

@protocol AMSUIWebSafariWebDelegate <NSObject>
- (void)safariView:(AMSUIWebSafariWebView *)arg1 didRedirectToSchemeWithURL:(NSURL *)arg2;
- (void)safariView:(AMSUIWebSafariWebView *)arg1 didReceiveAction:(NSString *)arg2 body:(NSDictionary *)arg3 replyHandler:(void (^)(id, NSString *))arg4;
@end

