//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VoiceShortcuts/NSObject-Protocol.h>
#import <VoiceShortcuts/WFDialogXPCHostProtocol-Protocol.h>

@protocol WFDialogAlertPresenter, WFDialogXPCProtocol;

@protocol WFDialogAlertPresenterDelegate <NSObject, WFDialogXPCHostProtocol>
- (void)dialogAlertPresenterDidInvalidateAlert:(id <WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenterDidDeactivateAlert:(id <WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenterDidDisconnectFromAlert:(id <WFDialogAlertPresenter>)arg1;
- (void)dialogAlertPresenter:(id <WFDialogAlertPresenter>)arg1 didConnectToAlert:(id <WFDialogXPCProtocol>)arg2;
@end

