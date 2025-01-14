//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray, NSString;

@interface WFLibrary : NSObject
{
    MISSING_TYPE *version;	// 8 = 0x8
    MISSING_TYPE *identifier;	// 24 = 0x18
    MISSING_TYPE *capsule;	// 40 = 0x28
}

+ (void)performWithoutNotifyingObservers:(CDUnknownBlockType)arg1 error:(id *)arg2;	// IMP=0x0060000000119ff5
- (void).cxx_destruct;	// IMP=0x000000000011a072
- (id)init;	// IMP=0x000000000011a058
- (_Bool)mergeWithOther:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000119c60
- (id)capsuleDataWithError:(id *)arg1;	// IMP=0x0000000000119b58
- (void)overwriteShortcutsAndFolders:(id)arg1 folders:(id)arg2;	// IMP=0x0000000000119a9d
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;	// IMP=0x0000000000119722
- (id)initWithIdentifier:(id)arg1 version:(id)arg2 data:(id)arg3;	// IMP=0x00000000001195a7
@property(nonatomic, readonly) NSString *identifier;
@property(nonatomic, readonly) NSString *version;
@property(nonatomic, readonly) NSString *dotRepresentation;
- (_Bool)setShortcutOrdering:(id)arg1 forCollectionIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bc7ab
- (id)indexOfShortcutWithIdentifier:(id)arg1 inCollectionWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bc646
- (id)collectionWithIdentifier:(id)arg1;	// IMP=0x00000000000bc509
- (id)collectionWithWorkflowType:(id)arg1;	// IMP=0x00000000000bc448
- (id)collectionsContainingShortcut:(id)arg1;	// IMP=0x00000000000bc17e
- (id)collectionAndFolderIdentifiersContainingShortcut:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bbde1
- (id)collectionsAndFoldersContainingShortcut:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bbaa6
- (_Bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(long long)arg2 ofCollectionWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bb657
- (_Bool)removeShortcutWithIdentifier:(id)arg1 fromCollectionWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bb4d0
- (_Bool)insertShortcutWithIdentifier:(id)arg1 atIndex:(long long)arg2 toCollection:(id)arg3 error:(id *)arg4;	// IMP=0x00000000000bb407
- (_Bool)addShortcutWithIdentifier:(id)arg1 toCollectionWithIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000000bb33a
@property(nonatomic, readonly) NSArray *collections;
- (id)indexOfShortcutWithShortcut:(id)arg1 folderIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9465
- (_Bool)moveFolders:(id)arg1 toIndexes:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c9319
- (id)folderWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c8e38
- (id)folderContainingShortcut:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c8d91
- (id)shortcutsInFolderWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c8bb8
- (_Bool)tombstoneFolderWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c8988
- (_Bool)setShortcutOrdering:(id)arg1 forFolderIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c87a3
- (_Bool)moveShortcutWithIdentifier:(id)arg1 toIndex:(long long)arg2 ofFolderWithIdentifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001c8595
- (_Bool)moveShortcutWithIdentifier:(id)arg1 toFolder:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c84ed
- (_Bool)appendShortcutWithIdentifier:(id)arg1 toFolder:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001c8439
- (id)updateFolderWithIdentifier:(id)arg1 newName:(id)arg2 newIcon:(unsigned short)arg3 error:(id *)arg4;	// IMP=0x00000000001c835d
- (_Bool)deleteFolderWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001c82d6
- (id)insertFolderWithName:(id)arg1 icon:(unsigned short)arg2 identifier:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001c814b
- (id)folderWithName:(id)arg1 tombstoned:(_Bool)arg2;	// IMP=0x00000000001c8079
@property(nonatomic, readonly) NSArray *folders;
- (id)shortcutIdentifiersWithQuery:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002fd574
- (_Bool)removeShortcutWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002fcc81
- (void)insertShortcutWithId:(id)arg1;	// IMP=0x00000000002fcb6e
- (void)prependShortcutWithId:(id)arg1;	// IMP=0x00000000002fcacf
@property(nonatomic, readonly) NSArray *shortcutIdentifiers;

@end

