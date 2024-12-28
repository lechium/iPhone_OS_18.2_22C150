//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface RPTSettings : NSObject
{
    NSURL *_recapOverrideFileURL;	// 8 = 0x8
    long long _activationIterationCount;	// 16 = 0x10
}

+ (id)processEnvironment;	// IMP=0x00400000000063d1
- (void).cxx_destruct;	// IMP=0x00000000000065f0
@property(nonatomic) long long activationIterationCount; // @synthesize activationIterationCount=_activationIterationCount;
@property(retain, nonatomic) NSURL *recapOverrideFileURL; // @synthesize recapOverrideFileURL=_recapOverrideFileURL;
- (id)initFromDictionary:(id)arg1;	// IMP=0x00000000000064e8
- (id)init;	// IMP=0x0000000000006492

@end
