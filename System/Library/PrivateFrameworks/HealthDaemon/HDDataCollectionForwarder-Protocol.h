//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKDevice, HKSource, NSArray;

@protocol HDDataCollectionForwarder <NSObject>
- (void)insertSamples:(NSArray *)arg1 device:(HKDevice *)arg2 source:(HKSource *)arg3;
@end
