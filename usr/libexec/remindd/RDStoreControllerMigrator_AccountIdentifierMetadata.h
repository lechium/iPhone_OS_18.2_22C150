//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RDStoreControllerMigrator_AccountIdentifierMetadata : NSObject
{
}

- (void)migrateStore:(id)arg1 metadata:(id)arg2;	// IMP=0x00200000000063e5
- (void)migrateStoreIfNeeded:(id)arg1 metadata:(id)arg2;	// IMP=0x00100000000062df

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
