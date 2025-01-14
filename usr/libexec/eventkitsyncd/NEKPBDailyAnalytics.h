//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NEKPBDuplicateCheck, NEKPBOccurrenceCache;

@interface NEKPBDailyAnalytics : PBCodable
{
    NEKPBDuplicateCheck *_duplicateCheck;	// 8 = 0x8
    NEKPBOccurrenceCache *_occurrenceCache;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000006f228
@property(retain, nonatomic) NEKPBOccurrenceCache *occurrenceCache; // @synthesize occurrenceCache=_occurrenceCache;
@property(retain, nonatomic) NEKPBDuplicateCheck *duplicateCheck; // @synthesize duplicateCheck=_duplicateCheck;
- (void)mergeFrom:(id)arg1;	// IMP=0x001000000006f14f
- (unsigned long long)hash;	// IMP=0x001000000006f102
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000006f04a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000006efac
- (void)copyTo:(id)arg1;	// IMP=0x001000000006ef49
- (void)writeTo:(id)arg1;	// IMP=0x001000000006eeec
- (_Bool)readFrom:(id)arg1;	// IMP=0x001000000006eedf
- (id)dictionaryRepresentation;	// IMP=0x001000000006ec1f
- (id)description;	// IMP=0x001000000006eb70
@property(readonly, nonatomic) _Bool hasOccurrenceCache;
@property(readonly, nonatomic) _Bool hasDuplicateCheck;

@end

