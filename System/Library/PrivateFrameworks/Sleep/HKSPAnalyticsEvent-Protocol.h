//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sleep/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol HKSPAnalyticsEvent <NSObject>
@property(readonly, nonatomic) NSDictionary *eventPayload;
@property(readonly, nonatomic) NSString *eventName;

@optional
@property(readonly, nonatomic) NSArray *keysRequiringIHAGating;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,N

@end

