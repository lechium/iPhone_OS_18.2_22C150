//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol GEOCompletionGroup <NSObject>
@property(readonly, nonatomic) NSArray *excludedClientResultTypes;
@property(readonly, nonatomic) NSArray *includedClientResultTypes;
@property(readonly, nonatomic) _Bool isSectionForClientOnlyResults;
@property(readonly, nonatomic) _Bool enableMapsSuggestServerReranking;
@property(readonly, nonatomic) _Bool enforceServerResultsOrder;
@property(readonly, nonatomic) _Bool shouldInterleaveClientResults;
@property(readonly, nonatomic) NSString *localizedSectionHeader;
@property(readonly, nonatomic) NSArray *items;
@end
