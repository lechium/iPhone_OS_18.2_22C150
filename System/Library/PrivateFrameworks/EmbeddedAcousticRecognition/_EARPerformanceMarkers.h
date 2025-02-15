//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _EARPerformanceMarkers : NSObject
{
    NSArray *_correctPartialResultIndexList;	// 8 = 0x8
    NSArray *_correctAlignedPartialResultIndexList;	// 16 = 0x10
    NSArray *_tokenDelayInMilliSeconds;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000d3245
- (void).cxx_destruct;	// IMP=0x00000000000d3923
@property(readonly, copy, nonatomic) NSArray *tokenDelayInMilliSeconds; // @synthesize tokenDelayInMilliSeconds=_tokenDelayInMilliSeconds;
@property(readonly, copy, nonatomic) NSArray *correctAlignedPartialResultIndexList; // @synthesize correctAlignedPartialResultIndexList=_correctAlignedPartialResultIndexList;
@property(readonly, copy, nonatomic) NSArray *correctPartialResultIndexList; // @synthesize correctPartialResultIndexList=_correctPartialResultIndexList;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000d3614
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000d32d9
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000d324d
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000d323a
- (id)initWithCorrectPartialResultIndexList:(id)arg1 correctAlignedPartialResultIndexList:(id)arg2 tokenDelayInMilliseconds:(id)arg3;	// IMP=0x00000000000d315c

@end

