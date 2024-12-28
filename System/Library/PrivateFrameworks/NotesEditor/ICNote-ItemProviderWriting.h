//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesShared/ICNote.h>

@class NSArray, NSString;

@interface ICNote (ItemProviderWriting)
+ (id)writableTypeIdentifiersForItemProvider;	// IMP=0x001000000003b746
- (id)_loadFileRepresentationOfTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003be4b
- (unsigned long long)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg1;	// IMP=0x001000000003be32
- (void)prepareForCopyingData;	// IMP=0x001000000003bcea
- (id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000003b95b
- (long long)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg1;	// IMP=0x001000000003b934
- (long long)itemProviderType;	// IMP=0x001000000003b929
- (id)itemProviderIdentifier;	// IMP=0x001000000003b917
@property(readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSArray",?,R,C,N

- (id)writableTypeIdentifiersForNoteContent;	// IMP=0x001000000003b753
- (id)visibleAttachmentTextStoragesForTextLayoutManager:(id)arg1;	// IMP=0x00100000001de830
- (id)textStoragesFor:(id)arg1;	// IMP=0x00100000001ddee0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
