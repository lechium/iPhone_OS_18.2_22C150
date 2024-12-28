//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Home/NSObject-Protocol.h>

@class HMActionSet, HMCharacteristicBatchRequest, HMHome, NSSet;

@protocol HFCharacteristicValueWriter <NSObject>
- (HMHome *)hf_home;
- (void)executeActions:(NSSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)executeActionSet:(HMActionSet *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)performBatchCharacteristicRequest:(HMCharacteristicBatchRequest *)arg1;
@end
