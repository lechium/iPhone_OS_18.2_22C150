//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface TCCDDatabaseRegistry : NSObject
{
    int _version;	// 8 = 0x8
    _Bool _isSetup;	// 12 = 0xc
    _Bool _registryDBUnavailable;	// 13 = 0xd
    int _extendedErrorCode;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_registryQueue;	// 24 = 0x18
    struct sqlite3 *_registryDBHandle;	// 32 = 0x20
}

+ (id)stringFromBacktrace;	// IMP=0x004000000000a742
+ (char *)getRegistryDir;	// IMP=0x001000000000a67f
- (void).cxx_destruct;	// IMP=0x002000000000c7bd
@property struct sqlite3 *registryDBHandle; // @synthesize registryDBHandle=_registryDBHandle;
@property(readonly) int extendedErrorCode; // @synthesize extendedErrorCode=_extendedErrorCode;
@property(readonly) _Bool registryDBUnavailable; // @synthesize registryDBUnavailable=_registryDBUnavailable;
@property(readonly) int version; // @synthesize version=_version;
@property(readonly, retain) NSObject<OS_dispatch_queue> *registryQueue; // @synthesize registryQueue=_registryQueue;
- (void)notifyRegistryChanged;	// IMP=0x001000000000c6b9
- (void)closeDB;	// IMP=0x001000000000c571
- (int)commitDB;	// IMP=0x001000000000c549
- (_Bool)checkRegistryVersion:(_Bool)arg1;	// IMP=0x001000000000c3c0
- (_Bool)checkIfAlreadySetUp:(_Bool)arg1;	// IMP=0x001000000000c235
- (int)executeWithTransaction:(CDUnknownBlockType)arg1;	// IMP=0x001000000000c075
- (int)setupDB;	// IMP=0x001000000000bc1e
- (id)fetchAllKnownDBEntries;	// IMP=0x001000000000ba83
- (_Bool)checkIfKnownDBAtPath:(const char *)arg1 isKnown:(_Bool *)arg2;	// IMP=0x001000000000b778
- (id)dumpState;	// IMP=0x001000000000b4a6
- (int)registerNewDBAtPath:(const char *)arg1;	// IMP=0x001000000000b355
- (id)registryEntryFromStep:(struct sqlite3_stmt *)arg1;	// IMP=0x001000000000b1d0
- (int)createDBWithSQL:(const char *)arg1 atPath:(const char *)arg2 withFilename:(const char *)arg3;	// IMP=0x001000000000ae2a
- (void)populateExtantDatabasesIfNecessary;	// IMP=0x001000000000ae24
- (int)evalDB:(const char *)arg1 locked:(_Bool)arg2 bind:(CDUnknownBlockType)arg3 step:(CDUnknownBlockType)arg4;	// IMP=0x001000000000aa5d
- (void)handleDBErrorAndForceCrash:(_Bool)arg1;	// IMP=0x001000000000a837
- (int)getVersion;	// IMP=0x001000000000a676
- (id)init;	// IMP=0x001000000000a5f4

@end

