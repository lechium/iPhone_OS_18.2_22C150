//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <RunningBoard/NSObject-Protocol.h>

@class RBClientInheritanceManager, RBSInheritanceChangeSet;

@protocol RBClientInheritanceManagerDelegate <NSObject>
- (void)inheritanceManager:(RBClientInheritanceManager *)arg1 didChangeInheritances:(RBSInheritanceChangeSet *)arg2 completion:(void (^)(void))arg3;
@end

