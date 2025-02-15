//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObject-Protocol.h"

@class BGSystemTask, NSString;

@protocol PDTaskSchedulerTask <NSObject>
@property(readonly, nonatomic) unsigned long long delay;
@property(readonly, nonatomic) NSString *identifier;
- (void)runWithTask:(BGSystemTask *)arg1;

@optional
@property(readonly, nonatomic) unsigned long long requiredNetworkState;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic, getter=isRepeating) _Bool repeating;
// Preceding property had unknown attributes: ?
// Original attribute string: TB,?,R,N,GisRepeating

@property(readonly, nonatomic) unsigned long long priority;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@property(readonly, nonatomic) unsigned long long gracePeriod;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,R,N

@end

