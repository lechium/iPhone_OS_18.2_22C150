//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKitCode/NSObject-Protocol.h>

@class CKMergeableDeltaMetadata, NSArray;

@protocol CKMergeable <NSObject>
- (NSArray *)mergeableDeltasForMetadata:(CKMergeableDeltaMetadata *)arg1 error:(id *)arg2;
- (_Bool)mergeDeltas:(NSArray *)arg1 error:(id *)arg2;
@end
