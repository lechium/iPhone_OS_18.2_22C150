//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WKWebView.h>

@class MISSING_TYPE;

@interface _TtC17PromotedContentUI22PromotedContentWebView : WKWebView
{
    MISSING_TYPE *_processDelegate;	// 8 = 0x8
    MISSING_TYPE *webProcessProxy;	// 24 = 0x18
    MISSING_TYPE *remoteObjectInterface;	// 32 = 0x20
    MISSING_TYPE *browserContextControllerDidLoad;	// 64 = 0x40
    MISSING_TYPE *adIdentifier;	// 72 = 0x48
    MISSING_TYPE *maxRequestCount;	// 88 = 0x58
    MISSING_TYPE *unfairLock;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x00000000000bc330
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x00000000000bc520
- (void)dealloc;	// IMP=0x00000000000bc260
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000bc180
- (void)didMoveToSuperview;	// IMP=0x00000000000bbe90
@property(nonatomic) struct CGRect frame;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;	// IMP=0x00000000000bc570
- (void)webProcessVideoAdJSODidCallExitFullScreenTapped:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd280
- (void)webProcessVideoAdJSODidCallFullScreenTapped:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd260
- (void)webProcessVideoAdJSODidCallSkipAdTapped:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd240
- (void)webProcessVideoAdJSODidCallVideoTapped:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd220
- (void)webProcessVideoAdJSODidCallMoreInfoTapped:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd200
- (void)webProcessVideoAdJSODidCallAudioUnmuted:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd1e0
- (void)webProcessVideoAdJSODidCallAudioMuted:(float)arg1;	// IMP=0x00000000000bd140
- (void)webProcessVideoAdJSODidCallVolumeChanged:(float)arg1 playTime:(float)arg2;	// IMP=0x00000000000bd120
- (void)webProcessVideoAdJSODidCallViewabilityChanged:(_Bool)arg1 playTime:(float)arg2 volume:(float)arg3;	// IMP=0x00000000000bd080
- (void)webProcessVideoAdJSODidCallPlayCompletedWithVolume:(float)arg1;	// IMP=0x00000000000bd060
- (void)webProcessVideoAdJSODidCallPlayProgressed:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd040
- (void)webProcessVideoAdJSODidCallPlayPaused:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd020
- (void)webProcessVideoAdJSODidCallPlayResumed:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bd000
- (void)webProcessVideoAdJSODidCallPlayStarted:(float)arg1 volume:(float)arg2;	// IMP=0x00000000000bcfe0
- (void)webProcessVideoAdJSOCreativeViewLoaded;	// IMP=0x00000000000bcf40
- (void)webProcessVideoAdJSOGetVideoInfo:(CDUnknownBlockType)arg1;	// IMP=0x00000000000bcdf0
- (void)webProcessMRAIDJSODidCallOpen:(id)arg1;	// IMP=0x00000000000bcc50
- (void)webProcessMRAIDJSODidCallCreateCalendarEvent:(id)arg1;	// IMP=0x00000000000bcb30
- (void)webProcessMRAIDJSODidCallExpand:(id)arg1 withMaximumWidth:(double)arg2 andHeight:(double)arg3;	// IMP=0x00000000000bca20
- (void)webProcessDiagnosticJSOStatusReported:(id)arg1 status:(id)arg2;	// IMP=0x00000000000bc910
- (void)webProcessMRAIDJSODidCallClose;	// IMP=0x00000000000bc8f0
- (void)webProcessPlugInBrowserContextControllerGlobalObjectIsAvailableForFrame;	// IMP=0x00000000000bc8d0
- (void)webProcessPlugInWillDestroyBrowserContextController;	// IMP=0x00000000000bc8a0
- (void)webProcessPlugInDidCreateBrowserContextController;	// IMP=0x00000000000bc6e0

@end

