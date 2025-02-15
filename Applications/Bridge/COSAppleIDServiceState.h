//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COSAppleIDAuthController;

@interface COSAppleIDServiceState : NSObject
{
    _Bool _signedIn;	// 8 = 0x8
    _Bool _signInSkipped;	// 9 = 0x9
    _Bool _recoveringCredentials;	// 10 = 0xa
    _Bool _signInResponseFromWatchPendingAcknowledgement;	// 11 = 0xb
    _Bool _waitingForSilentSigninToComplete;	// 12 = 0xc
    _Bool _silentSignInSuccessful;	// 13 = 0xd
    long long _serviceType;	// 16 = 0x10
    COSAppleIDAuthController *_authController;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000100eef
@property(retain, nonatomic) COSAppleIDAuthController *authController; // @synthesize authController=_authController;
@property(nonatomic) _Bool silentSignInSuccessful; // @synthesize silentSignInSuccessful=_silentSignInSuccessful;
@property(nonatomic) _Bool waitingForSilentSigninToComplete; // @synthesize waitingForSilentSigninToComplete=_waitingForSilentSigninToComplete;
@property(readonly, nonatomic) long long serviceType; // @synthesize serviceType=_serviceType;
@property(nonatomic) _Bool signInResponseFromWatchPendingAcknowledgement; // @synthesize signInResponseFromWatchPendingAcknowledgement=_signInResponseFromWatchPendingAcknowledgement;
@property(nonatomic) _Bool recoveringCredentials; // @synthesize recoveringCredentials=_recoveringCredentials;
@property(nonatomic) _Bool signInSkipped; // @synthesize signInSkipped=_signInSkipped;
@property(nonatomic) _Bool signedIn; // @synthesize signedIn=_signedIn;
- (id)description;	// IMP=0x0010000000100df0
- (id)initWithServiceType:(long long)arg1;	// IMP=0x0010000000100daf

@end

