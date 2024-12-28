//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SystemApertureUI/NSObject-Protocol.h>

@class NSString, NSUUID;

@protocol SAUITransitionTracking <NSObject>
@property(readonly, nonatomic, getter=isTrackingTransition) _Bool trackingTransition;
- (void)endTrackingTransitionWithUniqueIdentifier:(NSUUID *)arg1;
- (void)beginTrackingTransitionWithUniqueIdentifier:(NSUUID *)arg1 reason:(NSString *)arg2;

@optional
- (_Bool)isTrackingTransitionWithReason:(NSString *)arg1;
@end
