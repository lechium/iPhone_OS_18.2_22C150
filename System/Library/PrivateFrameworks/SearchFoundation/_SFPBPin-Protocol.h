//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, _SFPBColor, _SFPBLatLng;

@protocol _SFPBPin <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSString *pinText;
@property(nonatomic) int pinBehavior;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *resultID;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) _SFPBColor *pinColor;
@property(retain, nonatomic) _SFPBLatLng *location;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end
