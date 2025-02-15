//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CollectionViewCore/NSObject-Protocol.h>

@class NSArray, NSIndexPath;

@protocol _UICollectionIdentifierBasedDataSource <NSObject>
@property(readonly, nonatomic) NSArray *itemIdentifiers;
@property(readonly, nonatomic) NSArray *sectionIdentifiers;
@property(readonly, nonatomic) long long numberOfSections;
@property(readonly, nonatomic) long long numberOfItems;
- (NSIndexPath *)indexPathForItemIdentifier:(id)arg1;
- (id)itemIdentifierForIndexPath:(NSIndexPath *)arg1;
- (long long)indexForSectionIdentifier:(id)arg1;
- (id)sectionIdentifierForIndex:(long long)arg1;
- (_Bool)containsSectionIdentifier:(id)arg1;
- (_Bool)containsItemIdentifier:(id)arg1;
- (long long)indexOfSectionIdentifier:(id)arg1;
- (long long)indexOfItemIdentifier:(id)arg1;
- (id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1;
- (NSArray *)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (long long)numberOfItemsInSection:(id)arg1;
@end

