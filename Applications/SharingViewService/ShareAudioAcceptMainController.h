//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUBluetoothClient, ShareAudioAcceptAskViewController, UIStoryboard;

@interface ShareAudioAcceptMainController
{
    CUBluetoothClient *_btClient;	// 24 = 0x18
    _Bool _dismissed;	// 32 = 0x20
    UIStoryboard *_storyboard;	// 40 = 0x28
    ShareAudioAcceptAskViewController *_vcAsk;	// 48 = 0x30
    unsigned int _btProductID;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000001130fb
@property(nonatomic) unsigned int btProductID; // @synthesize btProductID=_btProductID;
- (void)dismissWithAction:(int)arg1;	// IMP=0x0010000000112f33
- (void)xpcStarted:(id)arg1;	// IMP=0x0010000000112ec7
- (void)dismiss:(int)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000112da7
- (void)dismiss:(int)arg1;	// IMP=0x0010000000112d93
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0010000000112c2f
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x0010000000112a3e
- (unsigned long long)desiredHomeButtonEvents;	// IMP=0x0010000000112a36

@end

