//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIRemoteViewController.h>

@protocol _SWRemoveParticipantAlertRemoteControllerDelegate;

__attribute__((visibility("hidden")))
@interface _SWRemoveParticipantAlertRemoteController : _UIRemoteViewController
{
    id <_SWRemoveParticipantAlertRemoteControllerDelegate> _delegate;	// 8 = 0x8
}

+ (id)exportedInterface;	// IMP=0x00100000000148fd
+ (id)serviceViewControllerInterface;	// IMP=0x0010000000014891
+ (id)requestViewControllerWithConnectionHandler:(CDUnknownBlockType)arg1;	// IMP=0x0010000000014725
- (void).cxx_destruct;	// IMP=0x0000000000014996
@property(nonatomic) __weak id <_SWRemoveParticipantAlertRemoteControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)dismissAlert;	// IMP=0x0000000000014854
- (void)_promptToRemoveParticipant:(id)arg1 fromHighlight:(id)arg2 preferredStyle:(long long)arg3;	// IMP=0x0000000000014785
- (void)viewServiceDidTerminateWithError:(id)arg1;	// IMP=0x0000000000014748

@end

