//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _NBMetadataHelper : NSObject
{
    NSCache *_metadataCache;	// 8 = 0x8
}

+ (id)jsonObjectFromZippedDataWithBytes:(char *)arg1 compressedLength:(unsigned long long)arg2 expandedLength:(unsigned long long)arg3;	// IMP=0x006000000000dd6e
+ (_Bool)hasValue:(id)arg1;	// IMP=0x006000000000dd2c
+ (id)countryCodeFromRegionCode:(id)arg1;	// IMP=0x006000000000da57
+ (id)regionCodeFromCountryCode:(id)arg1;	// IMP=0x006000000000d96a
+ (id)CN2CCodeMap;	// IMP=0x006000000000d4df
+ (id)CCode2CNMap;	// IMP=0x006000000000d1da
+ (id)phoneNumberDataMap;	// IMP=0x006000000000d133
- (void).cxx_destruct;	// IMP=0x000000000000de97
@property(retain, nonatomic) NSCache *metadataCache; // @synthesize metadataCache=_metadataCache;
- (id)getMetadataForNonGeographicalRegion:(id)arg1;	// IMP=0x000000000000dcca
- (id)getMetadataForRegion:(id)arg1;	// IMP=0x000000000000dad1
- (id)getAllMetadata;	// IMP=0x000000000000d536
- (id)init;	// IMP=0x000000000000d0dd

@end
