//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GeoServices/NSCoding-Protocol.h>
#import <GeoServices/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerConditionalString;

@protocol GEOServerFormattedString <NSObject, NSCoding>
@property(readonly, nonatomic) _Bool isPrivate;
@property(readonly, nonatomic) NSString *basicString;
@property(readonly, nonatomic) NSString *stringWithDefaultValues;
@property(readonly, nonatomic) id <GEOServerConditionalString> alternativeString;
@property(readonly, nonatomic) NSArray *formatStyles;
@property(readonly, nonatomic) NSArray *separators;
@property(readonly, nonatomic) NSArray *formatTokens;
@property(readonly, nonatomic) NSArray *formatStrings;
@end

