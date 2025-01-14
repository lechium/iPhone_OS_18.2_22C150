//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DashBoard/NSObject-Protocol.h>

@class NSData, NSString;
@protocol DBUISyncChannelObserving;

@protocol DBUISyncChannelProtocol <NSObject>
- (void)sendPayload:(NSData *)arg1 forDisplayID:(NSString *)arg2 description:(NSString *)arg3;
- (void)removeObserver:(id <DBUISyncChannelObserving>)arg1 forDisplayID:(NSString *)arg2;
- (void)addObserver:(id <DBUISyncChannelObserving>)arg1 forDisplayID:(NSString *)arg2;
@end

