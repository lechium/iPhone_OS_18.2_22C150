//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class BKDigitizerTouchStreamClient, MISSING_TYPE;

@interface BKTouchDestination
{
    MISSING_TYPE *_externalReferences;	// 8 = 0x8
    unsigned long long _predicate;	// 16 = 0x10
    BKDigitizerTouchStreamClient *_touchStream;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000a0847
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x00100000000a07ee
- (void)appendSuccinctDescriptionToFormatter:(id)arg1;	// IMP=0x00100000000a06b3
- (id)description;	// IMP=0x00100000000a0697
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000a061d

@end

