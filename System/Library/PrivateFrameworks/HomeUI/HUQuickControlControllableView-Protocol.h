//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeUI/NSObject-Protocol.h>

@class HUIntrinsicSizeDescriptor, HUQuickControlViewProfile;

@protocol HUQuickControlControllableView <NSObject>
@property(copy, nonatomic) HUQuickControlViewProfile *profile;
@property(retain, nonatomic) id value;
- (HUIntrinsicSizeDescriptor *)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1;
- (id)initWithProfile:(HUQuickControlViewProfile *)arg1;

@optional
@property(nonatomic) unsigned long long reachabilityState;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(retain, nonatomic) id secondaryValue;
// Preceding property had unknown attributes: ?
// Original attribute string: T@,?,&,N

@end
