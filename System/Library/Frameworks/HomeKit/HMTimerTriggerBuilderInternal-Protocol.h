//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMTimerTriggerBuilderPrivate-Protocol.h>
#import <HomeKit/HMTimerTriggerConfiguration-Protocol.h>
#import <HomeKit/HMTriggerBuilderInternal-Protocol.h>

@class NSDate;

@protocol HMTimerTriggerBuilderInternal <HMTimerTriggerBuilderPrivate, HMTriggerBuilderInternal, HMTimerTriggerConfiguration>
@property(readonly, copy, nonatomic) NSDate *fireDateIfSet;
@end

