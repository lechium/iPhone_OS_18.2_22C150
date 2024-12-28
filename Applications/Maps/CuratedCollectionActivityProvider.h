//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUPlaceActivityProvider.h>

@class GEOPlaceCollection, GEOPublisher, NSArray, NSString, NSURL;

@interface CuratedCollectionActivityProvider : MUPlaceActivityProvider
{
    GEOPlaceCollection *_curatedCollection;	// 8 = 0x8
    NSArray *_refinedMapItems;	// 16 = 0x10
    GEOPublisher *_publisher;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000080ac0d
@property(readonly, nonatomic) GEOPublisher *publisher; // @synthesize publisher=_publisher;
@property(readonly, nonatomic) NSArray *refinedMapItems; // @synthesize refinedMapItems=_refinedMapItems;
@property(readonly, nonatomic) GEOPlaceCollection *curatedCollection; // @synthesize curatedCollection=_curatedCollection;
@property(readonly, nonatomic) NSURL *url;
@property(readonly, nonatomic) NSString *title;
- (id)initWithPublisher:(id)arg1;	// IMP=0x001000000080a9a0
- (id)initWithCuratedCollection:(id)arg1 refinedMapItems:(id)arg2;	// IMP=0x001000000080a8eb

@end
