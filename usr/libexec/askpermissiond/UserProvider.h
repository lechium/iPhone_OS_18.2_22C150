//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface UserProvider : NSObject
{
}

+ (id)_authenticateWithUsername:(id)arg1 authenticationType:(long long)arg2;	// IMP=0x0020000000027734
+ (id)primaryiCloudUserWithAction:(long long)arg1 keychainError:(id *)arg2;	// IMP=0x001000000002715e
+ (id)localApprovalUser;	// IMP=0x0010000000026f1a
+ (void)setPreviousLocalApprovalUsername:(id)arg1;	// IMP=0x0010000000026ea6
+ (id)previousLocalApprovalUsername;	// IMP=0x0010000000026e48

@end

