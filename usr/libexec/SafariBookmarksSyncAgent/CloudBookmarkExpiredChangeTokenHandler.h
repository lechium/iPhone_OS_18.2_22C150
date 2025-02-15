//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSSet;
@protocol WBSBookmarkDBAccess;

@interface CloudBookmarkExpiredChangeTokenHandler : NSObject
{
    id <WBSBookmarkDBAccess> _databaseAccessor;	// 8 = 0x8
    NSMutableSet *_namesOfLocalRecordsToDelete;	// 16 = 0x10
    void *_databaseRef;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000055370
@property(readonly, nonatomic) void *databaseRef; // @synthesize databaseRef=_databaseRef;
@property(readonly, copy, nonatomic) NSSet *namesOfLocalRecordsToDelete;
- (void)didReceiveRecordWithNameFromServer:(id)arg1;	// IMP=0x0010000000055332
- (void)collectAllRecordNames;	// IMP=0x0010000000055096
- (_Bool)itemWithServerIDIsFolder:(id)arg1;	// IMP=0x001000000005503e
- (id)serverIDsInFolderWithServerID:(id)arg1;	// IMP=0x0010000000055019
- (void)dealloc;	// IMP=0x0010000000054fda
- (id)initWithDatabaseAccessor:(id)arg1 database:(void *)arg2;	// IMP=0x0010000000054f49

@end

