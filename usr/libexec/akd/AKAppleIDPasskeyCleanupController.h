//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface AKAppleIDPasskeyCleanupController : NSObject
{
    MISSING_TYPE *passkeyValidator;	// 8 = 0x8
    MISSING_TYPE *authenticationController;	// 16 = 0x10
    MISSING_TYPE *accountManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00400000000f5240
- (id)init;	// IMP=0x00100000000f51e0
- (void)cleanupPasskeysFromKeychainWithcompletion:(void (^)(_Bool, NSError *))arg1;	// IMP=0x00100000000f4b50
- (id)initWithPasskeyValidator:(id)arg1 authenticationController:(id)arg2 accountManager:(id)arg3;	// IMP=0x00100000000f30f0

@end
