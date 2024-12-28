//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHPhotosHighlight.h>

@class NSArray, NSSet, NSString, PHAssetCollection;

@interface PHPhotosHighlight (SharingSuggestionContainer)
@property(readonly, nonatomic) NSSet *px_sl_containedSharingSuggestionObjectIDs;
@property(readonly, nonatomic) NSArray *px_sl_containedSharingSuggestions;
@property(readonly, nonatomic) PHAssetCollection *px_sl_containerCollection;
- (void)px_sl_getKeyAsset:(id *)arg1 suggestedDate:(id *)arg2 locations:(id *)arg3;	// IMP=0x0020000000f45ab8
- (id)px_sl_fetchAssetCollections;	// IMP=0x0020000000f45a1c
@property(readonly, nonatomic) NSString *px_sl_title;
@property(readonly, nonatomic) NSString *px_sl_identifier;
- (_Bool)px_isTrip;	// IMP=0x002000000111a13c
- (_Bool)px_isEvent;	// IMP=0x002000000111a101
- (_Bool)px_isMonthHighlight;	// IMP=0x002000000111a0e7
- (_Bool)px_isDayHighlight;	// IMP=0x002000000111a0ce
- (_Bool)px_isDayGroupHighlight;	// IMP=0x002000000111a0b4
- (unsigned short)px_curationType;	// IMP=0x0020000001358b2a
- (id)px_navigationURLHost;	// IMP=0x0020000001358ada

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
