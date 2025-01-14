//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RAPSubmissionStatusSyncHandler : NSObject
{
}

- (void)saveIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0040000000014da6
- (void)_updateMapsSyncRAPRecordWithIdentifiers:(id)arg1 toStatus:(short)arg2 forceUpdate:(_Bool)arg3 editBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000014668
- (void)_updateRAPStatusWithIdentifiers:(id)arg1 toStatus:(short)arg2 forceUpdate:(_Bool)arg3 extraEditBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000001453a
- (void)_updateRAPStatusWithIdentifiers:(id)arg1 toStatus:(short)arg2 extraEditBlock:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000014512
- (void)updateRAPsStatusWithRapInfos:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000138a3
- (void)setIdentifiersAsReviewed:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000013886
- (void)setFixedProblemAsReviewed:(id)arg1;	// IMP=0x0010000000013570
- (void)_fetchUnresolvedRAPRecordsWithLimit:(unsigned long long)arg1 offset:(long long)arg2 oldestDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000013178
- (void)fetchUnresolvedRAPIdentifiersWithBatchSize:(unsigned long long)arg1 offset:(long long)arg2 oldestDate:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000012b23
- (id)init;	// IMP=0x0010000000012a5e

@end

