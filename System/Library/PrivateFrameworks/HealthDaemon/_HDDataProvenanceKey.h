//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HDDataOriginProvenance, NSString;

__attribute__((visibility("hidden")))
@interface _HDDataProvenanceKey : NSObject
{
    unsigned long long _hash;	// 8 = 0x8
    HDDataOriginProvenance *_dataProvenance;	// 16 = 0x10
    NSString *_localProductType;	// 24 = 0x18
    NSString *_localSystemBuild;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002285e
- (id)description;	// IMP=0x00000000002fce7a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000047e54
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000022612
- (unsigned long long)hash;	// IMP=0x0000000000022608

@end

