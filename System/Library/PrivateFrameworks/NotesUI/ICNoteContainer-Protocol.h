//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICNoteVisibilityTesting-Protocol.h>

@class ICAccount, ICFolderCustomNoteSortType, ICNote, NSArray, NSData, NSManagedObjectContext, NSPredicate, NSString;
@protocol ICNoteVisibilityTesting;

@protocol ICNoteContainer <ICNoteVisibilityTesting>
@property(readonly, nonatomic, getter=isDeleted) _Bool deleted;
@property(copy, nonatomic) NSData *subFolderOrderMergeableData;
@property(readonly, nonatomic) NSArray *visibleSubFolders;
@property(readonly, copy, nonatomic) NSString *accountName;
@property(readonly, copy, nonatomic) NSString *titleForTableViewCell;
@property(readonly, copy, nonatomic) NSString *titleForNavigationBar;
@property(readonly, nonatomic) unsigned long long visibleNotesCount;
@property(readonly, nonatomic) _Bool isShowingDateHeaders;
@property(readonly, nonatomic) int dateHeadersType;
@property(readonly, nonatomic) _Bool supportsDateHeaders;
@property(readonly, nonatomic) NSArray *visibleNotes;
@property(readonly, nonatomic) NSString *containerIdentifier;
@property(readonly, nonatomic) _Bool isModernCustomFolder;
@property(readonly, nonatomic) _Bool isTrashFolder;
@property(readonly, nonatomic) _Bool supportsEditingNotes;
@property(readonly, nonatomic) _Bool canBeSharedViaICloud;
@property(readonly, nonatomic) _Bool isAllNotesContainer;
@property(readonly, nonatomic) _Bool isSharedReadOnly;
@property(readonly, nonatomic) _Bool isSharedViaICloud;
@property(readonly, nonatomic) ICFolderCustomNoteSortType *customNoteSortType;
@property(readonly) NSManagedObjectContext *managedObjectContext;
@property(readonly, nonatomic) ICAccount *noteContainerAccount;
- (id <ICNoteVisibilityTesting>)noteVisibilityTestingForSearchingAccount;
- (void)updateSubFolderMergeableDataChangeCount;
- (_Bool)mergeWithSubFolderMergeableData:(NSData *)arg1;
- (void)saveSubFolderMergeableDataIfNeeded;
- (NSPredicate *)predicateForPinnedNotes;
- (NSPredicate *)predicateForVisibleNotes;
- (_Bool)noteIsVisible:(ICNote *)arg1;
- (void)applyDateHeadersType:(int)arg1;
@end

