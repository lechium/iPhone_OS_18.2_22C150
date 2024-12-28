//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOSearchCategory, MKMapItem, NSString;

@interface VenueSearchCardItem : NSObject
{
    MKMapItem *_venueMapItem;	// 8 = 0x8
    GEOSearchCategory *_venueSearchCategory;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000bfbb5a
@property(readonly, nonatomic) GEOSearchCategory *venueSearchCategory; // @synthesize venueSearchCategory=_venueSearchCategory;
@property(readonly, nonatomic) MKMapItem *venueMapItem; // @synthesize venueMapItem=_venueMapItem;
@property(readonly, nonatomic) _Bool isVenueItem;
@property(readonly, nonatomic) unsigned long long venueCardID;
@property(readonly, nonatomic) unsigned long long venueID;
- (id)initWithMapItem:(id)arg1 searchCategory:(id)arg2;	// IMP=0x0010000000bfba0c
- (id)init;	// IMP=0x0010000000bfb9fe

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
