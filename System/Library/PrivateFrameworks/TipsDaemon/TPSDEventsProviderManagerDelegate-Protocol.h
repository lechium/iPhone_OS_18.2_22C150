//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TipsDaemon/NSObject-Protocol.h>

@class NSArray, TPSEventProviderResult, TPSEventsProviderManager;

@protocol TPSDEventsProviderManagerDelegate <NSObject>

@optional
- (void)dataProviderManager:(TPSEventsProviderManager *)arg1 didReceiveCallbackWithResult:(TPSEventProviderResult *)arg2 type:(long long)arg3;
- (void)dataProviderManager:(TPSEventsProviderManager *)arg1 didFinishQueryWithResults:(NSArray *)arg2 type:(long long)arg3;
@end

