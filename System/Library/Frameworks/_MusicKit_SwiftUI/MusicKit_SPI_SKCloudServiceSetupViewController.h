//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreKit/SKCloudServiceSetupViewController.h>

@class NSString;
@protocol MusicKit_SPI_SKCloudServiceSetupViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MusicKit_SPI_SKCloudServiceSetupViewController : SKCloudServiceSetupViewController
{
    id <MusicKit_SPI_SKCloudServiceSetupViewControllerDelegate> _musicKit_delegate;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000002bc9
@property(nonatomic, setter=musicKit_setDelegate:) __weak id <MusicKit_SPI_SKCloudServiceSetupViewControllerDelegate> musicKit_delegate; // @synthesize musicKit_delegate=_musicKit_delegate;
- (void)cloudServiceSetupViewControllerDidDismiss:(id)arg1;	// IMP=0x0000000000002b2f
- (id)_musicKit_underlyingMessageIdentifierForMessageIdentifier:(id)arg1;	// IMP=0x0000000000002a71
- (id)_musicKit_underlyingActionForAction:(id)arg1;	// IMP=0x0000000000002a35
- (id)_musicKit_underlyingOptionsForOptions:(id)arg1;	// IMP=0x000000000000275a
- (void)musicKit_loadWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000026df
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0000000000002690

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
