//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class IUIRTIInputSource, IUISessionCoordinator;

@interface IUIInputSourceViewController : UIViewController
{
    IUISessionCoordinator *_sessionCoordinator;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000000f59c
@property(retain, nonatomic) IUISessionCoordinator *sessionCoordinator; // @synthesize sessionCoordinator=_sessionCoordinator;
@property(readonly, nonatomic) IUIRTIInputSource *textInputSource;
- (void)viewDidLoad;	// IMP=0x001000000000f20f
- (_Bool)_canShowWhileLocked;	// IMP=0x001000000000f207

@end

