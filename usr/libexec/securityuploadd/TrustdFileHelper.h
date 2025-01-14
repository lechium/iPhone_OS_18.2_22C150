//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TrustdFileHelper : NSObject
{
}

- (void)fixFiles:(CDUnknownBlockType)arg1;	// IMP=0x004000000000f23e
- (void)deleteOldFiles;	// IMP=0x001000000000f197
- (void)deleteSupplementalsAssetsDir;	// IMP=0x001000000000f0d0
- (void)deleteSystemDbFiles:(struct __CFString *)arg1;	// IMP=0x001000000000efc8
- (void)allowTrustdToWriteAnalyticsFiles;	// IMP=0x001000000000efb0
- (_Bool)allowTrustdToReadFilesForMigration:(id *)arg1;	// IMP=0x001000000000ef07
- (_Bool)changePermissionsOfKeychainDirectoryFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000ede7
- (_Bool)fixTrustSettingsPermissions:(id *)arg1;	// IMP=0x001000000000e829
- (_Bool)fixValidPermissions:(id *)arg1;	// IMP=0x001000000000e6ab
- (_Bool)changeOwnerOfValidFile:(id)arg1 error:(id *)arg2;	// IMP=0x001000000000e4bf

@end

