//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache, NSString, PHAsset, PHFetchResult, PLManagedAsset, PUPhotoCommentEntryView, UITableView;
@protocol PUCommentsTableDataControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCommentsTableDataController : NSObject
{
    NSCache *_commentsHeightCache;	// 8 = 0x8
    PUPhotoCommentEntryView *_entryView;	// 16 = 0x10
    _Bool _hasPendingChanges;	// 24 = 0x18
    _Bool _isPostingComment;	// 25 = 0x19
    _Bool _editing;	// 26 = 0x1a
    _Bool _shouldUseCompactCommentSeparators;	// 27 = 0x1b
    UITableView *_tableView;	// 32 = 0x20
    PHAsset *_asset;	// 40 = 0x28
    id <PUCommentsTableDataControllerDelegate> _delegate;	// 48 = 0x30
    PLManagedAsset *_managedAsset;	// 56 = 0x38
    NSString *_justInsertedCommentUUID;	// 64 = 0x40
    PHFetchResult *_orderedCommentsFetchResult;	// 72 = 0x48
    PHFetchResult *_orderedLikesFetchResult;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000259691
@property(retain, nonatomic) PHFetchResult *orderedLikesFetchResult; // @synthesize orderedLikesFetchResult=_orderedLikesFetchResult;
@property(retain, nonatomic) PHFetchResult *orderedCommentsFetchResult; // @synthesize orderedCommentsFetchResult=_orderedCommentsFetchResult;
@property(retain, nonatomic) NSString *justInsertedCommentUUID; // @synthesize justInsertedCommentUUID=_justInsertedCommentUUID;
@property(retain, nonatomic) PLManagedAsset *managedAsset; // @synthesize managedAsset=_managedAsset;
@property(nonatomic) __weak id <PUCommentsTableDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldUseCompactCommentSeparators; // @synthesize shouldUseCompactCommentSeparators=_shouldUseCompactCommentSeparators;
@property(nonatomic, getter=isEditing) _Bool editing; // @synthesize editing=_editing;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)cloudCommentsDidChange:(id)arg1;	// IMP=0x0000000000258ecd
- (void)photoCommentEntryViewDidEndEditing:(id)arg1;	// IMP=0x0000000000258e91
- (_Bool)photoCommentEntryViewShouldEndEditing:(id)arg1;	// IMP=0x0000000000258ddb
- (void)photoCommentEntryViewDidBeginEditing:(id)arg1;	// IMP=0x0000000000258dd5
- (void)photoCommentEntryViewWillBeginEditing:(id)arg1;	// IMP=0x0000000000258dbe
- (void)photoCommentEntryViewHeightDidChange:(id)arg1;	// IMP=0x0000000000258db8
- (void)scrollViewDidScroll:(id)arg1;	// IMP=0x0000000000258d4d
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;	// IMP=0x0000000000258c66
- (void)tableView:(id)arg1 performAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000258b4f
- (_Bool)tableView:(id)arg1 canPerformAction:(SEL)arg2 forRowAtIndexPath:(id)arg3 withSender:(id)arg4;	// IMP=0x0000000000258b01
- (_Bool)tableView:(id)arg1 shouldShowMenuForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000258abf
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;	// IMP=0x00000000002589bb
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;	// IMP=0x000000000025877a
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;	// IMP=0x0000000000258302
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;	// IMP=0x0000000000258247
- (long long)numberOfSectionsInTableView:(id)arg1;	// IMP=0x0000000000258231
- (void)_validateAndPostComment:(id)arg1;	// IMP=0x0000000000257f29
- (void)_setIsPostingComment:(_Bool)arg1 postButton:(id)arg2;	// IMP=0x0000000000257f04
- (void)_fontCacheDidChange:(id)arg1;	// IMP=0x0000000000257ed1
- (void)_postCommentWithText:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0000000000257cd7
- (_Bool)_canPostCommentWithText:(id)arg1 localizedFailureDescription:(id *)arg2;	// IMP=0x0000000000257bac
- (id)_commentText;	// IMP=0x0000000000257b5c
- (double)_heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3;	// IMP=0x00000000002579a5
- (void)_scrollToComment:(id)arg1 animated:(_Bool)arg2;	// IMP=0x000000000025789d
- (id)_currentEntryView;	// IMP=0x00000000002577c4
- (long long)_textCommentSection;	// IMP=0x00000000002577ab
- (long long)_postCommentSection;	// IMP=0x0000000000257791
- (long long)_assetOwnerCommentSection;	// IMP=0x0000000000257769
- (long long)_smileCommentSection;	// IMP=0x0000000000257761
- (_Bool)_isAssetOwnerSectionVisible;	// IMP=0x00000000002576e2
- (id)_orderedLikes;	// IMP=0x00000000002576b4
- (id)_orderedComments;	// IMP=0x0000000000257686
- (void)_updatedOrderedLikes;	// IMP=0x00000000002575dd
- (void)_updateOrderedComments;	// IMP=0x0000000000257534
- (id)_orderedFetchOptions;	// IMP=0x000000000025741f
- (void)_invalidateCommentsAndLikes;	// IMP=0x00000000002573e6
- (void)_setManagedAsset:(id)arg1;	// IMP=0x0000000000257304
- (_Bool)_isVideoAsset;	// IMP=0x0000000000257295
- (void)_updateFirstResponder;	// IMP=0x00000000002571fb
@property(readonly, nonatomic) double minimumHeight;
- (void)dealloc;	// IMP=0x0000000000256f20
- (id)init;	// IMP=0x0000000000256f0c
- (id)initWithTableView:(id)arg1;	// IMP=0x0000000000256e08

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
