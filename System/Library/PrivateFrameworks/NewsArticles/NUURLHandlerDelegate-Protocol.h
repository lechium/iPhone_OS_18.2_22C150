//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsArticles/NSObject-Protocol.h>

@class NSURL, NUURLHandler, UIViewController;

@protocol NUURLHandlerDelegate <NSObject>
- (void)URLHandler:(NUURLHandler *)arg1 willOpenURL:(NSURL *)arg2;
- (void)URLHandler:(NUURLHandler *)arg1 wantsToPresentViewController:(UIViewController *)arg2 animated:(_Bool)arg3;
@end

