//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoordinationCore/NSObject-Protocol.h>

@class COStateAddOn, NSDictionary;

@protocol COStateAddOnDelegate <NSObject>
- (void)stateForAddOn:(COStateAddOn *)arg1 withCallback:(void (^)(NSDictionary *))arg2;
- (void)addOn:(COStateAddOn *)arg1 receivedUpdates:(NSDictionary *)arg2 removals:(NSDictionary *)arg3;
@end

