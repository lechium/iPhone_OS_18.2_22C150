//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MISSING_TYPE;

@interface _TtC5Files22DOCErrorViewController
{
    MISSING_TYPE *error;	// 160 = 0xa0
    MISSING_TYPE *source;	// 168 = 0xa8
    MISSING_TYPE *location;	// 176 = 0xb0
    MISSING_TYPE *authenticationAction;	// 184 = 0xb8
    MISSING_TYPE *autoPresentAuthenticationUI;	// 192 = 0xc0
}

- (void).cxx_destruct;	// IMP=0x002000000029fb60
- (void)applicationDidBecomeActive:(id)arg1;	// IMP=0x001000000029fa80
- (void)docUpdateContentUnavailableConfigurationUsingState:(id)arg1;	// IMP=0x001000000029f3a0
- (void)willMoveToParentViewController:(id)arg1;	// IMP=0x001000000029d820
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000029d7f0
- (void)viewDidLoad;	// IMP=0x001000000029d6f0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000029d550
- (void)actionController:(id)arg1 presentError:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000029fc50
- (void)actionControllerDidFinishAction:(id)arg1 error:(id)arg2;	// IMP=0x001000000029fbe0

@end

