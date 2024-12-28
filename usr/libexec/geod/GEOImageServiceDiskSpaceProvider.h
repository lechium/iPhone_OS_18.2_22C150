//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEODaemon, GEOImageServicePersistence, NSString;

@interface GEOImageServiceDiskSpaceProvider : NSObject
{
    GEODaemon *_daemon;	// 8 = 0x8
    GEOImageServicePersistence *_persistence;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000242a8
@property(retain, nonatomic) GEOImageServicePersistence *persistence; // @synthesize persistence=_persistence;
@property(retain, nonatomic) GEODaemon *daemon; // @synthesize daemon=_daemon;
- (unsigned long long)freePurgableDiskSpace:(unsigned long long)arg1 urgency:(int)arg2;	// IMP=0x00100000000241ba
- (unsigned long long)purgableDiskSpaceForUrgency:(int)arg1;	// IMP=0x0010000000024137
- (_Bool)_shouldPurgeForUrgency:(int)arg1;	// IMP=0x001000000002402f
- (int)minimumUregency;	// IMP=0x001000000002400d
@property(readonly, nonatomic) NSString *identifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
