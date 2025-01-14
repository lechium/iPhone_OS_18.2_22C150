//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeDataModel/HMTriggerBuilder-Protocol.h>

@class HMActionSetBuilder, HMTriggerPolicy, NSString;

@protocol HMTriggerBuilderPrivate <HMTriggerBuilder>
@property(readonly, nonatomic) HMActionSetBuilder *triggerOwnedActionSet;
@property(readonly, nonatomic) _Bool nameIsConfigured;
@property(retain, nonatomic) HMTriggerPolicy *policy;
- (void)setName:(NSString *)arg1 isConfigured:(_Bool)arg2;
@end

