//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HFActionBuilder, HFMediaPlaybackActionBuilder, HMHome, NAFuture, NSArray;

@protocol HFActionSetBuilderProtocol <NSObject>
@property(readonly, nonatomic) NSArray *matterActionBuilders;
@property(readonly, nonatomic) NSArray *naturalLightingActions;
@property(readonly, nonatomic) HFMediaPlaybackActionBuilder *mediaAction;
@property(readonly, nonatomic, getter=isAffectedByEndEvents) _Bool affectedByEndEvents;
@property(readonly, nonatomic) _Bool requiresDeviceUnlock;
@property(readonly, nonatomic) NSArray *actions;
@property(readonly, nonatomic) HMHome *home;
- (NAFuture *)deleteActionSet;
- (void)removeAllActions;
- (void)removeAction:(HFActionBuilder *)arg1;
- (void)updateAction:(HFActionBuilder *)arg1;
- (void)addAction:(HFActionBuilder *)arg1;
@end

