//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MailWebProcessSupport/NSObject-Protocol.h>

@class WKWebProcessPlugInBrowserContextController;
@protocol WKWebProcessPlugIn;

@protocol MSBundlePageController <NSObject>
+ (id)new;
- (void)invalidate;
- (id)initWithPlugIn:(id <WKWebProcessPlugIn>)arg1 contextController:(WKWebProcessPlugInBrowserContextController *)arg2;
- (id)init;
@end
