//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface VNRecognizedBodyPointsSpecifier
{
    NSArray *_orderedPersonKeypoints;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000001742bc
- (void).cxx_destruct;	// IMP=0x0000000000173f43
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000173dd5
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000173d58
- (id)populatedMLMultiArrayAndReturnError:(id *)arg1;	// IMP=0x0000000000173754
- (id)pointKeyGroupLabelsMapping;	// IMP=0x0000000000173724
- (id)availableGroupKeys;	// IMP=0x00000000001736f4
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000173657
- (unsigned long long)hash;	// IMP=0x00000000001735fd
- (id)initWithVCPPersonObservation:(id)arg1 originatingRequestSpecifier:(id)arg2;	// IMP=0x0000000000173044

@end
