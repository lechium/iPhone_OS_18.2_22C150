//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, VNRequestSpecifier;

__attribute__((visibility("hidden")))
@interface VNRecognizedPoints3DSpecifier : NSObject
{
    VNRequestSpecifier *_originatingRequestSpecifier;	// 8 = 0x8
    NSDictionary *_allRecognizedPoints;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000203dda
- (void).cxx_destruct;	// IMP=0x0000000000203db2
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000203da7
- (id)recognizedPointForKey:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000203cc3
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000203b48
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000203adb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000002039e9
- (unsigned long long)hash;	// IMP=0x00000000002039a6
- (id)recognizedPointsForGroupKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000002036e3
- (id)pointKeyGroupLabelsMapping;	// IMP=0x00000000002036ab
- (id)availableGroupKeys;	// IMP=0x0000000000203673
- (id)availableKeys;	// IMP=0x000000000020365d
- (id)originatingRequestSpecifier;	// IMP=0x000000000020364f
- (id)initWithOriginatingRequestSpecifier:(id)arg1 allRecognizedPoints:(id)arg2;	// IMP=0x00000000002035a4

@end
