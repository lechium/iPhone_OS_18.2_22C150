//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSOrderedSet, NSString, SharedTripContactSearchItem, UITableView, UITableViewDiffableDataSource;
@protocol SharedTripSuggestionsDataSourceDelegate;

@interface SharedTripSuggestionsDataSource : NSObject
{
    _Bool _showContactSearchItem;	// 8 = 0x8
    _Bool _includeActiveContacts;	// 9 = 0x9
    NSArray *_contactsForDisplay;	// 16 = 0x10
    NSOrderedSet *_changedContacts;	// 24 = 0x18
    long long _contactSearchItemPosition;	// 32 = 0x20
    NSObject<SharedTripSuggestionsDataSourceDelegate> *_delegate;	// 40 = 0x28
    unsigned long long _softCap;	// 48 = 0x30
    NSOrderedSet *_orderedSuggestions;	// 56 = 0x38
    NSOrderedSet *_activeContacts;	// 64 = 0x40
    NSOrderedSet *_wereActiveContacts;	// 72 = 0x48
    NSArray *_initiallyActiveHandles;	// 80 = 0x50
    UITableView *_tableView;	// 88 = 0x58
    UITableViewDiffableDataSource *_tableViewDataSource;	// 96 = 0x60
    SharedTripContactSearchItem *_contactSearchItem;	// 104 = 0x68
}

+ (void)prefetchSuggestionsAndCapabilitiesWithContext:(id)arg1;	// IMP=0x00200000009eeeac
- (void).cxx_destruct;	// IMP=0x00200000009f18dd
@property(retain, nonatomic) SharedTripContactSearchItem *contactSearchItem; // @synthesize contactSearchItem=_contactSearchItem;
@property(retain, nonatomic) UITableViewDiffableDataSource *tableViewDataSource; // @synthesize tableViewDataSource=_tableViewDataSource;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) NSArray *initiallyActiveHandles; // @synthesize initiallyActiveHandles=_initiallyActiveHandles;
@property(retain, nonatomic) NSOrderedSet *wereActiveContacts; // @synthesize wereActiveContacts=_wereActiveContacts;
@property(retain, nonatomic) NSOrderedSet *activeContacts; // @synthesize activeContacts=_activeContacts;
@property(retain, nonatomic) NSOrderedSet *orderedSuggestions; // @synthesize orderedSuggestions=_orderedSuggestions;
@property(nonatomic) _Bool includeActiveContacts; // @synthesize includeActiveContacts=_includeActiveContacts;
@property(nonatomic) unsigned long long softCap; // @synthesize softCap=_softCap;
@property(nonatomic) __weak NSObject<SharedTripSuggestionsDataSourceDelegate> *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long contactSearchItemPosition; // @synthesize contactSearchItemPosition=_contactSearchItemPosition;
@property(retain, nonatomic) NSOrderedSet *changedContacts; // @synthesize changedContacts=_changedContacts;
- (id)contactForItemIndexPath:(id)arg1;	// IMP=0x00100000009f16f8
- (id)contactForItemIdentifier:(id)arg1;	// IMP=0x00100000009f1349
- (unsigned long long)sharingStateForContact:(id)arg1;	// IMP=0x00100000009f1223
- (void)abandon;	// IMP=0x00100000009f117f
- (void)toggleContact:(id)arg1 startSharingCompletion:(CDUnknownBlockType)arg2 stopSharingCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000009f0d36
- (void)toggleContact:(id)arg1;	// IMP=0x00100000009f0d1f
- (void)resetContactsForDisplayOrdering;	// IMP=0x00100000009f0c9c
@property(readonly, nonatomic) NSArray *contactsForDisplay; // @synthesize contactsForDisplay=_contactsForDisplay;
- (id)_recommendedContactsForDisplay;	// IMP=0x00100000009f0551
- (id)findChangedContactsWithNewActiveSet:(id)arg1 previousActiveSet:(id)arg2;	// IMP=0x00100000009f0330
- (void)_refreshWithActiveContacts:(id)arg1;	// IMP=0x00100000009f00c9
- (void)sharedTripService:(id)arg1 didUpdateReceivers:(id)arg2;	// IMP=0x00100000009f002c
- (void)sharedTripServiceDidUpdateSendingAvailability:(id)arg1;	// IMP=0x00100000009eff6c
- (void)sharedTripService:(id)arg1 didUpdateSharingIdentity:(id)arg2;	// IMP=0x00100000009eff66
- (void)sharedTripService:(id)arg1 sharingDidInvalidateWithError:(id)arg2;	// IMP=0x00100000009efe9d
- (_Bool)isContactSearchItemAtIndexPath:(id)arg1;	// IMP=0x00100000009efdd1
@property(readonly, nonatomic) id contactSearchItemIdentifier;
@property(nonatomic, getter=showsContactSearchItem) _Bool showContactSearchItem; // @synthesize showContactSearchItem=_showContactSearchItem;
- (void)dataDidUpdateAnimatingChanges:(_Bool)arg1;	// IMP=0x00100000009ef930
- (void)dataDidUpdate;	// IMP=0x00100000009ef919
- (void)dataWillUpdate;	// IMP=0x00100000009ef87c
- (void)suggestionsDidUpdateInCache:(id)arg1;	// IMP=0x00100000009ef7ef
- (void)suggestionsWillUpdateInCache:(id)arg1;	// IMP=0x00100000009ef773
@property(readonly, nonatomic, getter=isRefreshing) _Bool refreshing;
- (void)clearTableView;	// IMP=0x00100000009ef6f6
- (void)addTableView:(id)arg1 cellProvider:(id)arg2;	// IMP=0x00100000009ef5f3
- (void)_updateFromCache;	// IMP=0x00100000009ef4fe
- (void)dealloc;	// IMP=0x00100000009ef42c
- (id)initWithSoftCellCap:(unsigned long long)arg1 includeActiveContacts:(_Bool)arg2;	// IMP=0x00100000009ef240

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
