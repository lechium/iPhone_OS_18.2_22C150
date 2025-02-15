//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ContinuousReadingItem, TabController;

__attribute__((visibility("hidden")))
@interface ContinuousReadingController : NSObject
{
    TabController *_tabController;	// 8 = 0x8
    int _activeDocumentBookmarkID;	// 16 = 0x10
    ContinuousReadingItem *_currentContinuousItem;	// 24 = 0x18
    ContinuousReadingItem *_nextContinuousItem;	// 32 = 0x20
    ContinuousReadingItem *_previousContinuousItem;	// 40 = 0x28
    _Bool _unreadReadingListItemsOnly;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000004a153
@property(nonatomic) _Bool unreadReadingListItemsOnly; // @synthesize unreadReadingListItemsOnly=_unreadReadingListItemsOnly;
- (id)_itemAtIndex:(unsigned int)arg1 inReadingList:(id)arg2;	// IMP=0x000000000004a0de
- (void)_updateCachedItemsIfNeeded;	// IMP=0x0000000000049e14
- (void)_clearCachedItems;	// IMP=0x0000000000049dc9
- (id)_tabDocument;	// IMP=0x0000000000049db3
- (id)previousReadingListItem;	// IMP=0x0000000000049d8e
- (id)nextReadingListItem;	// IMP=0x0000000000049d69
- (id)currentReadingListItem;	// IMP=0x0000000000049d44
- (void)dealloc;	// IMP=0x0000000000049d06
- (id)initWithTabController:(id)arg1;	// IMP=0x0000000000049c88

@end

