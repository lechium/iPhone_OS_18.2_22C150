//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDatabaseTransaction, HDProfile, NSUUID;

__attribute__((visibility("hidden")))
@interface _HDAssociationInsertionContext : NSObject
{
    _Bool _enforceSameSource;	// 8 = 0x8
    _Bool _permitPendingAssociations;	// 9 = 0x9
    NSUUID *_parentUUID;	// 16 = 0x10
    HDProfile *_profile;	// 24 = 0x18
    HDDatabaseTransaction *_transaction;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d77b
@property(readonly, nonatomic) HDDatabaseTransaction *transaction; // @synthesize transaction=_transaction;
@property(readonly, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property(readonly, nonatomic) _Bool permitPendingAssociations; // @synthesize permitPendingAssociations=_permitPendingAssociations;
@property(readonly, nonatomic) _Bool enforceSameSource; // @synthesize enforceSameSource=_enforceSameSource;
@property(readonly, copy, nonatomic) NSUUID *parentUUID; // @synthesize parentUUID=_parentUUID;
- (id)initWithParentUUID:(id)arg1 enforceSameSource:(_Bool)arg2 permitPendingAssociations:(_Bool)arg3 profile:(id)arg4 transaction:(id)arg5;	// IMP=0x000000000014f646

@end
