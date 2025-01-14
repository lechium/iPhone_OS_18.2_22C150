//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSMutableArray;

@interface NEKPBDuplicateCheck : PBCodable
{
    NSMutableArray *_calendars;	// 8 = 0x8
    NSMutableArray *_sources;	// 16 = 0x10
}

+ (Class)calendarsType;	// IMP=0x0020000000040b7a
+ (Class)sourcesType;	// IMP=0x0010000000040aa8
- (void).cxx_destruct;	// IMP=0x0020000000041c37
@property(retain, nonatomic) NSMutableArray *calendars; // @synthesize calendars=_calendars;
@property(retain, nonatomic) NSMutableArray *sources; // @synthesize sources=_sources;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000000419a3
- (unsigned long long)hash;	// IMP=0x0010000000041956
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000004189e
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000004159e
- (void)copyTo:(id)arg1;	// IMP=0x0010000000041448
- (void)writeTo:(id)arg1;	// IMP=0x0010000000041231
- (_Bool)readFrom:(id)arg1;	// IMP=0x0010000000041224
- (id)dictionaryRepresentation;	// IMP=0x0010000000040c3a
- (id)description;	// IMP=0x0010000000040b8b
- (id)calendarsAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000040b5d
- (unsigned long long)calendarsCount;	// IMP=0x0010000000040b40
- (void)addCalendars:(id)arg1;	// IMP=0x0010000000040ad6
- (void)clearCalendars;	// IMP=0x0010000000040ab9
- (id)sourcesAtIndex:(unsigned long long)arg1;	// IMP=0x0010000000040a8b
- (unsigned long long)sourcesCount;	// IMP=0x0010000000040a6e
- (void)addSources:(id)arg1;	// IMP=0x0010000000040a04
- (void)clearSources;	// IMP=0x00100000000409e7

@end

