//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMActionSetBuilder-Protocol.h>
#import <HomeKit/HMActionSetConfiguration-Protocol.h>
#import <HomeKit/HMAutomationBuilderInternal-Protocol.h>

@class HMActionSet, HMActionSetBuilder, HMHome, NSString, _HMContext;

@protocol HMActionSetBuilderInternal <HMActionSetBuilder, HMAutomationBuilderInternal, HMActionSetConfiguration>
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
- (HMActionSetBuilder *)copyAsBuilder;
- (id)initWithType:(NSString *)arg1 context:(_HMContext *)arg2 home:(HMHome *)arg3;
- (id)initWithContext:(_HMContext *)arg1 home:(HMHome *)arg2;
- (id)initWithActionSet:(HMActionSet *)arg1;
@end

