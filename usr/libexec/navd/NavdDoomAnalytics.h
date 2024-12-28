//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol NavdDoomStorageSnapshotDataSource;

@interface NavdDoomAnalytics : NSObject
{
    id <NavdDoomStorageSnapshotDataSource> _snapshotDataSource;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000cb32
- (void)setSnapshotDataSource:(id)arg1;	// IMP=0x001000000000cb21
- (id)snapshotDataSource;	// IMP=0x001000000000cb17
- (void)didInvalidateWindow;	// IMP=0x001000000000c410
- (id)uniqueName;	// IMP=0x001000000000c3f6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
