//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, UIImage;

__attribute__((visibility("hidden")))
@interface _TtC14AppleIDSetupUI18AISSignInViewModel : NSObject
{
    MISSING_TYPE *contextProvider;	// 8 = 0x8
    MISSING_TYPE *step;	// 48 = 0x30
    MISSING_TYPE *selectedMember;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x0000000000023e10
- (id)init;	// IMP=0x0000000000023db0
@property(nonatomic, readonly) UIImage *headerImage;
- (id)authenticationContext;	// IMP=0x0000000000024b10
- (void)willAuthenticateWithContext:(id)arg1;	// IMP=0x0000000000024790
- (void)signInViewController:(id)arg1 didCompleteWithAuthenticationResults:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0000000000024600
- (void)signInViewControllerDidCancel:(id)arg1;	// IMP=0x0000000000023e70

@end

