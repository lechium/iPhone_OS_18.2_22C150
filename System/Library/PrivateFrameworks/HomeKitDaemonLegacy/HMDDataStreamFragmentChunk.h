//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSData, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface HMDDataStreamFragmentChunk : HMFObject
{
    _Bool _last;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    NSNumber *_sequenceNumber;	// 24 = 0x18
    NSNumber *_fragmentSequenceNumber;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x000000000082b981
@property(readonly, getter=isLast) _Bool last; // @synthesize last=_last;
@property(readonly, copy) NSString *type; // @synthesize type=_type;
@property(readonly, copy) NSNumber *fragmentSequenceNumber; // @synthesize fragmentSequenceNumber=_fragmentSequenceNumber;
@property(readonly, copy) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(readonly) NSData *data; // @synthesize data=_data;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000082b90c
- (unsigned long long)hash;	// IMP=0x000000000082b7f9
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000082b581
- (id)attributeDescriptions;	// IMP=0x000000000082b30a
@property(readonly, copy) NSDictionary *dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;	// IMP=0x000000000082aa70
- (id)initWithData:(id)arg1 sequenceNumber:(id)arg2 fragmentSequenceNumber:(id)arg3 type:(id)arg4 isLast:(_Bool)arg5;	// IMP=0x000000000082a8d7

@end
