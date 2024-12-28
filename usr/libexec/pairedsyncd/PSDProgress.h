//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PSDProgress : NSObject
{
    float _activityProgress;	// 8 = 0x8
    unsigned long long _totalActivityCount;	// 16 = 0x10
    unsigned long long _completedActivityCount;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001e719
@property(nonatomic) unsigned long long completedActivityCount; // @synthesize completedActivityCount=_completedActivityCount;
@property(nonatomic) unsigned long long totalActivityCount; // @synthesize totalActivityCount=_totalActivityCount;
@property(nonatomic) float activityProgress; // @synthesize activityProgress=_activityProgress;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001e85d
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001e7ce
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001e721

@end
