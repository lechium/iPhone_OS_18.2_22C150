//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface ASCLockupFeatureDeveloperName : NSObject
{
    NSString *_developerName;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000152cb
- (void).cxx_destruct;	// IMP=0x0020000000015610
@property(readonly, copy, nonatomic) NSString *developerName; // @synthesize developerName=_developerName;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000015456
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000153d0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000015360
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000152d3
- (id)initWithDeveloperName:(id)arg1;	// IMP=0x0010000000015258

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly) Class superclass;

@end
