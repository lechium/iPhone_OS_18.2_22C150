//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNChangeHistoryAnchor;

__attribute__((visibility("hidden")))
@interface CNIndexClientState : NSObject
{
    _Bool _isFullSyncDone;	// 8 = 0x8
    long long _indexVersion;	// 16 = 0x10
    CNChangeHistoryAnchor *_fullSyncSnapshotAnchor;	// 24 = 0x18
    long long _fullSyncOffset;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000de4d3
+ (id)clientStateWithData:(id)arg1 logger:(id)arg2;	// IMP=0x00100000000de0ff
- (void).cxx_destruct;	// IMP=0x00000000000de724
@property(nonatomic) long long fullSyncOffset; // @synthesize fullSyncOffset=_fullSyncOffset;
@property(retain, nonatomic) CNChangeHistoryAnchor *fullSyncSnapshotAnchor; // @synthesize fullSyncSnapshotAnchor=_fullSyncSnapshotAnchor;
@property(nonatomic) _Bool isFullSyncDone; // @synthesize isFullSyncDone=_isFullSyncDone;
@property(nonatomic) long long indexVersion; // @synthesize indexVersion=_indexVersion;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000de5de
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000de4db
- (id)description;	// IMP=0x00000000000de351
- (id)data;	// IMP=0x00000000000de2d9
- (id)init;	// IMP=0x00000000000de08c

@end

