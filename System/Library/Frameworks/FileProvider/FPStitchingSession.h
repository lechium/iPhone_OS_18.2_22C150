//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FPStitchingSession : NSObject
{
    NSMutableDictionary *_stitchedFields;	// 8 = 0x8
    NSMutableDictionary *_originalItems;	// 16 = 0x10
    NSMutableDictionary *_stitchedItems;	// 24 = 0x18
    NSMutableDictionary *_stitchedPlaceholders;	// 32 = 0x20
    NSMutableDictionary *_placeholderReplacements;	// 40 = 0x28
    NSMutableDictionary *_deletedItems;	// 48 = 0x30
    _Bool _started;	// 56 = 0x38
    _Bool _finished;	// 57 = 0x39
    CDUnknownBlockType _placeholdersCreationBlock;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000e97aa
@property(copy, nonatomic) CDUnknownBlockType placeholdersCreationBlock; // @synthesize placeholdersCreationBlock=_placeholdersCreationBlock;
- (id)createPlaceholderWithName:(id)arg1 contentType:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;	// IMP=0x00000000000e9611
- (id)createPlaceholderWithName:(id)arg1 typeIdentifier:(id)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;	// IMP=0x00000000000e9520
- (id)createPlaceholderWithName:(id)arg1 isFolder:(_Bool)arg2 contentAccessDate:(id)arg3 underParent:(id)arg4 inProviderDomainID:(id)arg5;	// IMP=0x00000000000e94f7
- (id)createArchivePlaceholderForItem:(id)arg1 underParent:(id)arg2 inProviderDomainID:(id)arg3 withArchiveFormat:(unsigned long long)arg4;	// IMP=0x00000000000e93a9
- (id)createGenericArchivePlaceholderUnderParent:(id)arg1 inProviderDomainID:(id)arg2 withArchiveFormat:(unsigned long long)arg3;	// IMP=0x00000000000e927c
- (id)createPlaceholderWithCopyOfExistingItem:(id)arg1 lastUsageUpdatePolicy:(unsigned long long)arg2 underParent:(id)arg3 inProviderDomainID:(id)arg4;	// IMP=0x00000000000e9130
- (void)replacePlaceholderWithID:(id)arg1 withItem:(id)arg2;	// IMP=0x00000000000e8e68
- (id)itemWithPlaceholderID:(id)arg1;	// IMP=0x00000000000e8dc0
- (void)associateItem:(id)arg1 withPlaceholderID:(id)arg2;	// IMP=0x00000000000e8cae
- (void)finishWithItem:(id)arg1 error:(id)arg2;	// IMP=0x00000000000e8bec
- (void)finishWithItems:(id)arg1 error:(id)arg2;	// IMP=0x00000000000e83e2
- (void)trashItems:(id)arg1;	// IMP=0x00000000000e80a2
- (void)deleteItems:(id)arg1;	// IMP=0x00000000000e7e44
- (void)transformItems:(id)arg1 handler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000e79b4
- (void)flush;	// IMP=0x00000000000e760f
@property(readonly, nonatomic) _Bool isActive;
- (void)finish;	// IMP=0x00000000000e746a
- (void)start;	// IMP=0x00000000000e739a
@property(readonly, nonatomic) NSArray *deletedIDs;
@property(readonly, nonatomic) NSDictionary *stitchedItemsByParentID;
@property(readonly, nonatomic) NSDictionary *stitchedFieldsAndItemsByItemIDs;
- (_Bool)cleanStitchedItemForItemID:(id)arg1;	// IMP=0x00000000000e6a5f
@property(readonly, nonatomic) NSArray *placeholderReplacementsIDs;
@property(readonly, nonatomic) NSArray *placeholderItems;
- (void)dealloc;	// IMP=0x00000000000e68d8
- (id)init;	// IMP=0x00000000000e67c2

@end
