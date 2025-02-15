//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsSuggestionsEntry, NSString, UICollectionViewCellRegistration;

@interface HomeListPhotoSuggestionCellModel : NSObject
{
    MapsSuggestionsEntry *_entry;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000e090cc
@property(readonly, nonatomic) MapsSuggestionsEntry *entry; // @synthesize entry=_entry;
- (_Bool)needsReloadFromPreviousViewModel:(id)arg1;	// IMP=0x0010000000e090ad
@property(readonly, nonatomic) NSString *_maps_diffableDataSourceIdentifier;
@property(readonly, nonatomic) id homeDragAndDropObject;
@property(readonly, nonatomic) id homeActionObject;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000e08fda
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (id)initWithEntry:(id)arg1;	// IMP=0x0010000000e08edb

// Remaining properties
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"UICollectionViewCellRegistration",?,R,N

@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end

