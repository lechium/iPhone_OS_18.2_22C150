//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXEventProcessor, AXIPCServer;

@interface SCATSwitchControlServerInstance : NSObject
{
    AXIPCServer *_server;	// 8 = 0x8
    _Bool _switchesLoadedForAutomation;	// 16 = 0x10
    AXEventProcessor *_eventProcessor;	// 24 = 0x18
}

+ (id)serverInstance;	// IMP=0x004000000000613a
- (void).cxx_destruct;	// IMP=0x0020000000007ae4
@property(retain, nonatomic) AXEventProcessor *eventProcessor; // @synthesize eventProcessor=_eventProcessor;
- (id)clearSpokenPhrases:(id)arg1;	// IMP=0x0010000000007a5a
- (id)lastSpokenPhrases:(id)arg1;	// IMP=0x00100000000078fa
- (id)headTrackingPoint:(id)arg1;	// IMP=0x00100000000077ea
- (id)isDwellEnabled:(id)arg1;	// IMP=0x00100000000076cd
- (id)isManualScanEnabled:(id)arg1;	// IMP=0x00100000000075b0
- (id)isAutoScanEnabled:(id)arg1;	// IMP=0x0010000000007494
- (id)isScannerPaused:(id)arg1;	// IMP=0x001000000000737d
- (id)isScannerActive:(id)arg1;	// IMP=0x0010000000007266
- (id)currentFocusedElement:(id)arg1;	// IMP=0x00100000000070d4
- (id)switchControlAutomationCommandTriggered:(id)arg1;	// IMP=0x0010000000006f30
- (id)switchControlActionTriggered:(id)arg1;	// IMP=0x0010000000006dd3
- (_Bool)_handleRemoteSCATAction:(long long)arg1;	// IMP=0x0010000000006cbd
- (void)_removeAutomationSwitches;	// IMP=0x0010000000006b8e
- (void)_setupAutomationSwitches;	// IMP=0x00100000000069e3
- (id)_automationSwitches;	// IMP=0x00100000000064b9
- (void)dealloc;	// IMP=0x001000000000645e
- (id)_initServer;	// IMP=0x001000000000619f

@end
