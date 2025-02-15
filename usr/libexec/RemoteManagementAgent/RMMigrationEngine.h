//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface RMMigrationEngine : NSObject
{
}

- (id)_fixFilePermissionsAndReadDataForURL:(id)arg1;	// IMP=0x0040000000065037
- (_Bool)_writeProcessedActions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000064e46
- (id)_readMigrationStateReturningError:(id *)arg1;	// IMP=0x0010000000064b44
- (id)_readProcessedActionsReturningError:(id *)arg1;	// IMP=0x00100000000649b4
- (id)_coreDataActions;	// IMP=0x001000000006490b
- (id)_startupActions;	// IMP=0x0010000000064845
- (_Bool)_migrateWithActions:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000063fc3
- (_Bool)migrateWithCoreDataReturningError:(id *)arg1;	// IMP=0x0010000000063f02
- (_Bool)migrateOnStartupReturningError:(id *)arg1;	// IMP=0x0010000000063e41

@end

