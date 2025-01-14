//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface APSMultiUserMode : NSObject
{
    _Bool _isMultiUser;	// 8 = 0x8
    _Bool _isLoggedInUser;	// 9 = 0x9
}

+ (_Bool)_getIsCurrentlyLoggedIn;	// IMP=0x0060000000001e20
+ (_Bool)_getMultiUserMode;	// IMP=0x0060000000001dc6
+ (id)sharedInstance;	// IMP=0x0060000000001ce0
@property(readonly, nonatomic) _Bool isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;
@property(readonly, nonatomic) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (_Bool)isMultiAndLoggedIn;	// IMP=0x0000000000001eee
- (id)initWithIsMultiUserMode:(_Bool)arg1 loggedInUser:(_Bool)arg2;	// IMP=0x0000000000001ea8

@end

