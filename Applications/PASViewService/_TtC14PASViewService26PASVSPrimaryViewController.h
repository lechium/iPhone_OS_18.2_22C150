//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

@class MISSING_TYPE;

@interface _TtC14PASViewService26PASVSPrimaryViewController : SBUIRemoteAlertServiceViewController
{
    MISSING_TYPE *device;	// 8 = 0x8
    MISSING_TYPE *targetDevice;	// 16 = 0x10
    MISSING_TYPE *flowController;	// 72 = 0x48
    MISSING_TYPE *validationResult;	// 80 = 0x50
    MISSING_TYPE *_extensionCache;	// 104 = 0x68
    MISSING_TYPE *_deviceProvider;	// 112 = 0x70
    MISSING_TYPE *designatedExtension;	// 120 = 0x78
    MISSING_TYPE *sourceViewDetails;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x004000000000f7c0
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000000f760
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x001000000000f5d0
- (void)didInvalidateForRemoteAlert;	// IMP=0x001000000000f230
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x001000000000f1d0
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000000e6a0

@end

