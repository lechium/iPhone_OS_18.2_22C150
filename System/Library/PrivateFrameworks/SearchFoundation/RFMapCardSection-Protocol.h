//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFCardSection-Protocol.h>

@class NSArray, NSData, NSDictionary;

@protocol RFMapCardSection <SFCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) _Bool showsUserLocation;
@property(nonatomic) double cameraDistance;
@property(copy, nonatomic) NSArray *polyline;
@property(copy, nonatomic) NSArray *annotations;
@property(copy, nonatomic) NSArray *markers;
@property(nonatomic) int sizeFormat;
@end
