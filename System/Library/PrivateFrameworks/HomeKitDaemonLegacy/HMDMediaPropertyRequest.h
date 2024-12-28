//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaProfile, NSString;

__attribute__((visibility("hidden")))
@interface HMDMediaPropertyRequest : HMFObject
{
    NSString *_property;	// 8 = 0x8
    HMDMediaProfile *_mediaProfile;	// 16 = 0x10
    id _previousValue;	// 24 = 0x18
}

+ (id)deserializeReadRequests:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0060000000c47fe7
+ (id)serializeReadRequests:(id)arg1;	// IMP=0x0060000000c47ca8
+ (id)requestWithProperty:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0060000000c47c3a
- (void).cxx_destruct;	// IMP=0x0000000000c47bf8
@property(readonly, nonatomic) id previousValue; // @synthesize previousValue=_previousValue;
@property(readonly, nonatomic) HMDMediaProfile *mediaProfile; // @synthesize mediaProfile=_mediaProfile;
@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (id)description;	// IMP=0x0000000000c47aec
- (id)initWithProperty:(id)arg1 mediaProfile:(id)arg2;	// IMP=0x0000000000c47a4a

@end
