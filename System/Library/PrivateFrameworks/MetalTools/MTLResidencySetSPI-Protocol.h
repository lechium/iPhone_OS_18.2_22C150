//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MetalTools/MTLResidencySet-Protocol.h>

@class NSArray;
@protocol MTLAllocation;

@protocol MTLResidencySetSPI <MTLResidencySet>

@optional
@property(nonatomic) unsigned long long expiredGeneration;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(nonatomic) unsigned long long currentGeneration;
// Preceding property had unknown attributes: ?
// Original attribute string: TQ,?,N

@property(readonly, copy) NSArray *allCommittedAllocations;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C

- (unsigned long long)generationForAllocation:(id <MTLAllocation>)arg1;
@end

