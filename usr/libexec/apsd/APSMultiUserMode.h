//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface APSMultiUserMode : NSObject
{
    _Bool _isMultiUser;	// 8 = 0x8
    _Bool _isLoggedInUser;	// 9 = 0x9
}

+ (_Bool)_getIsCurrentlyLoggedIn;	// IMP=0x00400000000086fa
+ (_Bool)_getMultiUserMode;	// IMP=0x00100000000086a0
+ (id)sharedInstance;	// IMP=0x00100000000085ba
- (_Bool);	// IMP=0x00200000000087e8
@property(readonly, nonatomic) _Bool isMultiUser; // @synthesize isMultiUser=_isMultiUser;
- (_Bool)isMultiAndLoggedIn;	// IMP=0x00100000000087c8
- (id)initWithIsMultiUserMode:(_Bool)arg1 loggedInUser:(_Bool)arg2;	// IMP=0x0010000000008782

// Remaining properties
@property(readonly, nonatomic) _Bool isLoggedInUser; // @synthesize isLoggedInUser=_isLoggedInUser;

@end

