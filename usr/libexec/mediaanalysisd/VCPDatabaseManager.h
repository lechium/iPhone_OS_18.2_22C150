//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface VCPDatabaseManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    NSMutableDictionary *_databases;	// 16 = 0x10
}

+ (void)releaseSharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x00400000000ce5f7
+ (_Bool)existsDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x00100000000ce38b
+ (id)sharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x00100000000ce30c
+ (id)sharedDatabaseManager;	// IMP=0x00100000000cdfb3
- (void).cxx_destruct;	// IMP=0x00200000000ce666
- (void)releaseSharedDatabaseForPhotoLibrary:(id)arg1;	// IMP=0x00100000000ce424
- (MISSING_TYPE *)sharedDatabaseForPhotoLibrary: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000ce040
- (id)init;	// IMP=0x00100000000cdf2c

@end
