//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UIView;

@interface COSWatchDiscoveryTimeoutError
{
    UIView *_radarPromptView;	// 8 = 0x8
}

+ (_Bool)controllerNeedsToRun;	// IMP=0x002000000001c9e3
- (void).cxx_destruct;	// IMP=0x002000000001d5ab
@property(retain, nonatomic) UIView *radarPromptView; // @synthesize radarPromptView=_radarPromptView;
- (void)alternateButtonPressed:(id)arg1;	// IMP=0x001000000001d502
- (void)suggestedButtonPressed:(id)arg1;	// IMP=0x001000000001d428
- (id)imageResource;	// IMP=0x001000000001d417
- (_Bool)wantsLightenBlendedScreen;	// IMP=0x001000000001d40f
- (id)alternateButtonTitle;	// IMP=0x001000000001d3a3
- (id)suggestedButtonTitle;	// IMP=0x001000000001d337
- (id)detailString;	// IMP=0x001000000001d2cb
- (id)detailTitleString;	// IMP=0x001000000001d2c3
- (id)titleString;	// IMP=0x001000000001d257
- (void)_radarButtonTapped;	// IMP=0x001000000001d1ad
- (void)_showRadarUI;	// IMP=0x001000000001cb43
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x001000000001cace
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x001000000001ca3c
- (id)init;	// IMP=0x000000000001c9eb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
