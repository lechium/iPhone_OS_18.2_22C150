//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOMapItemIdentifier, NSArray, NSString, NSURL;

@protocol GEOTransitConnectionInfo <NSObject>
@property(readonly, nonatomic) GEOMapItemIdentifier *itemIdentifier;
@property(readonly, nonatomic) int providerID;
@property(readonly, nonatomic) unsigned long long muid;
@property(readonly, nonatomic) NSURL *urlToOpen;
@property(readonly, nonatomic) NSArray *labelItems;
@property(readonly, nonatomic) NSString *name;
@end
