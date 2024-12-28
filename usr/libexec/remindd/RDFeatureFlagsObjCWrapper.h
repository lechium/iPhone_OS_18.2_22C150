//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface RDFeatureFlagsObjCWrapper : NSObject
{
    NSString *_rawValue;	// 8 = 0x8
}

+ (id)temporaryOverrideWithEnabledFeatureFlags:(id)arg1 disabledFeatureFlags:(id)arg2;	// IMP=0x00200000005e52a0
+ (id)wrappedFeatureFlagsWithRawValue:(id)arg1;	// IMP=0x00100000005e4da0
- (void).cxx_destruct;	// IMP=0x0020000000003815
@property(readonly, nonatomic) NSString *rawValue; // @synthesize rawValue=_rawValue;
- (id)initWithRawValue:(id)arg1;	// IMP=0x00100000000037a0
- (_Bool)isEnabled;	// IMP=0x00100000005e53b0

@end
